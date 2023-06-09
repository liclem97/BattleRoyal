// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BRWeapon.generated.h"

class UStaticMeshComponent;
class UDamageType;
class UParticleSystem;
class USoundBase;
class UCameraShake;

// Contain information of a single hitscan weapon line trace
USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector_NetQuantize TraceTo;

	UPROPERTY()
	int32 WhereHit;

	UPROPERTY()
	FHitResult Hit;
};

UCLASS()
class BATTLEROYAL_API ABRWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABRWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UStaticMeshComponent *MeshComp;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName TracerTargetName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem *MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem *DefaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem *FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem *TracerEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	USoundBase *FireSound;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> FireCamShake;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float BaseDamage;

	// Bullet Spread in Degrees
	UPROPERTY(EditDefaultsOnly, Category = "Weapon", meta = (ClampMin = 0.0f))
	float BulletSpread;

	UPROPERTY(ReplicatedUsing = OnRep_HitScanTrace)
	FHitScanTrace HitScanTrace;

	UFUNCTION()
	virtual void OnRep_HitScanTrace();

	virtual void PlayFireEffect(FVector TraceEnd);

	virtual void PlayImpactEffect(int32 WhereHit, FVector ImpactPoint, FHitResult Hit);

	virtual void Fire();

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire();

	FTimerHandle TimerHandle_TimeBetweenShots;

	float LastFireTime;

	float TimeBetweenShots;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float RateOfFire;

	// 라인 트레이스 ObjectTypes 배열
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	TEnumAsByte<EObjectTypeQuery> WorldStatic;
	TEnumAsByte<EObjectTypeQuery> WorldDynamic;
	TEnumAsByte<EObjectTypeQuery> PhysicsBody;
	TEnumAsByte<EObjectTypeQuery> Vehicle;
	TEnumAsByte<EObjectTypeQuery> Destructible;

	int32 NewHit;

public:
	virtual void StartFire();

	virtual void StopFire();
};
