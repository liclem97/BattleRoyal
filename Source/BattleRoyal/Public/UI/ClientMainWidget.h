// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ClientMainWidget.generated.h"

class ABRPlayerController;
class ABRGameStateBase;
/**
 *
 */
UCLASS()
class BATTLEROYAL_API UClientMainWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	void SetPROPERTY(ABRPlayerController *NewPC, ABRGameStateBase *NewGS);

	void NewMsg(FText NewMsg);

	UFUNCTION(BlueprintCallable)
	FText AliveCountFunc();

	UFUNCTION(BlueprintCallable)
	float SetPlayerHPRatio();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayBloodScreen();

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock *ServerMsg;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock *AliveCount;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UProgressBar *HPBar;

	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ABRPlayerController *PlayerController;

	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ABRGameStateBase *GameState;
};
