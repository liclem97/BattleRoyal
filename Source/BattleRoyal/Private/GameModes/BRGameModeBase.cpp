// Fill out your copyright notice in the Description page of Project Settings.

#include "BRGameModeBase.h"
#include "BRPlayerController.h"
#include "BRCharacter.h"
#include "BRGameStateBase.h"
#include "BRAirplane.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"

ABRGameModeBase::ABRGameModeBase()
{
    DefaultPawnClass = ABRCharacter::StaticClass();
    PlayerControllerClass = ABRPlayerController::StaticClass();
    PlayingState = EPlayingState::Waiting;

    // 시작을 위한 플레이어의 수.
    MinimumPlayerCount = 2;
    RemainTimeToStart = 7;
    WaitingTime = 7;

    // 세레모니 시간.
    RemainTimeOfCeremony = 10;
    ElectricDamage = 10.0f;
}

void ABRGameModeBase::PostLogin(APlayerController *NewPlayer)
{
    Super::PostLogin(NewPlayer);
    // UE_LOG(LogTemp, Log, TEXT("GM : PostLogin"));

    ABRPlayerController *PC = Cast<ABRPlayerController>(NewPlayer);
    if (PC)
    {
        if (PlayingState == EPlayingState::Waiting)
        {
            // 플레이어 PostLogin 시 AlivePCs 배열에 추가 및 추가된 PC에 서버 메시지 보냄.
            AlivePCs.Add(PC);
            PC->NotificationFromServer = FText::FromString(TEXT("어서오세요. 환영합니다."));
        }
        else
        {
            // 유효하지 않을 시 0.1초 후 만료.
            PC->SetLifeSpan(0.1f);
        }
    }
}

void ABRGameModeBase::Logout(AController *ExitingController)
{
    Super::Logout(ExitingController);

    ABRPlayerController *PC = Cast<ABRPlayerController>(ExitingController);
    if (PC)
    {
        // 플레이어 로그아웃 시 AlivePCs 배열에서 삭제.
        AlivePCs.Remove(PC);
    }
}

void ABRGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    // 시작하기 위한 시간 초기화.
    RemainTimeToStart = WaitingTime;

    // 액터 배열을 만들어 "C130" 태그를 가진 액터를 찾음.
    TArray<AActor *> Result;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), "C130", Result);
    if (Result.Num() > 0)
    {
        ABRAirplane *BP_C130 = Cast<ABRAirplane>(Result[0]);
        if (BP_C130)
        {
            // C130을 정상적으로 찾으면 저장 후 MainTimerEvent 활성화.
            C130 = BP_C130;
            GetWorldTimerManager().SetTimer(TimerHandle_MainTimer, this, &ABRGameModeBase::MainTimerEvent, 1.0f, true, 0.0f);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("C130 Not Found"));
    }
}

// GM에서 PC로 메시지를 전달하기 위한 함수.
void ABRGameModeBase::SayToAll(FString Message)
{
    for (int i = 0; i < AlivePCs.Num(); i++)
    {
        if (AlivePCs[i]->IsValidLowLevel())
        {
            AlivePCs[i]->NotificationFromServer = FText::FromString(Message);
        }
    }
    for (int i = 0; i < DeadPCs.Num(); i++)
    {
        if (DeadPCs[i]->IsValidLowLevel())
        {
            DeadPCs[i]->NotificationFromServer = FText::FromString(Message);
        }
    }
}

// 서버에서 전달한 메시지를 삭제하기 위한 함수.
void ABRGameModeBase::ClearSayToAll()
{
    SayToAll(TEXT(""));
}

// 메인 타이머 함수.
void ABRGameModeBase::MainTimerEvent()
{
    switch (PlayingState)
    {
    case EPlayingState::Waiting:
        WaitingFunc();
        break;
    case EPlayingState::Battle:
        BattleFunc();
        break;
    case EPlayingState::Ceremony:
        CeremonyFunc();
        break;
    }
}

// 대기 시간 중 작동하는 함수.
void ABRGameModeBase::WaitingFunc()
{
    if (AlivePCs.Num() >= MinimumPlayerCount)
    {
        RemainTimeToStart--;
        if (RemainTimeToStart == 0)
        {
            PlayingState = EPlayingState::Battle;
            ABRGameStateBase *GS = Cast<ABRGameStateBase>(UGameplayStatics::GetGameState(GetWorld()));
            if (GS)
            {
                // 지금부터 플레이어에게 데미지를 입힐 수 있음.
                GS->bDamageAvailable = true;
                SayToAll(TEXT("전투를 시작합니다."));
                for (int i = 0; i < AlivePCs.Num(); i++)
                {
                    if (AlivePCs[i]->IsValidLowLevel())
                    {
                        AlivePCs[i]->RideInC130(C130); // 플레이어를 C130에 태움.
                    }
                }

                // C130 출발.
                C130->bStarted = true;

                // 5초 후 서버 메시지 삭제.
                GetWorldTimerManager().SetTimer(TimerHandle_SayToAll, this, &ABRGameModeBase::ClearSayToAll, 1.0f, false, 5.0f);
            }
        }
        else
        {
            FString TimeString = FormatWithSec(RemainTimeToStart);
            SayToAll(FString::Printf(TEXT("전투시작까지 %s 남았습니다."), *TimeString));
        }
    }
    else
    {
        RemainTimeToStart = WaitingTime;
        SayToAll(TEXT("다른 유저의 접속을 기다리는 중 입니다."));
    }
}

