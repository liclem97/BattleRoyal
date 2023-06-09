// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BRCircle.generated.h"

/**
 *
 */
UCLASS()
class BATTLEROYAL_API UBRCircle : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePaint(FPaintContext &InContext) const;
	virtual void NativeConstruct() override;

protected:
	UBRCircle *Self;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	FLinearColor NewColorAndOpacity;
};
