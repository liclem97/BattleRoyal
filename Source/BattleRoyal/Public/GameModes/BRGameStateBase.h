// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BRElectricFieldPhaseTable.h"
#include "GameFramework/GameStateBase.h"
#include "BRGameStateBase.generated.h"

class UUserWidget;
/**
 *
 */
UCLASS()
class BATTLEROYAL_API ABRGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

	ABRGameStateBase();

public:
	virtual void BeginPlay() override;

	void UpdateCircleMainTimer();

	void SetElectricFieldPhase(int32 Phase, FVector PreCirclePosition, float PreCircleRadius);

	void Notify(FString Message);

	void ResetMessage();

public:
	// 생존 인원 수
	UPROPERTY(Replicated)
	int32 AliveCount;

	// 대미지가 유효한지
	UPROPERTY(Replicated)
	bool bDamageAvailable = false;

	// 현재 자기장의 중점
	UPROPERTY(Replicated)
	FVector CurrentCirclePosition;

	// 줄어드는 자기장의 중점
	UPROPERTY(Replicated)
	FVector TargetCirclePosition;

	// 현재 자기장의 반지름
	UPROPERTY(Replicated)
	float CurrentCircleRadius;

	// 줄어드는 자기장의 반지름
	UPROPERTY(Replicated)
	float TargetCircleRadius;

	// 원을 보여줄지 결정함
	UPROPERTY(Replicated)
	bool bVisibleCurrentCircle;

	UPROPERTY(Replicated)
	bool bVisibleTargetCircle;

	int32 WaitingTime;

	// 하얀 원을 보여주는 시간
	int32 ShowTime;

	// 원이 줄어드는 시간
	int32 ShrinkTime;

	// 초당 원이 줄어들어야 하는 크기
	FVector DeltaPositionPerSec;

	float DeltaRadiusPerSec;

	bool bNotifiedShowTime;

	bool bNotifiedShrinkTime;

	UPROPERTY(EditAnywhere, Category = "Data Table")
	UDataTable *PhaseDataTable;

	int32 CurrentPhase;

	FTimerHandle TimerHandle_SayToAllClear;
};
