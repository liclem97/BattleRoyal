// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/BRWeapon.h"
#include "BRWeapon_Mossberg.generated.h"

/**
 *
 */
UCLASS()
class BATTLEROYAL_API ABRWeapon_Mossberg : public ABRWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABRWeapon_Mossberg();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Fire() override;

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void MulticastPlayFireEffect(FVector TraceEnd);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerPlayFireEffect(FVector TraceEnd);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void MulticastPlayImpactEffect(int32 WhereHit, FVector ImpactPoint, FHitResult Hit);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerPlayImpactEffect(int32 WhereHit, FVector ImpactPoint, FHitResult Hit);

	UFUNCTION()
	void OnRep_HitScanTraces_Mossberg();

	void FireDelay();

public:
	void StartFire() override;

	void StopFire() override;

protected:

	FHitResult Hit;

	FVector TracerEndPoint;

	// 발사되는 총알의 수
	int32 NumBellets;

	UPROPERTY(ReplicatedUsing = OnRep_HitScanTraces_Mossberg)
	FHitScanTrace HitScanTraces;

	bool bCanFire;

	FTimerHandle FireDelayHandler;

	UPROPERTY(Replicated)
	FVector ModifiedShotDirection;

	float WeaponDelay;
};
