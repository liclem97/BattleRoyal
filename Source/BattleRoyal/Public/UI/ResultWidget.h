// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResultWidget.generated.h"

/**
 *
 */
UCLASS()
class BATTLEROYAL_API UResultWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock *ResultText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock *Rank;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton *GoToLobby;

	UFUNCTION()
	void OnGoToLobbyClicked();

	void SetResultText(FText NewResultText);

	void SetRankText(FText NewRankText);
};
