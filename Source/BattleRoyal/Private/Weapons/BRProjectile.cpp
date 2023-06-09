// Fill out your copyright notice in the Description page of Project Settings.

#include "BRProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
ABRProjectile::ABRProjectile()
{
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");

	RootComponent = CollisionComp;

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 2000.f;
	ProjectileMovement->MaxSpeed = 2000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplodeParticleObj(TEXT("ParticleSystem'/Game/WeaponEffects/Explosion/P_Explosion.P_Explosion'"));
	if (ExplodeParticleObj.Succeeded())
	{
		ExplodeParticle = ExplodeParticleObj.Object;
	}

	DamageRadius = 200.f;
	BaseDamage = 40.f;

	// Activate Replicates
	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void ABRProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// 발사체 폭발 멀티캐스트 함수.
void ABRProjectile::MulticastExplode_Implementation()
{
	if (ExplodeParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplodeParticle, GetActorLocation(), FRotator::ZeroRotator, true);
	}

	TArray<AActor *> IgnoreActors;

	UGameplayStatics::ApplyRadialDamage(GetWorld(), BaseDamage, GetActorLocation(), DamageRadius, nullptr, IgnoreActors, this, GetInstigatorController(), false, ECollisionChannel::ECC_Visibility);

	// DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 12, FColor::Yellow, false, 1, 2);

	Destroy();
}

bool ABRProjectile::MulticastExplode_Validate()
{
	return true;
}

void ABRProjectile::ServerExplode_Implementation()
{
	MulticastExplode();
}

bool ABRProjectile::ServerExplode_Validate()
{
	return true;
}