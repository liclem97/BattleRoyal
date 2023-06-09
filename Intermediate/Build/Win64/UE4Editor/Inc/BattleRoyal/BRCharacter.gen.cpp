// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRCharacter() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRCharacter_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_Aiming_Req();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_FireAnimation_Multicast();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_FireAnimation_Req();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_LoadHelmetItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_LoadLowerItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_LoadShoesItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_LoadUpperItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_MoveForward_Req();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_MoveRight_Req();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_MulticastWeaponEquip();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRHealthComponent_NoRegister();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_Death();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_Diving();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_Gliding();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadHelmetItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadLowerItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadShoesItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadUpperItem();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_RifleEquip_Req();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_ServerDivingFunc();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_ServerGlidingFunc();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_ServerResetToWalk();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_ServerSpawnWeapon();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_ServerWeaponEquip();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_TryToPickItem_Req();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRPickupActor_NoRegister();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_WaistPitch_Req();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_WantToGlide();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRCharacter_WantToWalk_Req();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static FName NAME_ABRCharacter_Aiming_Req = FName(TEXT("Aiming_Req"));
	void ABRCharacter::Aiming_Req(bool bNewAiming)
	{
		BRCharacter_eventAiming_Req_Parms Parms;
		Parms.bNewAiming=bNewAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_Aiming_Req),&Parms);
	}
	static FName NAME_ABRCharacter_FireAnimation_Multicast = FName(TEXT("FireAnimation_Multicast"));
	void ABRCharacter::FireAnimation_Multicast()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_FireAnimation_Multicast),NULL);
	}
	static FName NAME_ABRCharacter_FireAnimation_Req = FName(TEXT("FireAnimation_Req"));
	void ABRCharacter::FireAnimation_Req()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_FireAnimation_Req),NULL);
	}
	static FName NAME_ABRCharacter_LoadHelmetItem = FName(TEXT("LoadHelmetItem"));
	void ABRCharacter::LoadHelmetItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_LoadHelmetItem),NULL);
	}
	static FName NAME_ABRCharacter_LoadLowerItem = FName(TEXT("LoadLowerItem"));
	void ABRCharacter::LoadLowerItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_LoadLowerItem),NULL);
	}
	static FName NAME_ABRCharacter_LoadShoesItem = FName(TEXT("LoadShoesItem"));
	void ABRCharacter::LoadShoesItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_LoadShoesItem),NULL);
	}
	static FName NAME_ABRCharacter_LoadUpperItem = FName(TEXT("LoadUpperItem"));
	void ABRCharacter::LoadUpperItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_LoadUpperItem),NULL);
	}
	static FName NAME_ABRCharacter_MoveForward_Req = FName(TEXT("MoveForward_Req"));
	void ABRCharacter::MoveForward_Req(float ServerMoveForwardValue)
	{
		BRCharacter_eventMoveForward_Req_Parms Parms;
		Parms.ServerMoveForwardValue=ServerMoveForwardValue;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_MoveForward_Req),&Parms);
	}
	static FName NAME_ABRCharacter_MoveRight_Req = FName(TEXT("MoveRight_Req"));
	void ABRCharacter::MoveRight_Req(float ServerMoveRightValue)
	{
		BRCharacter_eventMoveRight_Req_Parms Parms;
		Parms.ServerMoveRightValue=ServerMoveRightValue;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_MoveRight_Req),&Parms);
	}
	static FName NAME_ABRCharacter_MulticastWeaponEquip = FName(TEXT("MulticastWeaponEquip"));
	void ABRCharacter::MulticastWeaponEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_MulticastWeaponEquip),NULL);
	}
	static FName NAME_ABRCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
	void ABRCharacter::OnHealthChanged(UBRHealthComponent* OwningHealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
	{
		BRCharacter_eventOnHealthChanged_Parms Parms;
		Parms.OwningHealthComp=OwningHealthComp;
		Parms.Health=Health;
		Parms.HealthDelta=HealthDelta;
		Parms.DamageType=DamageType;
		Parms.InstigatedBy=InstigatedBy;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_OnHealthChanged),&Parms);
	}
	static FName NAME_ABRCharacter_RifleEquip_Req = FName(TEXT("RifleEquip_Req"));
	void ABRCharacter::RifleEquip_Req(bool bNewRifleEquipped)
	{
		BRCharacter_eventRifleEquip_Req_Parms Parms;
		Parms.bNewRifleEquipped=bNewRifleEquipped ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_RifleEquip_Req),&Parms);
	}
	static FName NAME_ABRCharacter_ServerDivingFunc = FName(TEXT("ServerDivingFunc"));
	void ABRCharacter::ServerDivingFunc()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_ServerDivingFunc),NULL);
	}
	static FName NAME_ABRCharacter_ServerGlidingFunc = FName(TEXT("ServerGlidingFunc"));
	void ABRCharacter::ServerGlidingFunc()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_ServerGlidingFunc),NULL);
	}
	static FName NAME_ABRCharacter_ServerResetToWalk = FName(TEXT("ServerResetToWalk"));
	void ABRCharacter::ServerResetToWalk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_ServerResetToWalk),NULL);
	}
	static FName NAME_ABRCharacter_ServerSpawnWeapon = FName(TEXT("ServerSpawnWeapon"));
	void ABRCharacter::ServerSpawnWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_ServerSpawnWeapon),NULL);
	}
	static FName NAME_ABRCharacter_ServerWeaponEquip = FName(TEXT("ServerWeaponEquip"));
	void ABRCharacter::ServerWeaponEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_ServerWeaponEquip),NULL);
	}
	static FName NAME_ABRCharacter_TryToPickItem_Req = FName(TEXT("TryToPickItem_Req"));
	void ABRCharacter::TryToPickItem_Req(ABRPickupActor* TargetItem)
	{
		BRCharacter_eventTryToPickItem_Req_Parms Parms;
		Parms.TargetItem=TargetItem;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_TryToPickItem_Req),&Parms);
	}
	static FName NAME_ABRCharacter_WaistPitch_Req = FName(TEXT("WaistPitch_Req"));
	void ABRCharacter::WaistPitch_Req(float ServerWaistPitch)
	{
		BRCharacter_eventWaistPitch_Req_Parms Parms;
		Parms.ServerWaistPitch=ServerWaistPitch;
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_WaistPitch_Req),&Parms);
	}
	static FName NAME_ABRCharacter_WantToGlide = FName(TEXT("WantToGlide"));
	void ABRCharacter::WantToGlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_WantToGlide),NULL);
	}
	static FName NAME_ABRCharacter_WantToWalk_Req = FName(TEXT("WantToWalk_Req"));
	void ABRCharacter::WantToWalk_Req()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRCharacter_WantToWalk_Req),NULL);
	}
	void ABRCharacter::StaticRegisterNativesABRCharacter()
	{
		UClass* Class = ABRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Aiming_Req", &ABRCharacter::execAiming_Req },
			{ "FireAnimation_Multicast", &ABRCharacter::execFireAnimation_Multicast },
			{ "FireAnimation_Req", &ABRCharacter::execFireAnimation_Req },
			{ "MoveForward_Req", &ABRCharacter::execMoveForward_Req },
			{ "MoveRight_Req", &ABRCharacter::execMoveRight_Req },
			{ "MulticastWeaponEquip", &ABRCharacter::execMulticastWeaponEquip },
			{ "OnRep_Death", &ABRCharacter::execOnRep_Death },
			{ "OnRep_Diving", &ABRCharacter::execOnRep_Diving },
			{ "OnRep_Gliding", &ABRCharacter::execOnRep_Gliding },
			{ "OnRep_LoadHelmetItem", &ABRCharacter::execOnRep_LoadHelmetItem },
			{ "OnRep_LoadLowerItem", &ABRCharacter::execOnRep_LoadLowerItem },
			{ "OnRep_LoadShoesItem", &ABRCharacter::execOnRep_LoadShoesItem },
			{ "OnRep_LoadUpperItem", &ABRCharacter::execOnRep_LoadUpperItem },
			{ "RifleEquip_Req", &ABRCharacter::execRifleEquip_Req },
			{ "ServerDivingFunc", &ABRCharacter::execServerDivingFunc },
			{ "ServerGlidingFunc", &ABRCharacter::execServerGlidingFunc },
			{ "ServerResetToWalk", &ABRCharacter::execServerResetToWalk },
			{ "ServerSpawnWeapon", &ABRCharacter::execServerSpawnWeapon },
			{ "ServerWeaponEquip", &ABRCharacter::execServerWeaponEquip },
			{ "TryToPickItem_Req", &ABRCharacter::execTryToPickItem_Req },
			{ "WaistPitch_Req", &ABRCharacter::execWaistPitch_Req },
			{ "WantToGlide", &ABRCharacter::execWantToGlide },
			{ "WantToWalk_Req", &ABRCharacter::execWantToWalk_Req },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_Aiming_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewAiming_SetBit = [](void* Obj){ ((BRCharacter_eventAiming_Req_Parms*)Obj)->bNewAiming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewAiming = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewAiming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BRCharacter_eventAiming_Req_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewAiming_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewAiming,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "Aiming_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(BRCharacter_eventAiming_Req_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_FireAnimation_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "FireAnimation_Multicast", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00084CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_FireAnimation_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "FireAnimation_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280C40, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_LoadHelmetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "LoadHelmetItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_LoadLowerItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "LoadLowerItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_LoadShoesItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "LoadShoesItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_LoadUpperItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "LoadUpperItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_MoveForward_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerMoveForwardValue = { UE4CodeGen_Private::EPropertyClass::Float, "ServerMoveForwardValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventMoveForward_Req_Parms, ServerMoveForwardValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerMoveForwardValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "MoveForward_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280C40, sizeof(BRCharacter_eventMoveForward_Req_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_MoveRight_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerMoveRightValue = { UE4CodeGen_Private::EPropertyClass::Float, "ServerMoveRightValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventMoveRight_Req_Parms, ServerMoveRightValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerMoveRightValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "MoveRight_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280C40, sizeof(BRCharacter_eventMoveRight_Req_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_MulticastWeaponEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
				{ "ToolTip", "\xeb\x8b\xa4\xeb\xa5\xb8 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xec\x99\x80 \xeb\x82\xb4 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xec\x9d\x98 \xec\xb4\x9d\xea\xb8\xb0 \xec\x9c\x84\xec\xb9\x98\xeb\xa5\xbc \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "MulticastWeaponEquip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80084CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventOnHealthChanged_Parms, OwningHealthComp), Z_Construct_UClass_UBRHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(NewProp_OwningHealthComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningHealthComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BRCharacter_eventOnHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_Death()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_Death", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_Diving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_Diving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_Gliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_Gliding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadHelmetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_LoadHelmetItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadLowerItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_LoadLowerItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadShoesItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_LoadShoesItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_OnRep_LoadUpperItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "OnRep_LoadUpperItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_RifleEquip_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewRifleEquipped_SetBit = [](void* Obj){ ((BRCharacter_eventRifleEquip_Req_Parms*)Obj)->bNewRifleEquipped = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewRifleEquipped = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewRifleEquipped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BRCharacter_eventRifleEquip_Req_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewRifleEquipped_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewRifleEquipped,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "RifleEquip_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(BRCharacter_eventRifleEquip_Req_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_ServerDivingFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "ServerDivingFunc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_ServerGlidingFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "ServerGlidingFunc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_ServerResetToWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "ServerResetToWalk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_ServerSpawnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
				{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xec\xb4\x9d\xec\x9d\x84 \xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa8" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "ServerSpawnWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_ServerWeaponEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "ServerWeaponEquip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_TryToPickItem_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetItem = { UE4CodeGen_Private::EPropertyClass::Object, "TargetItem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventTryToPickItem_Req_Parms, TargetItem), Z_Construct_UClass_ABRPickupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetItem,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "TryToPickItem_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(BRCharacter_eventTryToPickItem_Req_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_WaistPitch_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerWaistPitch = { UE4CodeGen_Private::EPropertyClass::Float, "ServerWaistPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRCharacter_eventWaistPitch_Req_Parms, ServerWaistPitch), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerWaistPitch,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "WaistPitch_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280C40, sizeof(BRCharacter_eventWaistPitch_Req_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_WantToGlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "WantToGlide", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280C40, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRCharacter_WantToWalk_Req()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRCharacter, "WantToWalk_Req", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRCharacter_NoRegister()
	{
		return ABRCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRCharacter_Aiming_Req, "Aiming_Req" }, // 2010436774
				{ &Z_Construct_UFunction_ABRCharacter_FireAnimation_Multicast, "FireAnimation_Multicast" }, // 506854777
				{ &Z_Construct_UFunction_ABRCharacter_FireAnimation_Req, "FireAnimation_Req" }, // 3069035513
				{ &Z_Construct_UFunction_ABRCharacter_LoadHelmetItem, "LoadHelmetItem" }, // 3731748063
				{ &Z_Construct_UFunction_ABRCharacter_LoadLowerItem, "LoadLowerItem" }, // 2479702496
				{ &Z_Construct_UFunction_ABRCharacter_LoadShoesItem, "LoadShoesItem" }, // 2984794927
				{ &Z_Construct_UFunction_ABRCharacter_LoadUpperItem, "LoadUpperItem" }, // 510640496
				{ &Z_Construct_UFunction_ABRCharacter_MoveForward_Req, "MoveForward_Req" }, // 214176705
				{ &Z_Construct_UFunction_ABRCharacter_MoveRight_Req, "MoveRight_Req" }, // 2390954793
				{ &Z_Construct_UFunction_ABRCharacter_MulticastWeaponEquip, "MulticastWeaponEquip" }, // 3120053424
				{ &Z_Construct_UFunction_ABRCharacter_OnHealthChanged, "OnHealthChanged" }, // 2004985124
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_Death, "OnRep_Death" }, // 633016084
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_Diving, "OnRep_Diving" }, // 1376383627
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_Gliding, "OnRep_Gliding" }, // 3432887924
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_LoadHelmetItem, "OnRep_LoadHelmetItem" }, // 6761174
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_LoadLowerItem, "OnRep_LoadLowerItem" }, // 583235665
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_LoadShoesItem, "OnRep_LoadShoesItem" }, // 502090552
				{ &Z_Construct_UFunction_ABRCharacter_OnRep_LoadUpperItem, "OnRep_LoadUpperItem" }, // 795832891
				{ &Z_Construct_UFunction_ABRCharacter_RifleEquip_Req, "RifleEquip_Req" }, // 3916029820
				{ &Z_Construct_UFunction_ABRCharacter_ServerDivingFunc, "ServerDivingFunc" }, // 2203489303
				{ &Z_Construct_UFunction_ABRCharacter_ServerGlidingFunc, "ServerGlidingFunc" }, // 1536881392
				{ &Z_Construct_UFunction_ABRCharacter_ServerResetToWalk, "ServerResetToWalk" }, // 1070717220
				{ &Z_Construct_UFunction_ABRCharacter_ServerSpawnWeapon, "ServerSpawnWeapon" }, // 182179625
				{ &Z_Construct_UFunction_ABRCharacter_ServerWeaponEquip, "ServerWeaponEquip" }, // 496987347
				{ &Z_Construct_UFunction_ABRCharacter_TryToPickItem_Req, "TryToPickItem_Req" }, // 1503257692
				{ &Z_Construct_UFunction_ABRCharacter_WaistPitch_Req, "WaistPitch_Req" }, // 2414655264
				{ &Z_Construct_UFunction_ABRCharacter_WantToGlide, "WantToGlide" }, // 3143248082
				{ &Z_Construct_UFunction_ABRCharacter_WantToWalk_Req, "WantToWalk_Req" }, // 1367936908
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BRCharacter.h" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyWeapon_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "MyWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000024, 1, nullptr, STRUCT_OFFSET(ABRCharacter, MyWeapon), Z_Construct_UClass_ABRWeapon_NoRegister, METADATA_PARAMS(NewProp_MyWeapon_MetaData, ARRAY_COUNT(NewProp_MyWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BRWeapon_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BRWeapon = { UE4CodeGen_Private::EPropertyClass::Class, "BRWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000004, 1, nullptr, STRUCT_OFFSET(ABRCharacter, BRWeapon), Z_Construct_UClass_ABRWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BRWeapon_MetaData, ARRAY_COUNT(NewProp_BRWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
				{ "Category", "Sound" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Audio = { UE4CodeGen_Private::EPropertyClass::Object, "Audio", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000009001d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_Audio_MetaData, ARRAY_COUNT(NewProp_Audio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cloud_MetaData[] = {
				{ "Category", "FX" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cloud = { UE4CodeGen_Private::EPropertyClass::Object, "Cloud", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000009001d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, Cloud), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_Cloud_MetaData, ARRAY_COUNT(NewProp_Cloud_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiving_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			auto NewProp_bDiving_SetBit = [](void* Obj){ ((ABRCharacter*)Obj)->bDiving = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiving = { UE4CodeGen_Private::EPropertyClass::Bool, "bDiving", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_Diving", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDiving_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDiving_MetaData, ARRAY_COUNT(NewProp_bDiving_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGliding_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			auto NewProp_bGliding_SetBit = [](void* Obj){ ((ABRCharacter*)Obj)->bGliding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGliding = { UE4CodeGen_Private::EPropertyClass::Bool, "bGliding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_Gliding", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGliding_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGliding_MetaData, ARRAY_COUNT(NewProp_bGliding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParachuteClass_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParachuteClass = { UE4CodeGen_Private::EPropertyClass::Class, "ParachuteClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, ParachuteClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ParachuteClass_MetaData, ARRAY_COUNT(NewProp_ParachuteClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingMontage_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlidingMontage = { UE4CodeGen_Private::EPropertyClass::Object, "GlidingMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, GlidingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_GlidingMontage_MetaData, ARRAY_COUNT(NewProp_GlidingMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyingMontage_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlyingMontage = { UE4CodeGen_Private::EPropertyClass::Object, "FlyingMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, FlyingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FlyingMontage_MetaData, ARRAY_COUNT(NewProp_FlyingMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathMontage = { UE4CodeGen_Private::EPropertyClass::Object, "DeathMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_DeathMontage_MetaData, ARRAY_COUNT(NewProp_DeathMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireMontage = { UE4CodeGen_Private::EPropertyClass::Object, "FireMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FireMontage_MetaData, ARRAY_COUNT(NewProp_FireMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponItemClassID_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponItemClassID = { UE4CodeGen_Private::EPropertyClass::Int, "WeaponItemClassID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, STRUCT_OFFSET(ABRCharacter, WeaponItemClassID), METADATA_PARAMS(NewProp_WeaponItemClassID_MetaData, ARRAY_COUNT(NewProp_WeaponItemClassID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoesItemClassID_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShoesItemClassID = { UE4CodeGen_Private::EPropertyClass::Int, "ShoesItemClassID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_LoadShoesItem", STRUCT_OFFSET(ABRCharacter, ShoesItemClassID), METADATA_PARAMS(NewProp_ShoesItemClassID_MetaData, ARRAY_COUNT(NewProp_ShoesItemClassID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelmetItemClassID_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HelmetItemClassID = { UE4CodeGen_Private::EPropertyClass::Int, "HelmetItemClassID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_LoadHelmetItem", STRUCT_OFFSET(ABRCharacter, HelmetItemClassID), METADATA_PARAMS(NewProp_HelmetItemClassID_MetaData, ARRAY_COUNT(NewProp_HelmetItemClassID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerItemClassID_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LowerItemClassID = { UE4CodeGen_Private::EPropertyClass::Int, "LowerItemClassID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_LoadLowerItem", STRUCT_OFFSET(ABRCharacter, LowerItemClassID), METADATA_PARAMS(NewProp_LowerItemClassID_MetaData, ARRAY_COUNT(NewProp_LowerItemClassID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperItemClassID_MetaData[] = {
				{ "Category", "BRCharacter" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpperItemClassID = { UE4CodeGen_Private::EPropertyClass::Int, "UpperItemClassID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_LoadUpperItem", STRUCT_OFFSET(ABRCharacter, UpperItemClassID), METADATA_PARAMS(NewProp_UpperItemClassID_MetaData, ARRAY_COUNT(NewProp_UpperItemClassID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget = { UE4CodeGen_Private::EPropertyClass::Object, "InteractionWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABRCharacter, InteractionWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(NewProp_InteractionWidget_MetaData, ARRAY_COUNT(NewProp_InteractionWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
				{ "Category", "Data Table" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "ItemDataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_ItemDataTable_MetaData, ARRAY_COUNT(NewProp_ItemDataTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoes_MetaData[] = {
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shoes = { UE4CodeGen_Private::EPropertyClass::Object, "Shoes", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, Shoes), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Shoes_MetaData, ARRAY_COUNT(NewProp_Shoes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lower_MetaData[] = {
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lower = { UE4CodeGen_Private::EPropertyClass::Object, "Lower", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, Lower), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Lower_MetaData, ARRAY_COUNT(NewProp_Lower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Upper_MetaData[] = {
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Upper = { UE4CodeGen_Private::EPropertyClass::Object, "Upper", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, Upper), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Upper_MetaData, ARRAY_COUNT(NewProp_Upper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helmet_MetaData[] = {
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Helmet = { UE4CodeGen_Private::EPropertyClass::Object, "Helmet", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, Helmet), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Helmet_MetaData, ARRAY_COUNT(NewProp_Helmet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			auto NewProp_bDied_SetBit = [](void* Obj){ ((ABRCharacter*)Obj)->bDied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied = { UE4CodeGen_Private::EPropertyClass::Bool, "bDied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_Death", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDied_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDied_MetaData, ARRAY_COUNT(NewProp_bDied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, HealthComp), Z_Construct_UClass_UBRHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComp_MetaData, ARRAY_COUNT(NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParachuteSocketName_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParachuteSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "ParachuteSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(ABRCharacter, ParachuteSocketName), METADATA_PARAMS(NewProp_ParachuteSocketName_MetaData, ARRAY_COUNT(NewProp_ParachuteSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRightSocketName_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponRightSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponRightSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(ABRCharacter, WeaponRightSocketName), METADATA_PARAMS(NewProp_WeaponRightSocketName_MetaData, ARRAY_COUNT(NewProp_WeaponRightSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBackSocketName_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponBackSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponBackSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(ABRCharacter, WeaponBackSocketName), METADATA_PARAMS(NewProp_WeaponBackSocketName_MetaData, ARRAY_COUNT(NewProp_WeaponBackSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArmComp_MetaData, ARRAY_COUNT(NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComp_MetaData, ARRAY_COUNT(NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
				{ "Category", "Player" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0.100000" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, ZoomInterpSpeed), METADATA_PARAMS(NewProp_ZoomInterpSpeed_MetaData, ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomedFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRCharacter, ZoomedFOV), METADATA_PARAMS(NewProp_ZoomedFOV_MetaData, ARRAY_COUNT(NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CrosshairWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ABRCharacter, CrosshairWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_CrosshairWidget_MetaData, ARRAY_COUNT(NewProp_CrosshairWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrosshairWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "CrosshairWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(ABRCharacter, CrosshairWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_CrosshairWidgetClass_MetaData, ARRAY_COUNT(NewProp_CrosshairWidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			auto NewProp_bAiming_SetBit = [](void* Obj){ ((ABRCharacter*)Obj)->bAiming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAiming = { UE4CodeGen_Private::EPropertyClass::Bool, "bAiming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAiming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAiming_MetaData, ARRAY_COUNT(NewProp_bAiming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRifleEquipped_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			auto NewProp_bRifleEquipped_SetBit = [](void* Obj){ ((ABRCharacter*)Obj)->bRifleEquipped = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRifleEquipped = { UE4CodeGen_Private::EPropertyClass::Bool, "bRifleEquipped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRifleEquipped_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRifleEquipped_MetaData, ARRAY_COUNT(NewProp_bRifleEquipped_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaistPitch_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaistPitch = { UE4CodeGen_Private::EPropertyClass::Float, "WaistPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, STRUCT_OFFSET(ABRCharacter, WaistPitch), METADATA_PARAMS(NewProp_WaistPitch_MetaData, ARRAY_COUNT(NewProp_WaistPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRightValue_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRightValue = { UE4CodeGen_Private::EPropertyClass::Float, "MoveRightValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, STRUCT_OFFSET(ABRCharacter, MoveRightValue), METADATA_PARAMS(NewProp_MoveRightValue_MetaData, ARRAY_COUNT(NewProp_MoveRightValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForwardValue_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveForwardValue = { UE4CodeGen_Private::EPropertyClass::Float, "MoveForwardValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, STRUCT_OFFSET(ABRCharacter, MoveForwardValue), METADATA_PARAMS(NewProp_MoveForwardValue_MetaData, ARRAY_COUNT(NewProp_MoveForwardValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasWeapon_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/BRCharacter.h" },
			};
#endif
			auto NewProp_bHasWeapon_SetBit = [](void* Obj){ ((ABRCharacter*)Obj)->bHasWeapon = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasWeapon = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasWeapon_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasWeapon_MetaData, ARRAY_COUNT(NewProp_bHasWeapon_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BRWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Audio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cloud,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDiving,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGliding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParachuteClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlidingMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlyingMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeathMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponItemClassID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShoesItemClassID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelmetItemClassID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowerItemClassID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpperItemClassID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InteractionWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemDataTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shoes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Upper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Helmet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParachuteSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponRightSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponBackSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArmComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZoomInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZoomedFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairWidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAiming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRifleEquipped,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaistPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRightValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveForwardValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasWeapon,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABRCharacter, 754794542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRCharacter(Z_Construct_UClass_ABRCharacter, &ABRCharacter::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
