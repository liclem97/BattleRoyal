// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_ResultWidget_generated_h
#error "ResultWidget.generated.h already included, missing '#pragma once' in ResultWidget.h"
#endif
#define BATTLEROYAL_ResultWidget_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGoToLobbyClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGoToLobbyClicked(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGoToLobbyClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGoToLobbyClicked(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResultWidget(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UResultWidget(); \
public: \
	DECLARE_CLASS(UResultWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UResultWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUResultWidget(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UResultWidget(); \
public: \
	DECLARE_CLASS(UResultWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UResultWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResultWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResultWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResultWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResultWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResultWidget(UResultWidget&&); \
	NO_API UResultWidget(const UResultWidget&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResultWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResultWidget(UResultWidget&&); \
	NO_API UResultWidget(const UResultWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResultWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResultWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResultWidget)


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_12_PROLOG
#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_UI_ResultWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
