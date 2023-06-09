// Fill out your copyright notice in the Description page of Project Settings.

#include "BRPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/AssetRegistry/Public/AssetRegistryModule.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ABRPickupActor::ABRPickupActor()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionProfileName(TEXT("Pickup"));
	RootComponent = SphereComp;
	SphereComp->SetHiddenInGame(false);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	static ConstructorHelpers::FObjectFinder<UDataTable> ItemDataTableObj(TEXT("/Game/Item/ItemData"));
	if (ItemDataTableObj.Succeeded())
	{
		ItemDataTable = ItemDataTableObj.Object;
	}

	ItemClassID_Pickup = 0;
	bRandom = false;

	SetReplicates(true);
}

int ABRPickupActor::GetItemClassID()
{
	return ItemClassID_Pickup;
}

FString ABRPickupActor::GetItemName()
{
	return ItemName_Pickup;
}

// Called when the game starts or when spawned
void ABRPickupActor::BeginPlay()
{
	Super::BeginPlay();

	//아이템이 랜덤이 아닌데 값이 0인 경우 바로 파괴.
	if (ItemClassID_Pickup == 0 && !bRandom)
	{
		Destroy();
	}

	if (bRandom && RandomItems.Num() > 0)
	{
		if (HasAuthority())
		{
			int32 RandomIndex = FMath::RandRange(0, RandomItems.Num() - 1);
			ItemClassID_Pickup = RandomItems[RandomIndex];
		}
	}
	else
	{
		LoadItemMesh();
	}
}

void ABRPickupActor::LoadItemMesh()
{
	if (ItemDataTable == nullptr || ItemClassID_Pickup == 0)
	{
		return;
	}
	FName ItemRowName = FName(*FString::FromInt(ItemClassID_Pickup));

	FITemTableRow *ItemData = ItemDataTable->FindRow<FITemTableRow>(ItemRowName, FString(""));

	if (ItemData) // 아이템 데이터가 유요한 경우 아이템 비동기 로드.
	{
		FStreamableManager &Streamable = UAssetManager::GetStreamableManager();
		FSoftObjectPath AssetPath(ItemData->ItemStaticMesh.ToString());

		Streamable.RequestAsyncLoad(AssetPath, FStreamableDelegate::CreateUObject(this, &ABRPickupActor::OnAssetLoaded));
	}
}

void ABRPickupActor::OnAssetLoaded()
{
	FStreamableManager &Streamable = UAssetManager::GetStreamableManager();

	FName ItemRowName = FName(*FString::FromInt(ItemClassID_Pickup));
	FITemTableRow *ItemData = ItemDataTable->FindRow<FITemTableRow>(ItemRowName, FString(""));

	if (ItemData) // AssetPath를 가져와 아이템 Mesh 및 획득 SphereComp를 변경함.
	{
		FSoftObjectPath AssetPath(ItemData->ItemStaticMesh.ToString());

		UStaticMesh *LoadedAsset = Cast<UStaticMesh>(Streamable.SynchronousLoad(AssetPath));
		if (LoadedAsset)
		{
			MeshComp->SetStaticMesh(LoadedAsset);
			FBoxSphereBounds Bounds = MeshComp->CalcBounds(MeshComp->GetComponentTransform());
			SphereComp->SetSphereRadius(Bounds.SphereRadius);
			ItemName_Pickup = ItemData->ItemName;
			ItemEquipType_Pickup = ItemData->ItemEquipType;

			if (ItemEquipType_Pickup == EItemEquipType::Equip_Weapon) // 무기인 경우 옆으로 눕히고 지면에서 살짝 띄움.
			{
				MeshComp->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 5.0f), FRotator(0.0f, 0.0f, 90.0f));
			}
		}
	}
}

void ABRPickupActor::OnRep_ItemClassID_Pickup()
{
	LoadItemMesh();
}

void ABRPickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABRPickupActor, ItemClassID_Pickup);
}