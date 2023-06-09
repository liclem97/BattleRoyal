// Fill out your copyright notice in the Description page of Project Settings.

#include "BRWeapon_Mossberg.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraShake.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

ABRWeapon_Mossberg::ABRWeapon_Mossberg()
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

    static ConstructorHelpers::FObjectFinder<USoundBase> FireSoundObj(TEXT("SoundWave'/Game/Weapons/ArbitraryStudio/Weapons/MP_Mossberg_500_Pump_Shotgun.MP_Mossberg_500_Pump_Shotgun'"));
    if (FireSoundObj.Succeeded())
    {
        FireSound = FireSoundObj.Object;
    }

    BaseDamage = 3.0f;
    BulletSpread = 5.f;

    // NumBellets * 4 만큼 총알이 나감.
    NumBellets = 2;

    bCanFire = true;

    WeaponDelay = 1.5;
}

void ABRWeapon_Mossberg::BeginPlay()
{
    Super::BeginPlay();
}

void ABRWeapon_Mossberg::Fire()
{
    Super::Fire();

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
        FVector ShotDirection = EyeRotation.Vector(); // 발사 방향.

        // 탄 퍼짐 설정.
        float HalfRad = FMath::DegreesToRadians(BulletSpread);

        for (int32 BelletIndex = 0; BelletIndex < NumBellets; ++BelletIndex)
        {
            ModifiedShotDirection = FMath::VRandCone(ShotDirection, HalfRad, HalfRad);

            FVector TraceEnd = EyeLocation + (ModifiedShotDirection * 10000);

            FCollisionQueryParams QueryParams;
            QueryParams.AddIgnoredActor(MyOwner);
            QueryParams.AddIgnoredActor(this);
            QueryParams.bTraceComplex = true;
            QueryParams.bReturnPhysicalMaterial = true;

            TracerEndPoint = TraceEnd;

            // 히트한 포인트가 사람인지 물체인지 판별하는 변수 초기화.
            NewHit = 0;

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
                UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ModifiedShotDirection, Hit, MyOwner->GetInstigatorController(), MyOwner, DamageType);

                // 서버에서 Impact 이펙트 재생 요청.
                ServerPlayImpactEffect(NewHit, Hit.ImpactPoint, Hit);

                TracerEndPoint = Hit.ImpactPoint; // 트레이서의 끝점을 히트 지점으로 설정.
            }
            ServerPlayFireEffect(TracerEndPoint); // 서버에서 발사 이펙트 재생 요청.

            if (Role == ROLE_Authority)
            {
                // 서버일 경우 HitScanTraces 업데이트
                HitScanTraces.TraceTo = TracerEndPoint;
                HitScanTraces.WhereHit = NewHit;
                HitScanTraces.Hit = Hit;
            }
        }
        LastFireTime = GetWorld()->TimeSeconds; // 마지막 발사 시간 업데이트.
    }

    if (MyOwner)
    {
        APawn *MyPawn = Cast<APawn>(MyOwner);
        if (MyPawn && MyPawn->IsLocallyControlled())
        {
            APlayerController *PC = Cast<APlayerController>(MyPawn->GetController());
            if (PC)
            {
                // 로컬 플레이어 컨트롤러인 경우 FireCamShake 카메라 흔들림 적용.
                PC->ClientPlayCameraShake(FireCamShake);
            }
        }
    }

    if (FireSound)
    {   
        // 발사 사운드 재생.
        UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
    }
}

void ABRWeapon_Mossberg::StartFire()
{
    if (bCanFire)
    {   
        // 총기 딜레이 마다 연속 발사.
        GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &ABRWeapon_Mossberg::Fire, WeaponDelay, true, 0);
        bCanFire = false;

        // 총기 딜레이 조기화.
        GetWorldTimerManager().SetTimer(FireDelayHandler, this, &ABRWeapon_Mossberg::FireDelay, WeaponDelay, false);
    }
}

void ABRWeapon_Mossberg::StopFire()
{
    GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}

void ABRWeapon_Mossberg::FireDelay()
{
    bCanFire = true;
}

// 총기 발사 이펙트 멀티캐스트 함수.
void ABRWeapon_Mossberg::MulticastPlayFireEffect_Implementation(FVector TraceEnd)
{
    if (MuzzleEffect)
    {
        UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
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
}

bool ABRWeapon_Mossberg::MulticastPlayFireEffect_Validate(FVector TraceEnd)
{
    return true;
}

void ABRWeapon_Mossberg::ServerPlayFireEffect_Implementation(FVector TraceEnd)
{
    MulticastPlayFireEffect(TraceEnd);
}

bool ABRWeapon_Mossberg::ServerPlayFireEffect_Validate(FVector TraceEnd)
{
    return true;
}

// 총기 피격 효과 멀티캐스트 함수.
void ABRWeapon_Mossberg::MulticastPlayImpactEffect_Implementation(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
{
    UParticleSystem *SelectedEffect = nullptr;
    switch (WhereHit)
    {
    case 1: // 사람이 아닌 것을 히트 했을 시.
        SelectedEffect = DefaultImpactEffect;
        break;

    case 2: // 사람을 히트 했을 시.
        SelectedEffect = FleshImpactEffect;
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

bool ABRWeapon_Mossberg::MulticastPlayImpactEffect_Validate(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
{
    return true;
}

void ABRWeapon_Mossberg::ServerPlayImpactEffect_Implementation(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
{
    MulticastPlayImpactEffect(WhereHit, ImpactPoint, Hit);
}

bool ABRWeapon_Mossberg::ServerPlayImpactEffect_Validate(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
{
    return true;
}

void ABRWeapon_Mossberg::OnRep_HitScanTraces_Mossberg()
{
    // PlayFireEffect(HitScanTraces.TraceTo);
    // PlayImpactEffect(HitScanTraces.WhereHit, HitScanTraces.TraceTo, HitScanTraces.Hit);
}

void ABRWeapon_Mossberg::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME_CONDITION(ABRWeapon_Mossberg, HitScanTraces, COND_SkipOwner);
    DOREPLIFETIME_CONDITION(ABRWeapon_Mossberg, ModifiedShotDirection, COND_SkipOwner);
}