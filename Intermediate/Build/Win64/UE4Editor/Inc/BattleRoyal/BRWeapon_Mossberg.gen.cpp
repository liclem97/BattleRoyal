// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/BRWeapon_Mossberg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRWeapon_Mossberg() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_Mossberg_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_Mossberg();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_MulticastPlayFireEffect();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_MulticastPlayImpactEffect();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_OnRep_HitScanTraces_Mossberg();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_ServerPlayFireEffect();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_ServerPlayImpactEffect();
	BATTLEROYAL_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
// End Cross Module References
	static FName NAME_ABRWeapon_Mossberg_MulticastPlayFireEffect = FName(TEXT("MulticastPlayFireEffect"));
	void ABRWeapon_Mossberg::MulticastPlayFireEffect(FVector TraceEnd)
	{
		BRWeapon_Mossberg_eventMulticastPlayFireEffect_Parms Parms;
		Parms.TraceEnd=TraceEnd;
		ProcessEvent(FindFunctionChecked(NAME_ABRWeapon_Mossberg_MulticastPlayFireEffect),&Parms);
	}
	static FName NAME_ABRWeapon_Mossberg_MulticastPlayImpactEffect = FName(TEXT("MulticastPlayImpactEffect"));
	void ABRWeapon_Mossberg::MulticastPlayImpactEffect(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
	{
		BRWeapon_Mossberg_eventMulticastPlayImpactEffect_Parms Parms;
		Parms.WhereHit=WhereHit;
		Parms.ImpactPoint=ImpactPoint;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ABRWeapon_Mossberg_MulticastPlayImpactEffect),&Parms);
	}
	static FName NAME_ABRWeapon_Mossberg_ServerPlayFireEffect = FName(TEXT("ServerPlayFireEffect"));
	void ABRWeapon_Mossberg::ServerPlayFireEffect(FVector TraceEnd)
	{
		BRWeapon_Mossberg_eventServerPlayFireEffect_Parms Parms;
		Parms.TraceEnd=TraceEnd;
		ProcessEvent(FindFunctionChecked(NAME_ABRWeapon_Mossberg_ServerPlayFireEffect),&Parms);
	}
	static FName NAME_ABRWeapon_Mossberg_ServerPlayImpactEffect = FName(TEXT("ServerPlayImpactEffect"));
	void ABRWeapon_Mossberg::ServerPlayImpactEffect(int32 WhereHit, FVector ImpactPoint, FHitResult Hit)
	{
		BRWeapon_Mossberg_eventServerPlayImpactEffect_Parms Parms;
		Parms.WhereHit=WhereHit;
		Parms.ImpactPoint=ImpactPoint;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ABRWeapon_Mossberg_ServerPlayImpactEffect),&Parms);
	}
	void ABRWeapon_Mossberg::StaticRegisterNativesABRWeapon_Mossberg()
	{
		UClass* Class = ABRWeapon_Mossberg::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastPlayFireEffect", &ABRWeapon_Mossberg::execMulticastPlayFireEffect },
			{ "MulticastPlayImpactEffect", &ABRWeapon_Mossberg::execMulticastPlayImpactEffect },
			{ "OnRep_HitScanTraces_Mossberg", &ABRWeapon_Mossberg::execOnRep_HitScanTraces_Mossberg },
			{ "ServerPlayFireEffect", &ABRWeapon_Mossberg::execServerPlayFireEffect },
			{ "ServerPlayImpactEffect", &ABRWeapon_Mossberg::execServerPlayImpactEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_MulticastPlayFireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventMulticastPlayFireEffect_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceEnd,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon_Mossberg, "MulticastPlayFireEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80884CC0, sizeof(BRWeapon_Mossberg_eventMulticastPlayFireEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_MulticastPlayImpactEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventMulticastPlayImpactEffect_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventMulticastPlayImpactEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WhereHit = { UE4CodeGen_Private::EPropertyClass::Int, "WhereHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventMulticastPlayImpactEffect_Parms, WhereHit), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WhereHit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon_Mossberg, "MulticastPlayImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80884CC0, sizeof(BRWeapon_Mossberg_eventMulticastPlayImpactEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_OnRep_HitScanTraces_Mossberg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon_Mossberg, "OnRep_HitScanTraces_Mossberg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_ServerPlayFireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventServerPlayFireEffect_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceEnd,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon_Mossberg, "ServerPlayFireEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A80CC0, sizeof(BRWeapon_Mossberg_eventServerPlayFireEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRWeapon_Mossberg_ServerPlayImpactEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventServerPlayImpactEffect_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventServerPlayImpactEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WhereHit = { UE4CodeGen_Private::EPropertyClass::Int, "WhereHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRWeapon_Mossberg_eventServerPlayImpactEffect_Parms, WhereHit), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WhereHit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRWeapon_Mossberg, "ServerPlayImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A80CC0, sizeof(BRWeapon_Mossberg_eventServerPlayImpactEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRWeapon_Mossberg_NoRegister()
	{
		return ABRWeapon_Mossberg::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRWeapon_Mossberg()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABRWeapon,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRWeapon_Mossberg_MulticastPlayFireEffect, "MulticastPlayFireEffect" }, // 3182591579
				{ &Z_Construct_UFunction_ABRWeapon_Mossberg_MulticastPlayImpactEffect, "MulticastPlayImpactEffect" }, // 4444030
				{ &Z_Construct_UFunction_ABRWeapon_Mossberg_OnRep_HitScanTraces_Mossberg, "OnRep_HitScanTraces_Mossberg" }, // 2140944571
				{ &Z_Construct_UFunction_ABRWeapon_Mossberg_ServerPlayFireEffect, "ServerPlayFireEffect" }, // 1682580568
				{ &Z_Construct_UFunction_ABRWeapon_Mossberg_ServerPlayImpactEffect, "ServerPlayImpactEffect" }, // 1844980402
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapons/BRWeapon_Mossberg.h" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedShotDirection_MetaData[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedShotDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ModifiedShotDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ABRWeapon_Mossberg, ModifiedShotDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ModifiedShotDirection_MetaData, ARRAY_COUNT(NewProp_ModifiedShotDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitScanTraces_MetaData[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Mossberg.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitScanTraces = { UE4CodeGen_Private::EPropertyClass::Struct, "HitScanTraces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088100000020, 1, "OnRep_HitScanTraces_Mossberg", STRUCT_OFFSET(ABRWeapon_Mossberg, HitScanTraces), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(NewProp_HitScanTraces_MetaData, ARRAY_COUNT(NewProp_HitScanTraces_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifiedShotDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitScanTraces,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRWeapon_Mossberg>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRWeapon_Mossberg::StaticClass,
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
	IMPLEMENT_CLASS(ABRWeapon_Mossberg, 2106450538);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRWeapon_Mossberg(Z_Construct_UClass_ABRWeapon_Mossberg, &ABRWeapon_Mossberg::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRWeapon_Mossberg"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRWeapon_Mossberg);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
