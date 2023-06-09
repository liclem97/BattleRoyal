// Fill out your copyright notice in the Description page of Project Settings.

#include "BRWeapon.h"
#include "BRCharacter.h"
#include "BattleRoyal.h"
#include "components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

// Sets default values
ABRWeapon::ABRWeapon()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	MuzzleSocketName = "Muzzle";
	TracerTargetName = "Target";

	RateOfFire = 600;
	BaseDamage = 10.0f;

	SetReplicates(true);

	NetUpdateFrequency = 66.0f;
	MinNetUpdateFrequency = 33.0f;

	BulletSpread = 0.3f;

	WorldStatic = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
	WorldDynamic = UEngineTypes::ConvertToObjectType(ECC_WorldDynamic);
	PhysicsBody = UEngineTypes::ConvertToObjectType(ECC_PhysicsBody);
	Vehicle = UEngineTypes::ConvertToObjectType(ECC_Vehicle);
	Destructible = UEngineTypes::ConvertToObjectType(ECC_Destructible);

	ObjectTypes.Add(WorldStatic);
	ObjectTypes.Add(WorldDynamic);
	ObjectTypes.Add(PhysicsBody);
	ObjectTypes.Add(Vehicle);
	ObjectTypes.Add(Destructible);

	NewHit = 0;
}

// Called when the game starts or when spawned
void ABRWeapon::BeginPlay()
{
	Super::BeginPlay();

	TimeBetweenShots = 60 / RateOfFire;
	ABRCharacter *MyOwner = Cast<ABRCharacter>(GetOwner());
	if (MyOwner)
	{
		MyOwner->SetHasWeapon(true);
	}
}

void ABRWeapon::Fire()
{
	if (Role < ROLE_Authority)
	{
		// Client
		ServerFire();
	}

	AActor *MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		FVector ShotDirection = EyeRotation.Vector(); // 발사 방향

		// 탄 퍼짐 설정.
		float HalfRad = FMath::DegreesToRadians(BulletSpread);
		ShotDirection = FMath::VRandCone(ShotDirection, HalfRad, HalfRad);

		FVector TraceEnd = EyeLocation + (ShotDirection * 10000);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;
		QueryParams.bReturnPhysicalMaterial = true;

		FVector TracerEndPoint = TraceEnd;

		// 히트한 포인트가 사람인지 물체인지 판별하는 변수 초기화.
		int32 NewHit = 0;

		FHitResult Hit;

		if (GetWorld()->LineTraceSingleByObjectType(Hit, EyeLocation, TraceEnd, ObjectTypes, QueryParams))
		{
			AActor *HitActor = Hit.GetActor();

			float ActualDamage = BaseDamage;

			if (Hit.GetComponent()->ComponentHasTag("Body"))
			{
				NewHit = 2; // 몸에 맞은 경우.
			}
			else
			{
				NewHit = 1; // 다른 부분에 맞은 경우.
			}

			if (Hit.BoneName == TEXT("Head"))
			{
				ActualDamage *= 4.0f; // 헤드샷은 데미지 4배 적용.
			}

			// ApplyPointDamage()를 통해 데미지 적용.
			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), MyOwner, DamageType);

			PlayImpactEffect(NewHit, Hit.ImpactPoint, Hit);

			TracerEndPoint = Hit.ImpactPoint;

			// DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.0f, 0, 1.0f);
		}
		PlayFireEffect(TracerEndPoint);

		if (Role == ROLE_Authority)
		{
			// 서버일 경우 HitScanTraces 업데이트
			HitScanTrace.TraceTo = TracerEndPoint;
			HitScanTrace.WhereHit = NewHit;
			HitScanTrace.Hit = Hit;
		}

		LastFireTime = GetWorld()->TimeSeconds;
	}
}

void ABRWeapon::ServerFire_Implementation()
{
	Fire();
}

bool ABRWeapon::ServerFire_Validate()
{
	return true;
}

// HitScanTraces RepNotify 함수.
void ABRWeapon::OnRep_HitScanTrace()
{
	// 각 클라이언트에 총기 발사 이펙트 및 임팩트 이펙트 복제.
	PlayFireEffect(HitScanTrace.TraceTo);

	PlayImpactEffect(HitScanTrace.WhereHit, HitScanTrace.TraceTo, HitScanTrace.Hit);
}

void ABRWeapon::StartFire()
{
	float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);

	GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &ABRWeapon::Fire, TimeBetweenShots, true, FirstDelay);
}

void ABRWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}

void ABRWeapon::PlayFireEffect(FVector TraceEnd)
{
	if (MuzzleEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
	}

	if (FireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
	if (TracerEffect)
	{
		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

		UParticleSystemComponent *TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TracerEffect, MuzzleLocation);
		if (TracerComp)
		{
			TracerComp->SetVectorParameter(TracerTargetName, TraceEnd);
		}
	}

	APawn *MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		APlayerController *PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC)
		{
			PC->ClientPlayCameraShake(FireCamShake);
		}
	}
}

void ABRWeapon::PlayImpactEffect(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
{
	UParticleSystem *SelectedEffect = nullptr;
	switch (WhereHit)
	{
	case 1: // 사람이 아닌 것을 히트.
		SelectedEffect = DefaultImpactEffect;
		// UE_LOG(LogTemp, Log, TEXT("Hit Normal"));
		break;

	case 2: // 사람 히트.
		SelectedEffect = FleshImpactEffect;
		// UE_LOG(LogTemp, Log, TEXT("Hit Human"));
		break;
	}

	if (SelectedEffect)
	{
		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

		FVector ShotDirection = ImpactPoint - MuzzleLocation;
		ShotDirection.Normalize();

		FVector HitPoint = Hit.ImpactPoint + (Hit.ImpactNormal * 20.0f);

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, HitPoint, ShotDirection.Rotation());
	}
}

void ABRWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ABRWeapon, HitScanTrace, COND_SkipOwner); // 무기를 쏜 사람 제외
}