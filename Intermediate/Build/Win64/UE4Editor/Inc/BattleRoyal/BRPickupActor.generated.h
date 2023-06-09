// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRPickupActor_generated_h
#error "BRPickupActor.generated.h already included, missing '#pragma once' in BRPickupActor.h"
#endif
#define BATTLEROYAL_BRPickupActor_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ItemClassID_Pickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ItemClassID_Pickup(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ItemClassID_Pickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ItemClassID_Pickup(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRPickupActor(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRPickupActor(); \
public: \
	DECLARE_CLASS(ABRPickupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABRPickupActor(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRPickupActor(); \
public: \
	DECLARE_CLASS(ABRPickupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRPickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRPickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRPickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRPickupActor(ABRPickupActor&&); \
	NO_API ABRPickupActor(const ABRPickupActor&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRPickupActor(ABRPickupActor&&); \
	NO_API ABRPickupActor(const ABRPickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRPickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRPickupActor)


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABRPickupActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ItemDataTable() { return STRUCT_OFFSET(ABRPickupActor, ItemDataTable); } \
	FORCEINLINE static uint32 __PPO__ItemClassID_Pickup() { return STRUCT_OFFSET(ABRPickupActor, ItemClassID_Pickup); } \
	FORCEINLINE static uint32 __PPO__ItemName_Pickup() { return STRUCT_OFFSET(ABRPickupActor, ItemName_Pickup); } \
	FORCEINLINE static uint32 __PPO__ItemEquipType_Pickup() { return STRUCT_OFFSET(ABRPickupActor, ItemEquipType_Pickup); } \
	FORCEINLINE static uint32 __PPO__bRandom() { return STRUCT_OFFSET(ABRPickupActor, bRandom); } \
	FORCEINLINE static uint32 __PPO__RandomItems() { return STRUCT_OFFSET(ABRPickupActor, RandomItems); }


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_15_PROLOG
#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_BRPickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
