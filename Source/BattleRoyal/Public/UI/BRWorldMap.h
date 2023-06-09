// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BRWorldMap.generated.h"

class ABRPlayerController;
class ABRGameStateBase;
class UImage;
class UTexture2D;
class UBRCircle;
/**
 *
 */
UCLASS()
class BATTLEROYAL_API UBRWorldMap : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetPROPERTY(ABRPlayerController *NewPC, ABRGameStateBase *NewGS);

protected:
	virtual void NativeTick(const FGeometry &MyGeometry, float InDeltaTime);

	// 월드 Pos -> 위젯 Pos
	FVector2D WorldPosToWidgetPos(FVector WorldPos, FVector MapSize);

	// 월드 scale -> 위젯 scale
	float WorldScaleToWidgetScale(float WorldLength, FVector MapSize);

protected:
	UBRWorldMap *WorldMapWidget;

	ABRPlayerController *PC;

	ABRGameStateBase *GS;

	FVector PawnPosition;

	FVector MapSize;

	bool bAirplane;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UImage *MyIcon;

	UPROPERTY(EditDefaultsOnly, Category = "Image")
	UTexture2D *C130Icon;

	UPROPERTY(EditDefaultsOnly, Category = "Image")
	UTexture2D *DefaultIcon;

	FVector Forward;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UBRCircle *CurrentCircle;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UBRCircle *TargetCircle;

public:
};
