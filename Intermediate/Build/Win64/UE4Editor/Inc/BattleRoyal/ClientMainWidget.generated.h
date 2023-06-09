// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_ClientMainWidget_generated_h
#error "ClientMainWidget.generated.h already included, missing '#pragma once' in ClientMainWidget.h"
#endif
#define BATTLEROYAL_ClientMainWidget_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlayerHPRatio) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetPlayerHPRatio(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAliveCountFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->AliveCountFunc(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlayerHPRatio) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetPlayerHPRatio(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAliveCountFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->AliveCountFunc(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_EVENT_PARMS
#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientMainWidget(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UClientMainWidget(); \
public: \
	DECLARE_CLASS(UClientMainWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UClientMainWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUClientMainWidget(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UClientMainWidget(); \
public: \
	DECLARE_CLASS(UClientMainWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UClientMainWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientMainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientMainWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientMainWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientMainWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientMainWidget(UClientMainWidget&&); \
	NO_API UClientMainWidget(const UClientMainWidget&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientMainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientMainWidget(UClientMainWidget&&); \
	NO_API UClientMainWidget(const UClientMainWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientMainWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientMainWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientMainWidget)


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_PRIVATE_PROPERTY_OFFSET
#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_14_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_UI_ClientMainWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
