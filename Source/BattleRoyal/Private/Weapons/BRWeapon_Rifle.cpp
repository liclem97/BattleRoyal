// Fill out your copyright notice in the Description page of Project Settings.

#include "BRWeapon_Rifle.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraShake.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"

ABRWeapon_Rifle::ABRWeapon_Rifle()
{
	static ConstructorHelpers::FClassFinder<UCameraShake> CamShakeObj(TEXT("Blueprint'/Game/Characters/BP_FireShake.BP_FireShake_C'"));
	if (CamShakeObj.Succeeded())
	{
		FireCamShake = CamShakeObj.Class;
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> MuzzleEffectObj(TEXT("ParticleSystem'/Game/WeaponEffects/P_AssaultRifle_MF.P_AssaultRifle_MF'"));
	if (MuzzleEffectObj.Succeeded())
	{
		MuzzleEffect = MuzzleEffectObj.Object;
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> DefaultImpactEffectObj(TEXT("ParticleSystem'/Game/WeaponEffects/P_AssaultRifle_IH.P_AssaultRifle_IH'"));
	if (DefaultImpactEffectObj.Succeeded())
	{
		DefaultImpactEffect = DefaultImpactEffectObj.Object;
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> FleshImpactEffectObj(TEXT("ParticleSystem'/Game/WeaponEffects/P_body_bullet_impact.P_body_bullet_impact'"));
	if (FleshImpactEffectObj.Succeeded())
	{
		FleshImpactEffect = FleshImpactEffectObj.Object;
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> TracerEffectObj(TEXT("ParticleSystem'/Game/WeaponEffects/BasicTracer/P_SmokeTrail.P_SmokeTrail'"));
	if (TracerEffectObj.Succeeded())
	{
		TracerEffect = TracerEffectObj.Object;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> FireSoundObj(TEXT("SoundWave'/Game/Weapons/ArbitraryStudio/Weapons/rifle_sound.rifle_sound'"));
	if (FireSoundObj.Succeeded())
	{
		FireSound = FireSoundObj.Object;
	}

	RateOfFire = 600;
	NetUpdateFrequency = 66.0f;
	MinNetUpdateFrequency = 33.0f;

	BulletSpread = 0.1f;

	NewHit = 0;
}

void ABRWeapon_Rifle::Fire()
{
	if (Role < ROLE_Authority)
	{
		// 클라이언트일 경우 서버에 발사 이벤트를 보냄.
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

		// 라인 트레이스가 반응하는 오브젝트 타입 배열.
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		TEnumAsByte<EObjectTypeQuery> WorldStatic = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
		TEnumAsByte<EObjectTypeQuery> WorldDynamic = UEngineTypes::ConvertToObjectType(ECC_WorldDynamic);
		TEnumAsByte<EObjectTypeQuery> PhysicsBody = UEngineTypes::ConvertToObjectType(ECC_PhysicsBody);
		TEnumAsByte<EObjectTypeQuery> Vehicle = UEngineTypes::ConvertToObjectType(ECC_Vehicle);
		TEnumAsByte<EObjectTypeQuery> Destructible = UEngineTypes::ConvertToObjectType(ECC_Destructible);

		ObjectTypes.Add(WorldStatic);
		ObjectTypes.Add(WorldDynamic);
		ObjectTypes.Add(PhysicsBody);
		ObjectTypes.Add(Vehicle);
		ObjectTypes.Add(Destructible);

		// 히트한 포인트가 사람인지 물체인지 판별하는 변수 초기화.
		NewHit = 0;

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
