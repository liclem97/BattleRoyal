// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRProjectileWeapon_generated_h
#error "BRProjectileWeapon.generated.h already included, missing '#pragma once' in BRProjectileWeapon.h"
#endif
#define BATTLEROYAL_BRProjectileWeapon_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_RPC_WRAPPERS \
	virtual bool ServerMuzzleFX_Validate(); \
	virtual void ServerMuzzleFX_Implementation(); \
	virtual bool MulticastMuzzleFX_Validate(); \
	virtual void MulticastMuzzleFX_Implementation(); \
	virtual bool MulticastFire_Validate(); \
	virtual void MulticastFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerMuzzleFX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMuzzleFX_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMuzzleFX_Validate")); \
			return; \
		} \
		P_THIS->ServerMuzzleFX_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastMuzzleFX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastMuzzleFX_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastMuzzleFX_Validate")); \
			return; \
		} \
		P_THIS->MulticastMuzzleFX_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastFire_Validate")); \
			return; \
		} \
		P_THIS->MulticastFire_Implementation(); \
		P_NATIVE_END; \
	} \
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
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerMuzzleFX_Validate(); \
	virtual void ServerMuzzleFX_Implementation(); \
	virtual bool MulticastMuzzleFX_Validate(); \
	virtual void MulticastMuzzleFX_Implementation(); \
	virtual bool MulticastFire_Validate(); \
	virtual void MulticastFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerMuzzleFX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMuzzleFX_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMuzzleFX_Validate")); \
			return; \
		} \
		P_THIS->ServerMuzzleFX_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastMuzzleFX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastMuzzleFX_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastMuzzleFX_Validate")); \
			return; \
		} \
		P_THIS->MulticastMuzzleFX_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastFire_Validate")); \
			return; \
		} \
		P_THIS->MulticastFire_Implementation(); \
		P_NATIVE_END; \
	} \
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
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_EVENT_PARMS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRProjectileWeapon(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRProjectileWeapon(); \
public: \
	DECLARE_CLASS(ABRProjectileWeapon, ABRWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRProjectileWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABRProjectileWeapon(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRProjectileWeapon(); \
public: \
	DECLARE_CLASS(ABRProjectileWeapon, ABRWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRProjectileWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRProjectileWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRProjectileWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRProjectileWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRProjectileWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRProjectileWeapon(ABRProjectileWeapon&&); \
	NO_API ABRProjectileWeapon(const ABRProjectileWeapon&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRProjectileWeapon(ABRProjectileWeapon&&); \
	NO_API ABRProjectileWeapon(const ABRProjectileWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRProjectileWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRProjectileWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRProjectileWeapon)


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ABRProjectileWeapon, ProjectileClass); }


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_12_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectileWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
