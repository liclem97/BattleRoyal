// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRProjectile_generated_h
#error "BRProjectile.generated.h already included, missing '#pragma once' in BRProjectile.h"
#endif
#define BATTLEROYAL_BRProjectile_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_RPC_WRAPPERS \
	virtual bool ServerExplode_Validate(); \
	virtual void ServerExplode_Implementation(); \
	virtual bool MulticastExplode_Validate(); \
	virtual void MulticastExplode_Implementation(); \
 \
	DECLARE_FUNCTION(execServerExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerExplode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerExplode_Validate")); \
			return; \
		} \
		P_THIS->ServerExplode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastExplode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastExplode_Validate")); \
			return; \
		} \
		P_THIS->MulticastExplode_Implementation(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerExplode_Validate(); \
	virtual void ServerExplode_Implementation(); \
	virtual bool MulticastExplode_Validate(); \
	virtual void MulticastExplode_Implementation(); \
 \
	DECLARE_FUNCTION(execServerExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerExplode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerExplode_Validate")); \
			return; \
		} \
		P_THIS->ServerExplode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastExplode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastExplode_Validate")); \
			return; \
		} \
		P_THIS->MulticastExplode_Implementation(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_EVENT_PARMS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRProjectile(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRProjectile(); \
public: \
	DECLARE_CLASS(ABRProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABRProjectile(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRProjectile(); \
public: \
	DECLARE_CLASS(ABRProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRProjectile(ABRProjectile&&); \
	NO_API ABRProjectile(const ABRProjectile&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRProjectile(ABRProjectile&&); \
	NO_API ABRProjectile(const ABRProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRProjectile)


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABRProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABRProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplodeParticle() { return STRUCT_OFFSET(ABRProjectile, ExplodeParticle); }


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_13_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_Weapons_BRProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
