// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define SURFACE_FLESHDEFAULT			SurfaceType1
#define SURFACE_FLESHVULNERABLE	SurfaceType2

#define COLLISION_WEAPON					ECC_GameTraceChannel1

#define EXECUTE_ON_SERVER(func) if(GetNetMode() == NM_DedicatedServer || (GetNetMode() == NM_ListenServer && Role == ROLE_Authority)) { func; }
#define EXECUTE_ON_MY_CLIENT(func) if(GetNetMode() == NM_Client && Controller != nullptr && Controller->IsLocalPlayerController()) { func; }
#define EXECUTE_ON_OTHER_CLIENTS(func) if(GetNetMode() == NM_Client && Controller != nullptr && !Controller->IsLocalPlayerController()) { func; }