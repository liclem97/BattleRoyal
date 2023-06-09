// Fill out your copyright notice in the Description page of Project Settings.

#include "ClientMainWidget.h"
#include "BRPlayerController.h"
#include "BRCharacter.h"
#include "BRHealthComponent.h"
#include "BRGameStateBase.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetMathLibrary.h"

void UClientMainWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UClientMainWidget::SetPROPERTY(ABRPlayerController *NewPC, ABRGameStateBase *NewGS)
{
    PlayerController = NewPC;
    GameState = NewGS;
}

// 받은 메시지를 출력하는 함수.
void UClientMainWidget::NewMsg(FText NewMsg)
{
    if (ServerMsg)
    {
        ServerMsg->SetText(NewMsg);
    }
}

// 살아있는 인원 수를 출력하는 함수.
FText UClientMainWidget::AliveCountFunc()
{
    if (GameState->IsValidLowLevel())
    {
        return FText::FromString(FString::FromInt(GameState->AliveCount));
    }
    else
    {
        return FText::FromString(TEXT("00"));
    }
}

// 플레이어 HP의 비율을 설정하는 함수.
float UClientMainWidget::SetPlayerHPRatio()
{
    if (PlayerController)
    {
        ABRCharacter *Player = Cast<ABRCharacter>(PlayerController->GetPawn());
        UBRHealthComponent *HealthComp = Player->GetHealthComponent();
        if (Player && HealthComp)
        {
            float Health = HealthComp->GetHealth();
            float DefaultHealth = HealthComp->GetDefaultHealth();
            float NewRatio = FMath::Clamp(Health / DefaultHealth, 0.0f, 1.0f);
            return NewRatio;
        }
    }

    return 0.0f;
}