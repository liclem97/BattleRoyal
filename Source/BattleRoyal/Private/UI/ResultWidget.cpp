// Fill out your copyright notice in the Description page of Project Settings.

#include "ResultWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UResultWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (GoToLobby)
    {
        GoToLobby->OnClicked.AddDynamic(this, &UResultWidget::OnGoToLobbyClicked);
    }
}

// 결과 텍스트를 줄력하는 함수.
void UResultWidget::SetResultText(FText NewResultText)
{
    if (ResultText)
    {
        ResultText->SetText(NewResultText);
    }
}

// 랭크 텍스트를 출력하는 함수.
void UResultWidget::SetRankText(FText NewRankText)
{
    if (Rank)
    {
        Rank->SetText(NewRankText);
    }
}

// 로비 버튼 클릭시 실행 함수.
void UResultWidget::OnGoToLobbyClicked()
{
    UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}