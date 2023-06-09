// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABRAirplane;
#ifdef BATTLEROYAL_BRPlayerController_generated_h
#error "BRPlayerController.generated.h already included, missing '#pragma once' in BRPlayerController.h"
#endif
#define BATTLEROYAL_BRPlayerController_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_RPC_WRAPPERS \
	virtual bool ShowBloodScreenEffect_Validate(); \
	virtual void ShowBloodScreenEffect_Implementation(); \
	virtual bool WantToDive_Validate(); \
	virtual void WantToDive_Implementation(); \
	virtual bool RideInC130_Validate(ABRAirplane* ); \
	virtual void RideInC130_Implementation(ABRAirplane* C130); \
	virtual bool BackToLobby_Validate(); \
	virtual void BackToLobby_Implementation(); \
	virtual bool ShowWinnerResult_Validate(); \
	virtual void ShowWinnerResult_Implementation(); \
	virtual bool ShowDeathResult_Validate(int32 ); \
	virtual void ShowDeathResult_Implementation(int32 NewRank); \
 \
	DECLARE_FUNCTION(execOnRep_NotificationFromServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NotificationFromServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBloodScreenEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ShowBloodScreenEffect_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ShowBloodScreenEffect_Validate")); \
			return; \
		} \
		P_THIS->ShowBloodScreenEffect_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantToDive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WantToDive_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("WantToDive_Validate")); \
			return; \
		} \
		P_THIS->WantToDive_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRideInC130) \
	{ \
		P_GET_OBJECT(ABRAirplane,Z_Param_C130); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->RideInC130_Validate(Z_Param_C130)) \
		{ \
			RPC_ValidateFailed(TEXT("RideInC130_Validate")); \
			return; \
		} \
		P_THIS->RideInC130_Implementation(Z_Param_C130); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackToLobby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->BackToLobby_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("BackToLobby_Validate")); \
			return; \
		} \
		P_THIS->BackToLobby_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowWinnerResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ShowWinnerResult_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ShowWinnerResult_Validate")); \
			return; \
		} \
		P_THIS->ShowWinnerResult_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDeathResult) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewRank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ShowDeathResult_Validate(Z_Param_NewRank)) \
		{ \
			RPC_ValidateFailed(TEXT("ShowDeathResult_Validate")); \
			return; \
		} \
		P_THIS->ShowDeathResult_Implementation(Z_Param_NewRank); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShowBloodScreenEffect_Validate(); \
	virtual void ShowBloodScreenEffect_Implementation(); \
	virtual bool WantToDive_Validate(); \
	virtual void WantToDive_Implementation(); \
	virtual bool RideInC130_Validate(ABRAirplane* ); \
	virtual void RideInC130_Implementation(ABRAirplane* C130); \
	virtual bool BackToLobby_Validate(); \
	virtual void BackToLobby_Implementation(); \
	virtual bool ShowWinnerResult_Validate(); \
	virtual void ShowWinnerResult_Implementation(); \
	virtual bool ShowDeathResult_Validate(int32 ); \
	virtual void ShowDeathResult_Implementation(int32 NewRank); \
 \
	DECLARE_FUNCTION(execOnRep_NotificationFromServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NotificationFromServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBloodScreenEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ShowBloodScreenEffect_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ShowBloodScreenEffect_Validate")); \
			return; \
		} \
		P_THIS->ShowBloodScreenEffect_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantToDive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WantToDive_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("WantToDive_Validate")); \
			return; \
		} \
		P_THIS->WantToDive_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRideInC130) \
	{ \
		P_GET_OBJECT(ABRAirplane,Z_Param_C130); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->RideInC130_Validate(Z_Param_C130)) \
		{ \
			RPC_ValidateFailed(TEXT("RideInC130_Validate")); \
			return; \
		} \
		P_THIS->RideInC130_Implementation(Z_Param_C130); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackToLobby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->BackToLobby_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("BackToLobby_Validate")); \
			return; \
		} \
		P_THIS->BackToLobby_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowWinnerResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ShowWinnerResult_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ShowWinnerResult_Validate")); \
			return; \
		} \
		P_THIS->ShowWinnerResult_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowDeathResult) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewRank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ShowDeathResult_Validate(Z_Param_NewRank)) \
		{ \
			RPC_ValidateFailed(TEXT("ShowDeathResult_Validate")); \
			return; \
		} \
		P_THIS->ShowDeathResult_Implementation(Z_Param_NewRank); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_EVENT_PARMS \
	struct BRPlayerController_eventRideInC130_Parms \
	{ \
		ABRAirplane* C130; \
	}; \
	struct BRPlayerController_eventShowDeathResult_Parms \
	{ \
		int32 NewRank; \
	};


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRPlayerController(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRPlayerController(); \
public: \
	DECLARE_CLASS(ABRPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABRPlayerController(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRPlayerController(); \
public: \
	DECLARE_CLASS(ABRPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRPlayerController(ABRPlayerController&&); \
	NO_API ABRPlayerController(const ABRPlayerController&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRPlayerController(ABRPlayerController&&); \
	NO_API ABRPlayerController(const ABRPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRPlayerController)


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MainWidgetClass() { return STRUCT_OFFSET(ABRPlayerController, MainWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MainWidget() { return STRUCT_OFFSET(ABRPlayerController, MainWidget); } \
	FORCEINLINE static uint32 __PPO__ResultWidgetClass() { return STRUCT_OFFSET(ABRPlayerController, ResultWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ResultWidget() { return STRUCT_OFFSET(ABRPlayerController, ResultWidget); } \
	FORCEINLINE static uint32 __PPO__FlyingViewer() { return STRUCT_OFFSET(ABRPlayerController, FlyingViewer); } \
	FORCEINLINE static uint32 __PPO__BP_Player() { return STRUCT_OFFSET(ABRPlayerController, BP_Player); } \
	FORCEINLINE static uint32 __PPO__WorldMapClass() { return STRUCT_OFFSET(ABRPlayerController, WorldMapClass); }


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_16_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_GameModes_BRPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
