// Fill out your copyright notice in the Description page of Project Settings.

#include "BRProjectileWeapon.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

ABRProjectileWeapon::ABRProjectileWeapon()
{
    static ConstructorHelpers::FClassFinder<AActor> Projectile(TEXT("Blueprint'/Game/Weapons/BP_GrenadeProjectile.BP_GrenadeProjectile_C'"));
    if (Projectile.Succeeded())
    {
        ProjectileClass = Projectile.Class;
    }

    WeaponDelay = 1.75f;
    bCanFire = true;
}

// 총기 발사 함수.
void ABRProjectileWeapon::StartFire()
{
    if (bCanFire)
    {
        ServerFire();
        ServerMuzzleFX();
        bCanFire = false;

        GetWorldTimerManager().SetTimer(FireDelayHandler, this, &ABRProjectileWeapon::FireDelay, WeaponDelay, false);
    }
}

void ABRProjectileWeapon::ServerFire_Implementation()
{
    MulticastFire();
}

bool ABRProjectileWeapon::ServerFire_Validate()
{
    return true;
}

// 총기 발사 멀티캐스트 함수.
void ABRProjectileWeapon::MulticastFire_Implementation()
{
    if (Role < ROLE_Authority) // 클라이언트에서 실행.
    {
        AActor *MyOwner = GetOwner(); // 무기의 소유자를 가져옴.
        if (MyOwner)
        {
            FVector EyeLocation;
            FRotator EyeRotation;
            MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation); // 소유자의 시점 위치, 회전 값을 가져옴.

            // 메시 컴포넌트의 "Muzzle"에 해당하는 위치와 회전값을 가져옴.
            FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
            FRotator MuzzleRotation = MeshComp->GetSocketRotation(MuzzleSocketName);

            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

            // ProjectileClass로 지정된 클래스의 인스턴스를 MuzzleLocation 위치와 EyeRotation 회전값으로 스폰
            GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, EyeRotation, SpawnParams);
        }
    }
}

bool ABRProjectileWeapon::MulticastFire_Validate()
{
    return true;
}

// 클라이언트 이펙트 멀티캐스트 함수.
void ABRProjectileWeapon::MulticastMuzzleFX_Implementation()
{
    if (MuzzleEffect)
    {
        UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
    }
}

bool ABRProjectileWeapon::MulticastMuzzleFX_Validate()
{
    return true;
}

void ABRProjectileWeapon::ServerMuzzleFX_Implementation()
{
    MulticastMuzzleFX();
}

bool ABRProjectileWeapon::ServerMuzzleFX_Validate()
{
    return true;
}

void ABRProjectileWeapon::FireDelay()
{
    bCanFire = true;
}