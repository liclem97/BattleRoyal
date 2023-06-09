// Fill out your copyright notice in the Description page of Project Settings.

#include "BRHealthComponent.h"
#include "BRPlayerController.h"
#include "BRCharacter.h"
#include "BRGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UBRHealthComponent::UBRHealthComponent()
{
	DefaultHealth = 100.0f;
	bIsDead = false;
	bStartPlay = true;

	SetIsReplicated(true);
}

// Called when the game starts
void UBRHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = DefaultHealth;
	if (GetOwnerRole() == ROLE_Authority)
	{
		AActor *MyOwner = GetOwner();
		if (MyOwner)
		{
			MyOwner->OnTakeAnyDamage.AddDynamic(this, &UBRHealthComponent::HandleTakeAnyDamage);
		}
	}
}

// Health 변수 RepNotify 함수.
void UBRHealthComponent::OnRep_Health(float OldHealth)
{
	float Damage = Health - OldHealth;
	OnHealthChanged.Broadcast(this, Health, Damage, nullptr, nullptr, nullptr); // OnHealthChanged의 BroadCast.
}

// 어떠한 데미지를 받았을 경우 실행되는 함수.
void UBRHealthComponent::HandleTakeAnyDamage(AActor *DamagedActor, float Damage, const UDamageType *DamageType, AController *InstigatedBy, AActor *DamageCauser)
{
	UE_LOG(LogTemp, Log, TEXT("Take Damage"));
	ABRGameStateBase *GS = Cast<ABRGameStateBase>(UGameplayStatics::GetGameState(GetWorld()));
	if (GS)
	{	
		// 데미지가 0이거나, 이미 죽었거나, GS의 bDamageAvailable 함수가 false인 경우 리턴.
		if (Damage <= 0.0f || bIsDead || !GS->bDamageAvailable)
		{
			return;
		}
		
		Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

		//UE_LOG(LogTemp, Log, TEXT("Health Changed : %s"), *FString::SanitizeFloat(Health));

		bIsDead = Health <= 0.0f; // Hp가 0이거나 더 작은 경우 사망.
		if (bIsDead)
		{
			ABRCharacter *MyOwner = Cast<ABRCharacter>(GetOwner());
			MyOwner->SetCharacterDeath(bIsDead);
		}

		OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
	}
}

float UBRHealthComponent::GetHealth()
{
	return Health;
}

float UBRHealthComponent::GetDefaultHealth()
{
	return DefaultHealth;
}

void UBRHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBRHealthComponent, Health);
}
