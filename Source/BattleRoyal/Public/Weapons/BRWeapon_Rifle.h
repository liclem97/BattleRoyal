// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BRWeapon.h"
#include "BRWeapon_Rifle.generated.h"

/**
 *
 */
UCLASS()
class BATTLEROYAL_API ABRWeapon_Rifle : public ABRWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABRWeapon_Rifle();

protected:
	void Fire();
};
