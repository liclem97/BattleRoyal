// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BRItemDataTable.h"
#include "Engine/StreamableManager.h"
#include "BRPickupActor.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class USkeletalMesh;

UCLASS()
class BATTLEROYAL_API ABRPickupActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABRPickupActor();

	int GetItemClassID();

	FString GetItemName();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void LoadItemMesh();

	void OnAssetLoaded();

	UFUNCTION()
	void OnRep_ItemClassID_Pickup();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Pickup")
	UStaticMeshComponent *MeshComp;

	UPROPERTY(EditAnywhere, Category = "Data Table")
	UDataTable *ItemDataTable;

	UPROPERTY(ReplicatedUsing = OnRep_ItemClassID_Pickup, EditAnywhere, Category = "ItemTable")
	int32 ItemClassID_Pickup;

	UPROPERTY(VisibleAnywhere, Category = "ItemTable")
	FString ItemName_Pickup;

	UPROPERTY(VisibleAnywhere, Category = "ItemTable")
	EItemEquipType ItemEquipType_Pickup;

	UPROPERTY(EditAnywhere, Category = "Random")
	bool bRandom;

	UPROPERTY(EditAnywhere, Category = "Random")
	TArray<int32> RandomItems;

public:
	UPROPERTY(VisibleAnywhere, Category = "Pickup")
	USphereComponent *SphereComp;
};
