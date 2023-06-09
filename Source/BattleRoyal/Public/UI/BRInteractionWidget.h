// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BRInteractionWidget.generated.h"

/**
 *
 */
UCLASS()
class BATTLEROYAL_API UBRInteractionWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	void SetInteractionText(FText NewInteractionText);

	UPROPERTY(BlueprintReadOnly)
	FText InteractionText;
};
