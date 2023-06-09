// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BRHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, UBRHealthComponent *, HealthComp, float, Health, float, HealthDelta, const class UDamageType *, DamageType, class AController *, InstigatedBy, AActor *, DamageCauser);

UCLASS(ClassGroup = (BattleRoyal), meta = (BlueprintSpawnableComponent))
class BATTLEROYAL_API UBRHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBRHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool bIsDead;

	UPROPERTY(ReplicatedUsing = OnRep_Health, BlueprintReadOnly, Category = "HealthComponent")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HealthComponent")
	float DefaultHealth;

	UFUNCTION()
	void HandleTakeAnyDamage(AActor *DamagedActor, float Damage, const class UDamageType *DamageType, class AController *InstigatedBy, AActor *DamageCauser);

	UFUNCTION()
	void OnRep_Health(float OldHealth);

	FTimerHandle StartPlay;
public:
	float GetHealth();

	float GetDefaultHealth();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHealthChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintReadWrite)
	bool bStartPlay;

};
