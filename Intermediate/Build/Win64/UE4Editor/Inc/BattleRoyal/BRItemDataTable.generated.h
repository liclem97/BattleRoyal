// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRItemDataTable_generated_h
#error "BRItemDataTable.generated.h already included, missing '#pragma once' in BRItemDataTable.h"
#endif
#define BATTLEROYAL_BRItemDataTable_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_32_GENERATED_BODY \
	friend BATTLEROYAL_API class UScriptStruct* Z_Construct_UScriptStruct_FITemTableRow(); \
	BATTLEROYAL_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_RPC_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBRItemDataTable(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UBRItemDataTable(); \
public: \
	DECLARE_CLASS(UBRItemDataTable, UDataTable, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UBRItemDataTable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUBRItemDataTable(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UBRItemDataTable(); \
public: \
	DECLARE_CLASS(UBRItemDataTable, UDataTable, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UBRItemDataTable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBRItemDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBRItemDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBRItemDataTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBRItemDataTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBRItemDataTable(UBRItemDataTable&&); \
	NO_API UBRItemDataTable(const UBRItemDataTable&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBRItemDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBRItemDataTable(UBRItemDataTable&&); \
	NO_API UBRItemDataTable(const UBRItemDataTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBRItemDataTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBRItemDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBRItemDataTable)


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_PRIVATE_PROPERTY_OFFSET
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_57_PROLOG
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_GameModes_BRItemDataTable_h


#define FOREACH_ENUM_EITEMEQUIPTYPE(op) \
	op(EItemEquipType::Equip_Upper) \
	op(EItemEquipType::Equip_Lower) \
	op(EItemEquipType::Equip_Helmet) \
	op(EItemEquipType::Equip_Shoes) \
	op(EItemEquipType::Equip_Weapon) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
