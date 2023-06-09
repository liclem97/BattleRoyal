// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BRAirplane.generated.h"

class UAudioComponent;

UCLASS()
class BATTLEROYAL_API ABRAirplane : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABRAirplane();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void EndAirplane();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Airplane")
	UStaticMeshComponent *BodyComp;

	UPROPERTY(EditAnywhere, Category = "Airplane")
	UStaticMeshComponent *P1Comp;

	UPROPERTY(EditAnywhere, Category = "Airplane")
	UStaticMeshComponent *P2Comp;

	UPROPERTY(EditAnywhere, Category = "Airplane")
	UStaticMeshComponent *P3Comp;

	UPROPERTY(EditAnywhere, Category = "Airplane")
	UStaticMeshComponent *P4Comp;

	UPROPERTY(EditDefaultsOnly, Category = "Airplane")
	UAudioComponent *PlaneSound;

	FVector StartLocation;

	FTimerHandle TimerHandle_Delay;

public:
	bool bStarted;
};
