// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BRElectricField.generated.h"

class ABRGameStateBase;

UCLASS()
class BATTLEROYAL_API ABRElectricField : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABRElectricField();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UStaticMeshComponent *MeshComp;
	
	ABRGameStateBase* GS;
};
