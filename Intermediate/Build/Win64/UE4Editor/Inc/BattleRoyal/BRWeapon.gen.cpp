// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/BRWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRWeapon() {}
// Cross Module References
	BATTLEROYAL_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_OnRep_HitScanTrace();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_ServerFire();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BATTLEROYAL_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_BattleRoyal(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/BattleRoyal"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_BattleRoyal_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_BattleRoyal_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_BattleRoyal_StaticRegisterNativesFHitScanTrace;
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BattleRoyal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
				{ "ToolTip", "Contain information of a single hitscan weapon line trace" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhereHit_MetaData[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WhereHit = { UE4CodeGen_Private::EPropertyClass::Int, "WhereHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, WhereHit), METADATA_PARAMS(NewProp_WhereHit_MetaData, ARRAY_COUNT(NewProp_WhereHit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceTo = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(NewProp_TraceTo_MetaData, ARRAY_COUNT(NewProp_TraceTo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WhereHit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceTo,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HitScanTrace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FHitScanTrace),
				alignof(FHitScanTrace),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC() { return 827029507U; }
	static FName NAME_ABRWeapon_ServerFire = FName(TEXT("ServerFire"));
	void ABRWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRWeapon_ServerFire),NULL);
	}
	void ABRWeapon::StaticRegisterNativesABRWeapon()
	{
		UClass* Class = ABRWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitScanTrace", &ABRWeapon::execOnRep_HitScanTrace },
			{ "ServerFire", &ABRWeapon::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon, "OnRep_HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon, "ServerFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRWeapon_NoRegister()
	{
		return ABRWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRWeapon_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 3987391309
				{ &Z_Construct_UFunction_ABRWeapon_ServerFire, "ServerFire" }, // 4244370597
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapons/BRWeapon.h" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire = { UE4CodeGen_Private::EPropertyClass::Float, "RateOfFire", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRWeapon, RateOfFire), METADATA_PARAMS(NewProp_RateOfFire_MetaData, ARRAY_COUNT(NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitScanTrace_MetaData[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitScanTrace = { UE4CodeGen_Private::EPropertyClass::Struct, "HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088100000020, 1, "OnRep_HitScanTrace", STRUCT_OFFSET(ABRWeapon, HitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(NewProp_HitScanTrace_MetaData, ARRAY_COUNT(NewProp_HitScanTrace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
				{ "ToolTip", "Bullet Spread in Degrees" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread = { UE4CodeGen_Private::EPropertyClass::Float, "BulletSpread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRWeapon, BulletSpread), METADATA_PARAMS(NewProp_BulletSpread_MetaData, ARRAY_COUNT(NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage = { UE4CodeGen_Private::EPropertyClass::Float, "BaseDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABRWeapon, BaseDamage), METADATA_PARAMS(NewProp_BaseDamage_MetaData, ARRAY_COUNT(NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCamShake_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCamShake = { UE4CodeGen_Private::EPropertyClass::Class, "FireCamShake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRWeapon, FireCamShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FireCamShake_MetaData, ARRAY_COUNT(NewProp_FireCamShake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_FireSound_MetaData, ARRAY_COUNT(NewProp_FireSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect = { UE4CodeGen_Private::EPropertyClass::Object, "TracerEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, TracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_TracerEffect_MetaData, ARRAY_COUNT(NewProp_TracerEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "FleshImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, FleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_FleshImpactEffect_MetaData, ARRAY_COUNT(NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, DefaultImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_DefaultImpactEffect_MetaData, ARRAY_COUNT(NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffect = { UE4CodeGen_Private::EPropertyClass::Object, "MuzzleEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, MuzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_MuzzleEffect_MetaData, ARRAY_COUNT(NewProp_MuzzleEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerTargetName_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TracerTargetName = { UE4CodeGen_Private::EPropertyClass::Name, "TracerTargetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, TracerTargetName), METADATA_PARAMS(NewProp_TracerTargetName_MetaData, ARRAY_COUNT(NewProp_TracerTargetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "MuzzleSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, MuzzleSocketName), METADATA_PARAMS(NewProp_MuzzleSocketName_MetaData, ARRAY_COUNT(NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Weapon" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000009001d, 1, nullptr, STRUCT_OFFSET(ABRWeapon, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Class, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010015, 1, nullptr, STRUCT_OFFSET(ABRWeapon, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RateOfFire,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitScanTrace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletSpread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireCamShake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracerEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FleshImpactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultImpactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracerTargetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRWeapon::StaticClass,
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
	IMPLEMENT_CLASS(ABRWeapon, 3719981612);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRWeapon(Z_Construct_UClass_ABRWeapon, &ABRWeapon::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
