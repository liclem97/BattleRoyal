// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BRPlayerController.h"
#include "BRGameModeBase.generated.h"

/**
 *
 */

UENUM()
enum class EPlayingState : uint8
{
	Waiting UMETA(DisplayName = "Waiting"),
	Battle UMETA(DisplayName = "Battle"),
	Ceremony UMETA(DisplayName = "Ceremony")
};

UCLASS()
class BATTLEROYAL_API ABRGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABRGameModeBase();

	void SayToAll(FString Message);

protected:
	virtual void PostLogin(APlayerController *NewPlayer) override;

	virtual void Logout(AController *ExitingController) override;

	virtual void BeginPlay() override;

	void ClearSayToAll();

	void MainTimerEvent();

	void WaitingFunc();

	void BattleFunc();

	void CeremonyFunc();

	FString FormatWithSec(int32 Sec);

public:
	void OnCharacterDeath(ABRPlayerController *PC);

	void AllDive();

protected:
	TArray<ABRPlayerController *> AlivePCs;

	TArray<ABRPlayerController *> DeadPCs;

	EPlayingState PlayingState;

	FTimerHandle TimerHandle_MainTimer;

	FTimerHandle TimerHandle_SayToAll;

	UPROPERTY(Config, EditAnywhere, Category = "GameMode")
	int32 MinimumPlayerCount;

	int32 RemainTimeToStart;

	UPROPERTY(Config, EditAnywhere, Category = "GameMode")
	int32 WaitingTime;

	UPROPERTY(Config, EditAnywhere, Category = "GameMode")
	int32 RemainTimeOfCeremony;

	class ABRAirplane *C130;

	float ElectricDamage;

public:
};
