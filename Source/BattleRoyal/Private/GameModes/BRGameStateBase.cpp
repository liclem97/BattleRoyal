// Fill out your copyright notice in the Description page of Project Settings.

#include "BRGameStateBase.h"
#include "BRGameModeBase.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

ABRGameStateBase::ABRGameStateBase()
{
    CurrentCirclePosition = FVector::ZeroVector;
    TargetCirclePosition = FVector(11130.0f, 312440.0f, 0.0f); // 목표 안전지대 지점 임의 지정.
    CurrentCircleRadius = 600000.0f;
    TargetCircleRadius = 15000.0f;

    bVisibleCurrentCircle = false;
    bVisibleTargetCircle = false;
    bNotifiedShowTime = false;
    bNotifiedShrinkTime = false;

    WaitingTime = 10;
    ShowTime = 10;
    ShrinkTime = 10;
    CurrentPhase = 0;

    static ConstructorHelpers::FObjectFinder<UDataTable> PhaseDataTableObj(TEXT("/Game/GameModes/Battle/ElectricFieldPhaseTable"));
    if (PhaseDataTableObj.Succeeded())
    {
        PhaseDataTable = PhaseDataTableObj.Object;
    }
}

void ABRGameStateBase::BeginPlay()
{
    Super::BeginPlay();

    // 전지 지대 활성화.
    SetElectricFieldPhase(1, FVector(0.0f, 0.0f, 0.0f), 0.0f);
}

// 전기 지대 타이머 업데이트 함수.
void ABRGameStateBase::UpdateCircleMainTimer()
{
    WaitingTime--;
    if (!(WaitingTime >= 0))
    {
        // 다음 안전 지대 표시.
        if (!bVisibleTargetCircle)
        {
            bVisibleTargetCircle = true;
        }

        ShowTime--;
        if ((ShowTime >= 0))
        {
            if (!bNotifiedShowTime)
            {
                Notify(TEXT("새로운 자기장 영역이 생성되었습니다."));
                bNotifiedShowTime = true;
            }
        }
        else
        {
            if (!bVisibleCurrentCircle)
            {
                bVisibleCurrentCircle = true;
            }

            ShrinkTime--;
            if (ShrinkTime >= 0)
            {
                CurrentCirclePosition = CurrentCirclePosition + DeltaPositionPerSec;
                CurrentCircleRadius = CurrentCircleRadius + DeltaRadiusPerSec;

                if(!bNotifiedShrinkTime)
                {
                    Notify(TEXT("자기장 영역이 줄어들기 시작합니다."));
                    bNotifiedShrinkTime = true;
                }
            }
            else // 원이 전부 줄어들었을 경우 실행
            {
                if (bVisibleTargetCircle)
                {
                    bVisibleTargetCircle = false;
                    SetElectricFieldPhase(CurrentPhase + 1, TargetCirclePosition, TargetCircleRadius);
                }
            }
        }
    }
}

// 전기 지대의 페이즈, 위치, 크기 등을 설정하는 함수.
void ABRGameStateBase::SetElectricFieldPhase(int32 Phase, FVector PreCirclePosition, float PreCircleRadius)
{
    // 기존에 보였던 안내 메시지를 비표시 함.
    bNotifiedShowTime = false;
    bNotifiedShrinkTime = false;

    if (PhaseDataTable)
    {
        // 페이즈 데이터 테이블에서 정보를 받아와서 저장.
        FName PhaseRowName = FName(*FString::FromInt(Phase));
        FElectricFieldRow *PhaseData = PhaseDataTable->FindRow<FElectricFieldRow>(PhaseRowName, FString(""));
        if (PhaseData)
        {
            CurrentPhase = PhaseData->Phase;
            CurrentCirclePosition = PhaseData->CurrentCirclePosition;
            CurrentCircleRadius = PhaseData->CurrentCircleRadius;
            TargetCirclePosition = PhaseData->TargetCirclePosition;
            TargetCircleRadius = PhaseData->TargetCircleRadius;
            WaitingTime = PhaseData->WaitTime;
            ShowTime = PhaseData->ShowTime;
            ShrinkTime = PhaseData->ShrinkTime;
            bVisibleCurrentCircle = false;

            if (CurrentPhase > 1)
            {
                bVisibleCurrentCircle = true;
            }
            bVisibleTargetCircle = false;

            // 해당 페이즈의 Random이 켜져있을 경우 다음 원의 위치를 랜덤으로 지정함.
            if (PhaseData->UseRandomTarget)
            {
                // 기존 원의 위치와 크기를 저장.
                CurrentCirclePosition = PreCirclePosition;
                CurrentCircleRadius = PreCircleRadius;

                float RandNumber = FMath::FRandRange(PhaseData->RandomTargetDistanceMin, PhaseData->RandomTargetDistanceMax);
                FVector RandomUnitVector = FMath::VRand();

                TargetCirclePosition = CurrentCirclePosition + (RandomUnitVector * RandNumber);
            }
            DeltaPositionPerSec = (TargetCirclePosition - CurrentCirclePosition) / ShrinkTime;
            DeltaRadiusPerSec = (TargetCircleRadius - CurrentCircleRadius) / float(ShrinkTime);
        }
    }
}

// 서버 알림 함수.
void ABRGameStateBase::Notify(FString Message)
{
    ABRGameModeBase *GM = Cast<ABRGameModeBase>(GetWorld()->GetAuthGameMode());
    if (GM)
    {
        GM->SayToAll(Message);
        GetWorldTimerManager().SetTimer(TimerHandle_SayToAllClear, this, &ABRGameStateBase::ResetMessage, 1.0f, false, 5.0f);
    }
}

// 서버 알림 함수 초기화.
void ABRGameStateBase::ResetMessage()
{
    ABRGameModeBase *GM = Cast<ABRGameModeBase>(GetWorld()->GetAuthGameMode());
    if (GM)
    {
        GM->SayToAll("");
    }
}

void ABRGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ABRGameStateBase, AliveCount);
    DOREPLIFETIME(ABRGameStateBase, bDamageAvailable);
    DOREPLIFETIME(ABRGameStateBase, CurrentCirclePosition);
    DOREPLIFETIME(ABRGameStateBase, TargetCirclePosition);
    DOREPLIFETIME(ABRGameStateBase, CurrentCircleRadius);
    DOREPLIFETIME(ABRGameStateBase, TargetCircleRadius);
    DOREPLIFETIME(ABRGameStateBase, bVisibleCurrentCircle);
    DOREPLIFETIME(ABRGameStateBase, bVisibleTargetCircle);
}
