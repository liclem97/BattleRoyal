// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABRPickupActor;
class UBRHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef BATTLEROYAL_BRCharacter_generated_h
#error "BRCharacter.generated.h already included, missing '#pragma once' in BRCharacter.h"
#endif
#define BATTLEROYAL_BRCharacter_generated_h

#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_RPC_WRAPPERS \
	virtual bool MulticastWeaponEquip_Validate(); \
	virtual void MulticastWeaponEquip_Implementation(); \
	virtual bool ServerWeaponEquip_Validate(); \
	virtual void ServerWeaponEquip_Implementation(); \
	virtual bool ServerSpawnWeapon_Validate(); \
	virtual void ServerSpawnWeapon_Implementation(); \
	virtual bool RifleEquip_Req_Validate(bool ); \
	virtual void RifleEquip_Req_Implementation(bool bNewRifleEquipped); \
	virtual bool ServerResetToWalk_Validate(); \
	virtual void ServerResetToWalk_Implementation(); \
	virtual bool ServerGlidingFunc_Validate(); \
	virtual void ServerGlidingFunc_Implementation(); \
	virtual bool ServerDivingFunc_Validate(); \
	virtual void ServerDivingFunc_Implementation(); \
	virtual bool WantToWalk_Req_Validate(); \
	virtual void WantToWalk_Req_Implementation(); \
	virtual bool WantToGlide_Validate(); \
	virtual void WantToGlide_Implementation(); \
	virtual void FireAnimation_Multicast_Implementation(); \
	virtual bool FireAnimation_Req_Validate(); \
	virtual void FireAnimation_Req_Implementation(); \
	virtual bool Aiming_Req_Validate(bool ); \
	virtual void Aiming_Req_Implementation(bool bNewAiming); \
	virtual bool TryToPickItem_Req_Validate(ABRPickupActor* ); \
	virtual void TryToPickItem_Req_Implementation(ABRPickupActor* TargetItem); \
	virtual bool WaistPitch_Req_Validate(float ); \
	virtual void WaistPitch_Req_Implementation(float ServerWaistPitch); \
	virtual bool MoveRight_Req_Validate(float ); \
	virtual void MoveRight_Req_Implementation(float ServerMoveRightValue); \
	virtual bool MoveForward_Req_Validate(float ); \
	virtual void MoveForward_Req_Implementation(float ServerMoveForwardValue); \
 \
	DECLARE_FUNCTION(execMulticastWeaponEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastWeaponEquip_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastWeaponEquip_Validate")); \
			return; \
		} \
		P_THIS->MulticastWeaponEquip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerWeaponEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerWeaponEquip_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerWeaponEquip_Validate")); \
			return; \
		} \
		P_THIS->ServerWeaponEquip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSpawnWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSpawnWeapon_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSpawnWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerSpawnWeapon_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRifleEquip_Req) \
	{ \
		P_GET_UBOOL(Z_Param_bNewRifleEquipped); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->RifleEquip_Req_Validate(Z_Param_bNewRifleEquipped)) \
		{ \
			RPC_ValidateFailed(TEXT("RifleEquip_Req_Validate")); \
			return; \
		} \
		P_THIS->RifleEquip_Req_Implementation(Z_Param_bNewRifleEquipped); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerResetToWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerResetToWalk_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerResetToWalk_Validate")); \
			return; \
		} \
		P_THIS->ServerResetToWalk_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerGlidingFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerGlidingFunc_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerGlidingFunc_Validate")); \
			return; \
		} \
		P_THIS->ServerGlidingFunc_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerDivingFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDivingFunc_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDivingFunc_Validate")); \
			return; \
		} \
		P_THIS->ServerDivingFunc_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantToWalk_Req) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WantToWalk_Req_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("WantToWalk_Req_Validate")); \
			return; \
		} \
		P_THIS->WantToWalk_Req_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantToGlide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WantToGlide_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("WantToGlide_Validate")); \
			return; \
		} \
		P_THIS->WantToGlide_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Gliding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Gliding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Diving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Diving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Death) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Death(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAnimation_Multicast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireAnimation_Multicast_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAnimation_Req) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->FireAnimation_Req_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("FireAnimation_Req_Validate")); \
			return; \
		} \
		P_THIS->FireAnimation_Req_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAiming_Req) \
	{ \
		P_GET_UBOOL(Z_Param_bNewAiming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Aiming_Req_Validate(Z_Param_bNewAiming)) \
		{ \
			RPC_ValidateFailed(TEXT("Aiming_Req_Validate")); \
			return; \
		} \
		P_THIS->Aiming_Req_Implementation(Z_Param_bNewAiming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadShoesItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadShoesItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadHelmetItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadHelmetItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadLowerItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadLowerItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadUpperItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadUpperItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToPickItem_Req) \
	{ \
		P_GET_OBJECT(ABRPickupActor,Z_Param_TargetItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->TryToPickItem_Req_Validate(Z_Param_TargetItem)) \
		{ \
			RPC_ValidateFailed(TEXT("TryToPickItem_Req_Validate")); \
			return; \
		} \
		P_THIS->TryToPickItem_Req_Implementation(Z_Param_TargetItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWaistPitch_Req) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerWaistPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WaistPitch_Req_Validate(Z_Param_ServerWaistPitch)) \
		{ \
			RPC_ValidateFailed(TEXT("WaistPitch_Req_Validate")); \
			return; \
		} \
		P_THIS->WaistPitch_Req_Implementation(Z_Param_ServerWaistPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight_Req) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMoveRightValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveRight_Req_Validate(Z_Param_ServerMoveRightValue)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveRight_Req_Validate")); \
			return; \
		} \
		P_THIS->MoveRight_Req_Implementation(Z_Param_ServerMoveRightValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward_Req) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMoveForwardValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveForward_Req_Validate(Z_Param_ServerMoveForwardValue)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveForward_Req_Validate")); \
			return; \
		} \
		P_THIS->MoveForward_Req_Implementation(Z_Param_ServerMoveForwardValue); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool MulticastWeaponEquip_Validate(); \
	virtual void MulticastWeaponEquip_Implementation(); \
	virtual bool ServerWeaponEquip_Validate(); \
	virtual void ServerWeaponEquip_Implementation(); \
	virtual bool ServerSpawnWeapon_Validate(); \
	virtual void ServerSpawnWeapon_Implementation(); \
	virtual bool RifleEquip_Req_Validate(bool ); \
	virtual void RifleEquip_Req_Implementation(bool bNewRifleEquipped); \
	virtual bool ServerResetToWalk_Validate(); \
	virtual void ServerResetToWalk_Implementation(); \
	virtual bool ServerGlidingFunc_Validate(); \
	virtual void ServerGlidingFunc_Implementation(); \
	virtual bool ServerDivingFunc_Validate(); \
	virtual void ServerDivingFunc_Implementation(); \
	virtual bool WantToWalk_Req_Validate(); \
	virtual void WantToWalk_Req_Implementation(); \
	virtual bool WantToGlide_Validate(); \
	virtual void WantToGlide_Implementation(); \
	virtual void FireAnimation_Multicast_Implementation(); \
	virtual bool FireAnimation_Req_Validate(); \
	virtual void FireAnimation_Req_Implementation(); \
	virtual bool Aiming_Req_Validate(bool ); \
	virtual void Aiming_Req_Implementation(bool bNewAiming); \
	virtual bool TryToPickItem_Req_Validate(ABRPickupActor* ); \
	virtual void TryToPickItem_Req_Implementation(ABRPickupActor* TargetItem); \
	virtual bool WaistPitch_Req_Validate(float ); \
	virtual void WaistPitch_Req_Implementation(float ServerWaistPitch); \
	virtual bool MoveRight_Req_Validate(float ); \
	virtual void MoveRight_Req_Implementation(float ServerMoveRightValue); \
	virtual bool MoveForward_Req_Validate(float ); \
	virtual void MoveForward_Req_Implementation(float ServerMoveForwardValue); \
 \
	DECLARE_FUNCTION(execMulticastWeaponEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MulticastWeaponEquip_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MulticastWeaponEquip_Validate")); \
			return; \
		} \
		P_THIS->MulticastWeaponEquip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerWeaponEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerWeaponEquip_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerWeaponEquip_Validate")); \
			return; \
		} \
		P_THIS->ServerWeaponEquip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSpawnWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSpawnWeapon_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSpawnWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerSpawnWeapon_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRifleEquip_Req) \
	{ \
		P_GET_UBOOL(Z_Param_bNewRifleEquipped); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->RifleEquip_Req_Validate(Z_Param_bNewRifleEquipped)) \
		{ \
			RPC_ValidateFailed(TEXT("RifleEquip_Req_Validate")); \
			return; \
		} \
		P_THIS->RifleEquip_Req_Implementation(Z_Param_bNewRifleEquipped); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerResetToWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerResetToWalk_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerResetToWalk_Validate")); \
			return; \
		} \
		P_THIS->ServerResetToWalk_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerGlidingFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerGlidingFunc_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerGlidingFunc_Validate")); \
			return; \
		} \
		P_THIS->ServerGlidingFunc_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerDivingFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDivingFunc_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDivingFunc_Validate")); \
			return; \
		} \
		P_THIS->ServerDivingFunc_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantToWalk_Req) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WantToWalk_Req_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("WantToWalk_Req_Validate")); \
			return; \
		} \
		P_THIS->WantToWalk_Req_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantToGlide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WantToGlide_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("WantToGlide_Validate")); \
			return; \
		} \
		P_THIS->WantToGlide_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Gliding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Gliding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Diving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Diving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Death) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Death(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAnimation_Multicast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireAnimation_Multicast_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAnimation_Req) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->FireAnimation_Req_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("FireAnimation_Req_Validate")); \
			return; \
		} \
		P_THIS->FireAnimation_Req_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAiming_Req) \
	{ \
		P_GET_UBOOL(Z_Param_bNewAiming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Aiming_Req_Validate(Z_Param_bNewAiming)) \
		{ \
			RPC_ValidateFailed(TEXT("Aiming_Req_Validate")); \
			return; \
		} \
		P_THIS->Aiming_Req_Implementation(Z_Param_bNewAiming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadShoesItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadShoesItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadHelmetItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadHelmetItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadLowerItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadLowerItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LoadUpperItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LoadUpperItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToPickItem_Req) \
	{ \
		P_GET_OBJECT(ABRPickupActor,Z_Param_TargetItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->TryToPickItem_Req_Validate(Z_Param_TargetItem)) \
		{ \
			RPC_ValidateFailed(TEXT("TryToPickItem_Req_Validate")); \
			return; \
		} \
		P_THIS->TryToPickItem_Req_Implementation(Z_Param_TargetItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWaistPitch_Req) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerWaistPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->WaistPitch_Req_Validate(Z_Param_ServerWaistPitch)) \
		{ \
			RPC_ValidateFailed(TEXT("WaistPitch_Req_Validate")); \
			return; \
		} \
		P_THIS->WaistPitch_Req_Implementation(Z_Param_ServerWaistPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight_Req) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMoveRightValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveRight_Req_Validate(Z_Param_ServerMoveRightValue)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveRight_Req_Validate")); \
			return; \
		} \
		P_THIS->MoveRight_Req_Implementation(Z_Param_ServerMoveRightValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward_Req) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMoveForwardValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveForward_Req_Validate(Z_Param_ServerMoveForwardValue)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveForward_Req_Validate")); \
			return; \
		} \
		P_THIS->MoveForward_Req_Implementation(Z_Param_ServerMoveForwardValue); \
		P_NATIVE_END; \
	}


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_EVENT_PARMS \
	struct BRCharacter_eventAiming_Req_Parms \
	{ \
		bool bNewAiming; \
	}; \
	struct BRCharacter_eventMoveForward_Req_Parms \
	{ \
		float ServerMoveForwardValue; \
	}; \
	struct BRCharacter_eventMoveRight_Req_Parms \
	{ \
		float ServerMoveRightValue; \
	}; \
	struct BRCharacter_eventOnHealthChanged_Parms \
	{ \
		UBRHealthComponent* OwningHealthComp; \
		float Health; \
		float HealthDelta; \
		const UDamageType* DamageType; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
	}; \
	struct BRCharacter_eventRifleEquip_Req_Parms \
	{ \
		bool bNewRifleEquipped; \
	}; \
	struct BRCharacter_eventTryToPickItem_Req_Parms \
	{ \
		ABRPickupActor* TargetItem; \
	}; \
	struct BRCharacter_eventWaistPitch_Req_Parms \
	{ \
		float ServerWaistPitch; \
	};


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_CALLBACK_WRAPPERS
#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABRCharacter(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRCharacter(); \
public: \
	DECLARE_CLASS(ABRCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesABRCharacter(); \
	friend BATTLEROYAL_API class UClass* Z_Construct_UClass_ABRCharacter(); \
public: \
	DECLARE_CLASS(ABRCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleRoyal"), NO_API) \
	DECLARE_SERIALIZER(ABRCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABRCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRCharacter(ABRCharacter&&); \
	NO_API ABRCharacter(const ABRCharacter&); \
public:


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABRCharacter(ABRCharacter&&); \
	NO_API ABRCharacter(const ABRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABRCharacter)


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasWeapon() { return STRUCT_OFFSET(ABRCharacter, bHasWeapon); } \
	FORCEINLINE static uint32 __PPO__MoveForwardValue() { return STRUCT_OFFSET(ABRCharacter, MoveForwardValue); } \
	FORCEINLINE static uint32 __PPO__MoveRightValue() { return STRUCT_OFFSET(ABRCharacter, MoveRightValue); } \
	FORCEINLINE static uint32 __PPO__WaistPitch() { return STRUCT_OFFSET(ABRCharacter, WaistPitch); } \
	FORCEINLINE static uint32 __PPO__bRifleEquipped() { return STRUCT_OFFSET(ABRCharacter, bRifleEquipped); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(ABRCharacter, bAiming); } \
	FORCEINLINE static uint32 __PPO__CrosshairWidgetClass() { return STRUCT_OFFSET(ABRCharacter, CrosshairWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CrosshairWidget() { return STRUCT_OFFSET(ABRCharacter, CrosshairWidget); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(ABRCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ABRCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ABRCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ABRCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__WeaponBackSocketName() { return STRUCT_OFFSET(ABRCharacter, WeaponBackSocketName); } \
	FORCEINLINE static uint32 __PPO__WeaponRightSocketName() { return STRUCT_OFFSET(ABRCharacter, WeaponRightSocketName); } \
	FORCEINLINE static uint32 __PPO__ParachuteSocketName() { return STRUCT_OFFSET(ABRCharacter, ParachuteSocketName); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ABRCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(ABRCharacter, bDied); } \
	FORCEINLINE static uint32 __PPO__Helmet() { return STRUCT_OFFSET(ABRCharacter, Helmet); } \
	FORCEINLINE static uint32 __PPO__Upper() { return STRUCT_OFFSET(ABRCharacter, Upper); } \
	FORCEINLINE static uint32 __PPO__Lower() { return STRUCT_OFFSET(ABRCharacter, Lower); } \
	FORCEINLINE static uint32 __PPO__Shoes() { return STRUCT_OFFSET(ABRCharacter, Shoes); } \
	FORCEINLINE static uint32 __PPO__ItemDataTable() { return STRUCT_OFFSET(ABRCharacter, ItemDataTable); } \
	FORCEINLINE static uint32 __PPO__InteractionWidget() { return STRUCT_OFFSET(ABRCharacter, InteractionWidget); } \
	FORCEINLINE static uint32 __PPO__UpperItemClassID() { return STRUCT_OFFSET(ABRCharacter, UpperItemClassID); } \
	FORCEINLINE static uint32 __PPO__LowerItemClassID() { return STRUCT_OFFSET(ABRCharacter, LowerItemClassID); } \
	FORCEINLINE static uint32 __PPO__HelmetItemClassID() { return STRUCT_OFFSET(ABRCharacter, HelmetItemClassID); } \
	FORCEINLINE static uint32 __PPO__ShoesItemClassID() { return STRUCT_OFFSET(ABRCharacter, ShoesItemClassID); } \
	FORCEINLINE static uint32 __PPO__WeaponItemClassID() { return STRUCT_OFFSET(ABRCharacter, WeaponItemClassID); } \
	FORCEINLINE static uint32 __PPO__FireMontage() { return STRUCT_OFFSET(ABRCharacter, FireMontage); } \
	FORCEINLINE static uint32 __PPO__DeathMontage() { return STRUCT_OFFSET(ABRCharacter, DeathMontage); } \
	FORCEINLINE static uint32 __PPO__FlyingMontage() { return STRUCT_OFFSET(ABRCharacter, FlyingMontage); } \
	FORCEINLINE static uint32 __PPO__GlidingMontage() { return STRUCT_OFFSET(ABRCharacter, GlidingMontage); } \
	FORCEINLINE static uint32 __PPO__ParachuteClass() { return STRUCT_OFFSET(ABRCharacter, ParachuteClass); } \
	FORCEINLINE static uint32 __PPO__bGliding() { return STRUCT_OFFSET(ABRCharacter, bGliding); } \
	FORCEINLINE static uint32 __PPO__bDiving() { return STRUCT_OFFSET(ABRCharacter, bDiving); } \
	FORCEINLINE static uint32 __PPO__Cloud() { return STRUCT_OFFSET(ABRCharacter, Cloud); } \
	FORCEINLINE static uint32 __PPO__Audio() { return STRUCT_OFFSET(ABRCharacter, Audio); } \
	FORCEINLINE static uint32 __PPO__BRWeapon() { return STRUCT_OFFSET(ABRCharacter, BRWeapon); } \
	FORCEINLINE static uint32 __PPO__MyWeapon() { return STRUCT_OFFSET(ABRCharacter, MyWeapon); }


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_23_PROLOG \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_EVENT_PARMS


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_RPC_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_INCLASS \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_CALLBACK_WRAPPERS \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_INCLASS_NO_PURE_DECLS \
	BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyal_Source_BattleRoyal_Public_BRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
