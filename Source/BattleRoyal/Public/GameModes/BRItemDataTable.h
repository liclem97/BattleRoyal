// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BRWeapon.h"
#include "BRItemDataTable.generated.h"

class USkeletalMesh;
class UStaticMesh;
class UParticleSystem;
class USoundBase;
class UCameraShake;

/**
 * 
 */
UENUM()
enum class EItemEquipType : uint8
{
	Equip_Upper UMETA(DisplayName = "Equip_Upper"),
	Equip_Lower UMETA(DisplayName = "Equip_Lower"),
	Equip_Helmet UMETA(DisplayName = "Equip_Helmet"),
	Equip_Shoes UMETA(DisplayName = "Equip_Shoes"),
	Equip_Weapon UMETA(DisplayName = "Equip_Weapon")
};

USTRUCT(BlueprintType)
struct FITemTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
    int32 ItemClassID;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
    FString ItemName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
    EItemEquipType ItemEquipType;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
    TSoftObjectPtr<USkeletalMesh> ItemSkeletalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
    TSoftObjectPtr<UStaticMesh> ItemStaticMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
    TSubclassOf<ABRWeapon> BP_Weapon;

	 FITemTableRow()
        : ItemClassID(0), ItemName(TEXT("")), ItemEquipType(EItemEquipType::Equip_Upper), ItemSkeletalMesh(nullptr), ItemStaticMesh(nullptr), BP_Weapon(nullptr)
    {}
};

UCLASS()
class BATTLEROYAL_API UBRItemDataTable : public UDataTable
{
	GENERATED_BODY()
	
	
	
	
};
