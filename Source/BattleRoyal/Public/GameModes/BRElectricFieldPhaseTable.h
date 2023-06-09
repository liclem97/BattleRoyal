// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BRElectricFieldPhaseTable.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FElectricFieldRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
    int32 Phase;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
    FVector CurrentCirclePosition;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
    float CurrentCircleRadius;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
    FVector TargetCirclePosition;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
    float TargetCircleRadius;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
    int32 WaitTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
	int32 ShowTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
	int32 ShrinkTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
	bool UseRandomTarget;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
	float RandomTargetDistanceMin;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElectricFieldPhase")
	float RandomTargetDistanceMax;
};
UCLASS()
class BATTLEROYAL_API UBRElectricFieldPhaseTable : public UDataTable
{
	GENERATED_BODY()
	
	
	
	
};
