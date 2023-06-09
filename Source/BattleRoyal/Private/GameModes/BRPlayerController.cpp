// Fill out your copyright notice in the Description page of Project Settings.

#include "BRPlayerController.h"
#include "BRAirplane.h"
#include "BRCharacter.h"
#include "BRHealthComponent.h"
#include "BRGameModeBase.h"
#include "BRGameStateBase.h"
#include "BRWorldMap.h"
#include "BRFlyingViewer.h"
#include "Blueprint/UserWidget.h"
#include "ClientMainWidget.h"
#include "ResultWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "WidgetBlueprintLibrary.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/InputComponent.h"
#include "UserWidget.h"

ABRPlayerController::ABRPlayerController()
{
    static ConstructorHelpers::FClassFinder<UUserWidget> MainClass(TEXT("WidgetBlueprint'/Game/GameModes/Battle/UMG/WidgetBP_ClientMain.WidgetBP_ClientMain_C'"));
    if (MainClass.Succeeded())
    {
        MainWidgetClass = MainClass.Class;
    }

    static ConstructorHelpers::FClassFinder<UUserWidget> ResultClass(TEXT("WidgetBlueprint'/Game/GameModes/Battle/UMG/WidgetBP_Result.WidgetBP_Result_C'"));
    if (ResultClass.Succeeded())
    {
        ResultWidgetClass = ResultClass.Class;
    }

    static ConstructorHelpers::FClassFinder<APawn> FlyingViewerPawn(TEXT("Blueprint'/Game/Characters/BP_FlyingViewer.BP_FlyingViewer_C'"));
    if (FlyingViewerPawn.Succeeded())
    {
        FlyingViewer = FlyingViewerPawn.Class;
    }

    static ConstructorHelpers::FClassFinder<ABRCharacter> NewCharacter(TEXT("Blueprint'/Game/Characters/BP_Player.BP_Player_C'"));
    if (NewCharacter.Succeeded())
    {
        BP_Player = NewCharacter.Class;
    }

    bDived = false;
    bIsMapOpenned = false;
    bAirplane = false;

    WorldMapSize = FVector(816000.0f, 816000.0f, 0.0f);
}

void ABRPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // "C130" Tag를 가진 액터를 찾아서 저장 함.
    TArray<AActor *> Actors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), "C130", Actors);
    if (Actors.Num() > 0)
    {
        C130 = Cast<ABRAirplane>(Actors[0]);
    }

    // 클라이언트에서 실행.
    if (!HasAuthority())
    {
        // GS, MainWidget 등을 찾아서 저장 및 클라이언트 화면에 표시.
        ABRGameStateBase *GS = Cast<ABRGameStateBase>(UGameplayStatics::GetGameState(GetWorld()));
        MainWidget = CreateWidget<UClientMainWidget>(this, MainWidgetClass);
        if (MainWidget)
        {
            MainWidget->SetPROPERTY(this, GS);
            MainWidget->AddToViewport();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Client Main Widget is nullptr"));
        }
    }
}

// 서버에서 메시지를 받아서 메인 위젯에 표시하는 함수.
void ABRPlayerController::ServerMsg(FString NewMsg)
{
    if (MainWidget)
    {
        MainWidget->NewMsg(FText::FromString(NewMsg));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("MainWidget is nullptr"));
    }
}

// 메시지 변수가 바뀔 때 마다 클라이언트 전체에 메시지를 뿌리는 함수.
void ABRPlayerController::OnRep_NotificationFromServer()
{
    ServerMsg(NotificationFromServer.ToString());
}

// 플레아어 캐릭터 사망 함수.
void ABRPlayerController::OnCharacterDeath()
{
    ABRGameModeBase *GM = Cast<ABRGameModeBase>(GetWorld()->GetAuthGameMode());
    if (GM)
    {
        GM->OnCharacterDeath(this);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Gamemode cast failed"))
    }
}

// 플레이어 사망 시 결과창 표시 함수.
void ABRPlayerController::ShowDeathResult_Implementation(int32 NewRank)
{
    // 클라이언트에서 실행.
    if (!HasAuthority())
    {
        ResultWidget = CreateWidget<UResultWidget>(this, ResultWidgetClass);
        if (ResultWidget)
        {
            FString AppendString = "#";
            AppendString.Append(FString::FromInt(NewRank));

            ResultWidget->SetRankText(FText::FromString(AppendString));
            ResultWidget->SetResultText(FText::FromString(TEXT("그래 그럴 수 있어..")));
            ResultWidget->AddToViewport();

            // InputMode 변경 및 마우스 표시.
            UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this, ResultWidget, EMouseLockMode::DoNotLock);
            bShowMouseCursor = true;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Result Widget is nullptr"));
        }
    }
}

bool ABRPlayerController::ShowDeathResult_Validate(int32 NewRank)
{
    return true;
}

// 플레이어 승리 시 결과창 표시 함수.
void ABRPlayerController::ShowWinnerResult_Implementation()
{
    if (!HasAuthority())
    {
        ResultWidget = CreateWidget<UResultWidget>(this, ResultWidgetClass);
        if (ResultWidget)
        {
            ResultWidget->SetRankText(FText::FromString(TEXT("#1")));
            ResultWidget->SetResultText(FText::FromString(TEXT("치킨각 인정? 어 인정..")));
            ResultWidget->AddToViewport();

            // InputMode 변경 및 마우스 표시.
            UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this, ResultWidget, EMouseLockMode::DoNotLock);
            bShowMouseCursor = true;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Result Widget is nullptr"));
        }
    }
}

