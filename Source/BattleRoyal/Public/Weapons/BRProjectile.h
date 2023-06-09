// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BRProjectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class UParticleSystem;

UCLASS()
class BATTLEROYAL_API ABRProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABRProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void MulticastExplode();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void ServerExplode();
public:


protected:
	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
	USphereComponent *CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UProjectileMovementComponent *ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
	UParticleSystem *ExplodeParticle;

	float DamageRadius;

	float BaseDamage;
};
