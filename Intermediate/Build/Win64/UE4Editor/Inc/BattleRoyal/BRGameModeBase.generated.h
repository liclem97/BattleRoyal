// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRGameModeBase_generated_h
#error "BRGameModeBase.generated.h already included, missing '#pragma once' in BRGameModeBase.h"
#endif
#define BATTLEROYAL_BRGameModeBase_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_RPC_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRGameModeBase(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRGameModeBase(); \
public: \
	DECLARE_CLASS(ABRGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABRGameModeBase(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRGameModeBase(); \
public: \
	DECLARE_CLASS(ABRGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRGameModeBase(ABRGameModeBase&&); \
	NO_API ABRGameModeBase(const ABRGameModeBase&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRGameModeBase(ABRGameModeBase&&); \
	NO_API ABRGameModeBase(const ABRGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRGameModeBase)


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinimumPlayerCount() { return STRUCT_OFFSET(ABRGameModeBase, MinimumPlayerCount); } \
	FORCEINLINE static uint32 __PPO__WaitingTime() { return STRUCT_OFFSET(ABRGameModeBase, WaitingTime); } \
	FORCEINLINE static uint32 __PPO__RemainTimeOfCeremony() { return STRUCT_OFFSET(ABRGameModeBase, RemainTimeOfCeremony); }


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_22_PROLOG
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_GameModes_BRGameModeBase_h


#define FOREACH_ENUM_EPLAYINGSTATE(op) \
	op(EPlayingState::Waiting) \
	op(EPlayingState::Battle) \
	op(EPlayingState::Ceremony) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