// 전투 중 작동하는 함수.
void ABRGameModeBase::BattleFunc()
{
    ABRGameStateBase *GS = Cast<ABRGameStateBase>(UGameplayStatics::GetGameState(GetWorld()));
    if (GS)
    {
        // 매 초마다 서클 함수 업데이트.
        GS->UpdateCircleMainTimer();

        GS->AliveCount = AlivePCs.Num();
        if (GS->AliveCount <= 1)
        {
            // 살아남은 플레이어 수가 1명 이하일 시 승리 결과 창을 표시 후 Ceremony 상태로 바꿈.
            AlivePCs[0]->ShowWinnerResult();
            PlayingState = EPlayingState::Ceremony;
        }
        else
        {
            if (GS->bVisibleCurrentCircle)
            {
                for (int i = 0; i < AlivePCs.Num(); i++)
                {
                    ABRCharacter *PlayerPawn = Cast<ABRCharacter>(AlivePCs[i]->GetPawn());
                    if (PlayerPawn)
                    {
                        // 플레이어 포지션과 현재 원의 포지션을 이용하여 VectorLength를 구함.
                        FVector CharacterLocation = FVector(PlayerPawn->GetActorLocation().X, PlayerPawn->GetActorLocation().Y, 0.0f);
                        FVector CirclePosition = FVector(GS->CurrentCirclePosition.X, GS->CurrentCirclePosition.Y, 0.0f);
                        FVector VectorLength = CharacterLocation - CirclePosition;

                        // 캐릭터가 원 밖에 있는 경우 실행.
                        if (VectorLength.Size() >= GS->CurrentCircleRadius)
                        {
                            // 플레이어에게 전기 대미지를 주고 화면에 BloodScreenEffect 표시.
                            UGameplayStatics::ApplyDamage(PlayerPawn, ElectricDamage, nullptr, nullptr, NULL);
                            ABRPlayerController *PC = Cast<ABRPlayerController>(AlivePCs[i]);
                            if (PC)
                            {
                                PC->ShowBloodScreenEffect();
                            }
                        }
                    }
                }
            }
        }
    }
}

// 세레모니 함수.
void ABRGameModeBase::CeremonyFunc()
{
    RemainTimeOfCeremony--;

    // 남아있는 시간이 0일 경우 살아있는 플레이어와 죽은 플레이어 모두 Lobby로 강제 이동.
    if (RemainTimeOfCeremony == 0)
    {
        GetWorldTimerManager().ClearTimer(TimerHandle_MainTimer);
        for (int i = 0; i < AlivePCs.Num(); i++)
        {
            if (AlivePCs[i]->IsValidLowLevel())
            {
                AlivePCs[i]->BackToLobby();
            }
        }
        for (int i = 0; i < DeadPCs.Num(); i++)
        {
            if (DeadPCs[i]->IsValidLowLevel())
            {
                DeadPCs[i]->BackToLobby();
            }
        }
        FString OpenLevel = UGameplayStatics::GetCurrentLevelName(GetWorld(), true);
        FName OpenLevelName(*OpenLevel);

        // 서버를 다시 Listen 상태로 변경.
        UGameplayStatics::OpenLevel(GetWorld(), OpenLevelName, true, FString(TEXT("listen")));
    }
    else
    {
        SayToAll(FString::Printf(TEXT("%d초 후에 로비로 이동합니다."), RemainTimeOfCeremony));
    }
}

// 캐릭터 사망 시 실행되는 함수.
void ABRGameModeBase::OnCharacterDeath(ABRPlayerController *PC)
{
    PC->ShowDeathResult(AlivePCs.Num());
    AlivePCs.Remove(PC);
    DeadPCs.Add(PC);
}

// 플레이어가 끝까지 C130에 탑승 하고 있을 시 실행되는 함수.
void ABRGameModeBase::AllDive()
{
    for (int i = 0; i < AlivePCs.Num(); i++)
    {
        if (AlivePCs[i]->IsValidLowLevel() && !AlivePCs[i]->bDived)
        {
            AlivePCs[i]->WantToDive();
        }
    }
}

// 분, 초 계산 함수.
FString ABRGameModeBase::FormatWithSec(int32 Sec)
{
    FString ResultString = "";
    int32 Min = Sec / 60;
    int32 NewSec = Sec % 60;

    if (Min != 0)
    {
        ResultString = FString::Printf(TEXT("%d분"), Min);
    }

    if (NewSec != 0)
    {
        if (!ResultString.IsEmpty())
        {
            ResultString += " ";
        }
        ResultString += FString::Printf(TEXT("%d초"), NewSec);
    }

    return ResultString;
}