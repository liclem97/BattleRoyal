// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FHitResult;
#ifdef BATTLEROYAL_BRWeapon_Mossberg_generated_h
#error "BRWeapon_Mossberg.generated.h already included, missing '#pragma once' in BRWeapon_Mossberg.h"
#endif
#define BATTLEROYAL_BRWeapon_Mossberg_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_RPC_WRAPPERS \
	virtual bool ServerPlayImpactEffect_Validate(int32 , FVector , FHitResult ); \
	virtual void ServerPlayImpactEffect_Implementation(int32 WhereHit, FVector ImpactPoint, FHitResult Hit); \
	virtual bool MulticastPlayImpactEffect_Validate(int32 , FVector , FHitResult ); \
	virtual void MulticastPlayImpactEffect_Implementation(int32 WhereHit, FVector ImpactPoint, FHitResult Hit); \
	virtual bool ServerPlayFireEffect_Validate(FVector ); \
	virtual void ServerPlayFireEffect_Implementation(FVector TraceEnd); \
	virtual bool MulticastPlayFireEffect_Validate(FVector ); \
	virtual void MulticastPlayFireEffect_Implementation(FVector TraceEnd); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTraces_Mossberg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTraces_Mossberg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPlayImpactEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WhereHit); \
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint); \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPlayImpactEffect_Validate(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPlayImpactEffect_Validate")); \
			return; \
		} \
		P_THIS->ServerPlayImpactEffect_Implementation(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastPlayImpactEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WhereHit); \
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint); \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastPlayImpactEffect_Validate(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit)) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastPlayImpactEffect_Validate")); \
			return; \
		} \
		P_THIS->MulticastPlayImpactEffect_Implementation(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPlayFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPlayFireEffect_Validate(Z_Param_TraceEnd)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPlayFireEffect_Validate")); \
			return; \
		} \
		P_THIS->ServerPlayFireEffect_Implementation(Z_Param_TraceEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastPlayFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastPlayFireEffect_Validate(Z_Param_TraceEnd)) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastPlayFireEffect_Validate")); \
			return; \
		} \
		P_THIS->MulticastPlayFireEffect_Implementation(Z_Param_TraceEnd); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerPlayImpactEffect_Validate(int32 , FVector , FHitResult ); \
	virtual void ServerPlayImpactEffect_Implementation(int32 WhereHit, FVector ImpactPoint, FHitResult Hit); \
	virtual bool MulticastPlayImpactEffect_Validate(int32 , FVector , FHitResult ); \
	virtual void MulticastPlayImpactEffect_Implementation(int32 WhereHit, FVector ImpactPoint, FHitResult Hit); \
	virtual bool ServerPlayFireEffect_Validate(FVector ); \
	virtual void ServerPlayFireEffect_Implementation(FVector TraceEnd); \
	virtual bool MulticastPlayFireEffect_Validate(FVector ); \
	virtual void MulticastPlayFireEffect_Implementation(FVector TraceEnd); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTraces_Mossberg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTraces_Mossberg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPlayImpactEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WhereHit); \
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint); \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPlayImpactEffect_Validate(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPlayImpactEffect_Validate")); \
			return; \
		} \
		P_THIS->ServerPlayImpactEffect_Implementation(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastPlayImpactEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WhereHit); \
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint); \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastPlayImpactEffect_Validate(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit)) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastPlayImpactEffect_Validate")); \
			return; \
		} \
		P_THIS->MulticastPlayImpactEffect_Implementation(Z_Param_WhereHit,Z_Param_ImpactPoint,Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPlayFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPlayFireEffect_Validate(Z_Param_TraceEnd)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPlayFireEffect_Validate")); \
			return; \
		} \
		P_THIS->ServerPlayFireEffect_Implementation(Z_Param_TraceEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastPlayFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastPlayFireEffect_Validate(Z_Param_TraceEnd)) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastPlayFireEffect_Validate")); \
			return; \
		} \
		P_THIS->MulticastPlayFireEffect_Implementation(Z_Param_TraceEnd); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_EVENT_PARMS \
	struct BRWeapon_Mossberg_eventMulticastPlayFireEffect_Parms \
	{ \
		FVector TraceEnd; \
	}; \
	struct BRWeapon_Mossberg_eventMulticastPlayImpactEffect_Parms \
	{ \
		int32 WhereHit; \
		FVector ImpactPoint; \
		FHitResult Hit; \
	}; \
	struct BRWeapon_Mossberg_eventServerPlayFireEffect_Parms \
	{ \
		FVector TraceEnd; \
	}; \
	struct BRWeapon_Mossberg_eventServerPlayImpactEffect_Parms \
	{ \
		int32 WhereHit; \
		FVector ImpactPoint; \
		FHitResult Hit; \
	};


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRWeapon_Mossberg(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRWeapon_Mossberg(); \
public: \
	DECLARE_CLASS(ABRWeapon_Mossberg, ABRWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRWeapon_Mossberg) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABRWeapon_Mossberg(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRWeapon_Mossberg(); \
public: \
	DECLARE_CLASS(ABRWeapon_Mossberg, ABRWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRWeapon_Mossberg) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRWeapon_Mossberg(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRWeapon_Mossberg) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRWeapon_Mossberg); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRWeapon_Mossberg); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRWeapon_Mossberg(ABRWeapon_Mossberg&&); \
	NO_API ABRWeapon_Mossberg(const ABRWeapon_Mossberg&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRWeapon_Mossberg(ABRWeapon_Mossberg&&); \
	NO_API ABRWeapon_Mossberg(const ABRWeapon_Mossberg&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRWeapon_Mossberg); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRWeapon_Mossberg); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRWeapon_Mossberg)


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitScanTraces() { return STRUCT_OFFSET(ABRWeapon_Mossberg, HitScanTraces); } \
	FORCEINLINE static uint32 __PPO__ModifiedShotDirection() { return STRUCT_OFFSET(ABRWeapon_Mossberg, ModifiedShotDirection); }


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_12_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_Weapons_BRWeapon_Mossberg_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