bool ABRPlayerController::ShowWinnerResult_Validate()
{
    return true;
}

// 로비 이동 함수.
void ABRPlayerController::BackToLobby_Implementation()
{
    UGameplayStatics::OpenLevel(GetWorld(), "Lobby");
}

bool ABRPlayerController::BackToLobby_Validate()
{
    return true;
}

// 플레이어를 C130에 태우는 함수.
void ABRPlayerController::RideInC130_Implementation(ABRAirplane *C130)
{
    APawn *ControlledPawn = GetPawn();
    if (ControlledPawn)
    {
        // 기존 컨트롤 하던 폰을 삭제하고 Possess를 해제 함.
        ControlledPawn->Destroy();
        UnPossess();

        if (FlyingViewer)
        {
            // FlyingViewer를 소환 후 빙의 및 C130에 부착 함.
            FActorSpawnParameters SpawnParams;
            APawn *NewViewer = GetWorld()->SpawnActor<APawn>(FlyingViewer, C130->GetActorLocation(), C130->GetActorRotation(), SpawnParams);
            Possess(NewViewer);
            NewViewer->AttachToActor(C130, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Flying Viewer is nullptr"));
        }
    }
}

bool ABRPlayerController::RideInC130_Validate(ABRAirplane *C130)
{
    return true;
}

// FlyingViewer를 제거하고 비행기 10m 아래에서 캐릭터 스폰 및 Possess 함수.
void ABRPlayerController::WantToDive_Implementation()
{
    if (!bDived)
    {
        bDived = true;
        APawn *ControlledPawn = GetPawn();
        if (ControlledPawn)
        {
            FVector Location = ControlledPawn->GetActorLocation();
            FVector NewLocation = FVector(Location.X, Location.Y, Location.Z - 1000.0f); // Z값 10m 아래 설정.
            FTransform Transform = FTransform(FRotator::ZeroRotator, NewLocation, FVector(1.0f, 1.0f, 1.0f));

            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

            ABRCharacter *SpawnCharacter = GetWorld()->SpawnActor<ABRCharacter>(BP_Player, Transform, SpawnParams);
            ControlledPawn->Destroy();

            SpawnCharacter->SetDiving(true);
            Possess(SpawnCharacter);
        }
    }
}

bool ABRPlayerController::WantToDive_Validate()
{
    return true;
}

// 요청한 위젯을 화면에서 제거하는 함수.
void ABRPlayerController::WidgetDestroy(UUserWidget *DeleteWidget)
{
    if (DeleteWidget)
    {
        DeleteWidget->RemoveFromParent();
    }
}

// 월드 맵을 여는 함수.
void ABRPlayerController::WorldmapAction()
{
    if (!bIsMapOpenned) // 맵이 안열려있을 경우 실행
    {
        bIsMapOpenned = true;
        if (WorldMapWidget)
        {
            WorldMapWidget->AddToViewport();
        }
        else
        {
            if (WorldMapClass)
            {
                ABRGameStateBase *GS = Cast<ABRGameStateBase>(UGameplayStatics::GetGameState(GetWorld()));
                WorldMapWidget = CreateWidget<UBRWorldMap>(this, WorldMapClass);
                WorldMapWidget->SetPROPERTY(this, GS);
                WorldMapWidget->AddToViewport();
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("WorldMapClass is nullptr!"));
            }
        }
    }
    else // 맵이 열려있는 경우 실행
    {
        bIsMapOpenned = false;
        if (WorldMapWidget)
        {
            WorldMapWidget->RemoveFromParent();
        }
    }
}

// 플레이어의 현재 위치를 반환하는 함수.
FVector ABRPlayerController::GetPawnPosition()
{
    APawn *ControlledPawn = GetPawn();
    if (ControlledPawn->IsValidLowLevel())
    {
        return ControlledPawn->GetActorLocation();
    }
    else
    {
        // 조종 중인 Pawn이 유효하지 않을 시 쓰레기값 반환
        return FVector(99999999.0f, 99999999.0f, 0.0f);
    }
}

// 월드 맵의 크기를 반환하는 함수.
FVector ABRPlayerController::GetMapSize()
{
    return WorldMapSize;
}

// 플레이어가 현재 C130에 탑승 중인지 반환하는 함수.
bool ABRPlayerController::IsAirPlane()
{
    APawn *ControlledPawn = GetPawn();
    ABRFlyingViewer *FlyingViewer = Cast<ABRFlyingViewer>(ControlledPawn);
    if (FlyingViewer)
    {
        return bAirplane = true;
    }
    else
    {
        return bAirplane = false;
    }
}

// 플레이어가 보고있는 방향을 반환하는 함수.
FVector ABRPlayerController::GetForward()
{
    if (bAirplane && C130)
    {
        return C130->GetActorForwardVector();
    }
    else
    {
        APawn *ControlledPawn = GetPawn();
        return ControlledPawn->GetActorForwardVector();
    }
}

// 클라이언트에 BloodScreen을 출력하는 함수.
void ABRPlayerController::ShowBloodScreenEffect_Implementation()
{
    MainWidget->PlayBloodScreen();
}

bool ABRPlayerController::ShowBloodScreenEffect_Validate()
{
    return true;
}

void ABRPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction("WorldMap", IE_Pressed, this, &ABRPlayerController::WorldmapAction);
}

void ABRPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ABRPlayerController, NotificationFromServer);
}