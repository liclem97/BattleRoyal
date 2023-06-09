// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRAirplane_generated_h
#error "BRAirplane.generated.h already included, missing '#pragma once' in BRAirplane.h"
#endif
#define BATTLEROYAL_BRAirplane_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_RPC_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRAirplane(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRAirplane(); \
public: \
	DECLARE_CLASS(ABRAirplane, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRAirplane) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABRAirplane(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRAirplane(); \
public: \
	DECLARE_CLASS(ABRAirplane, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRAirplane) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRAirplane(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRAirplane) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRAirplane); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRAirplane); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRAirplane(ABRAirplane&&); \
	NO_API ABRAirplane(const ABRAirplane&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRAirplane(ABRAirplane&&); \
	NO_API ABRAirplane(const ABRAirplane&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRAirplane); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRAirplane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRAirplane)


#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyComp() { return STRUCT_OFFSET(ABRAirplane, BodyComp); } \
	FORCEINLINE static uint32 __PPO__P1Comp() { return STRUCT_OFFSET(ABRAirplane, P1Comp); } \
	FORCEINLINE static uint32 __PPO__P2Comp() { return STRUCT_OFFSET(ABRAirplane, P2Comp); } \
	FORCEINLINE static uint32 __PPO__P3Comp() { return STRUCT_OFFSET(ABRAirplane, P3Comp); } \
	FORCEINLINE static uint32 __PPO__P4Comp() { return STRUCT_OFFSET(ABRAirplane, P4Comp); } \
	FORCEINLINE static uint32 __PPO__PlaneSound() { return STRUCT_OFFSET(ABRAirplane, PlaneSound); }


#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_11_PROLOG
#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_BRAirplane_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
