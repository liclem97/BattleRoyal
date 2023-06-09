// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/BRWeapon.h"
#include "BRProjectileWeapon.generated.h"

/**
 *
 */
UCLASS()
class BATTLEROYAL_API ABRProjectileWeapon : public ABRWeapon
{
	GENERATED_BODY()

public:
	ABRProjectileWeapon();

protected:
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void MulticastFire();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void MulticastMuzzleFX();

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerMuzzleFX();

	void FireDelay();

public:
	void StartFire() override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "ProjectileWeapon")
	TSubclassOf<AActor> ProjectileClass;

	bool bCanFire;

	FTimerHandle FireDelayHandler;

	float WeaponDelay;

};
