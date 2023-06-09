// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEROYAL_BRFlyingViewer_generated_h
#error "BRFlyingViewer.generated.h already included, missing '#pragma once' in BRFlyingViewer.h"
#endif
#define BATTLEROYAL_BRFlyingViewer_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_RPC_WRAPPERS \
	virtual bool DestroyWidget_Validate(); \
	virtual void DestroyWidget_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->DestroyWidget_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("DestroyWidget_Validate")); \
			return; \
		} \
		P_THIS->DestroyWidget_Implementation(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool DestroyWidget_Validate(); \
	virtual void DestroyWidget_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->DestroyWidget_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("DestroyWidget_Validate")); \
			return; \
		} \
		P_THIS->DestroyWidget_Implementation(); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_EVENT_PARMS
#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRFlyingViewer(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRFlyingViewer(); \
public: \
	DECLARE_CLASS(ABRFlyingViewer, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRFlyingViewer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABRFlyingViewer(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRFlyingViewer(); \
public: \
	DECLARE_CLASS(ABRFlyingViewer, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRFlyingViewer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRFlyingViewer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRFlyingViewer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRFlyingViewer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRFlyingViewer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRFlyingViewer(ABRFlyingViewer&&); \
	NO_API ABRFlyingViewer(const ABRFlyingViewer&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRFlyingViewer(ABRFlyingViewer&&); \
	NO_API ABRFlyingViewer(const ABRFlyingViewer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRFlyingViewer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRFlyingViewer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRFlyingViewer)


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ABRFlyingViewer, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ABRFlyingViewer, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(ABRFlyingViewer, WidgetClass); }


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_13_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_BRFlyingViewer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
