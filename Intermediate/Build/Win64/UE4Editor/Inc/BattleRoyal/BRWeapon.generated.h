// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRWeapon_generated_h
#error "BRWeapon.generated.h already included, missing '#pragma once' in BRWeapon.h"
#endif
#define BATTLEROYAL_BRWeapon_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_19_GENERATED_BODY \
	friend BATTLEROYAL_API class UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace(); \
	BATTLEROYAL_API static class UScriptStruct* StaticStruct();


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_EVENT_PARMS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRWeapon(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRWeapon(); \
public: \
	DECLARE_CLASS(ABRWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_INCLASS \
private: \
	static void StaticRegisterNativesABRWeapon(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRWeapon(); \
public: \
	DECLARE_CLASS(ABRWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRWeapon(ABRWeapon&&); \
	NO_API ABRWeapon(const ABRWeapon&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRWeapon(ABRWeapon&&); \
	NO_API ABRWeapon(const ABRWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRWeapon)


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ABRWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABRWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ABRWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(ABRWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ABRWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(ABRWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ABRWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ABRWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(ABRWeapon, FireSound); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ABRWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ABRWeapon, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(ABRWeapon, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(ABRWeapon, HitScanTrace); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(ABRWeapon, RateOfFire); }


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_32_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
