// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBRHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef BATTLEROYAL_BRHealthComponent_generated_h
#error "BRHealthComponent.generated.h already included, missing '#pragma once' in BRHealthComponent.h"
#endif
#define BATTLEROYAL_BRHealthComponent_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_9_DELEGATE \
struct _Script_BattleRoyal_eventOnHealthChangedSignature_Parms \
{ \
	UBRHealthComponent* HealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UBRHealthComponent* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_BattleRoyal_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(Z_Param_OldHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(Z_Param_OldHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBRHealthComponent(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UBRHealthComponent(); \
public: \
	DECLARE_CLASS(UBRHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UBRHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBRHealthComponent(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_UBRHealthComponent(); \
public: \
	DECLARE_CLASS(UBRHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(UBRHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBRHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBRHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBRHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBRHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBRHealthComponent(UBRHealthComponent&&); \
	NO_API UBRHealthComponent(const UBRHealthComponent&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBRHealthComponent(UBRHealthComponent&&); \
	NO_API UBRHealthComponent(const UBRHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBRHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBRHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBRHealthComponent)


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UBRHealthComponent, Health); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UBRHealthComponent, DefaultHealth); }


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_11_PROLOG
#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_BRHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
