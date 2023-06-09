// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/BRProjectileWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRProjectileWeapon() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRProjectileWeapon_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRProjectileWeapon();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRProjectileWeapon_MulticastFire();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRProjectileWeapon_MulticastMuzzleFX();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRProjectileWeapon_ServerFire();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRProjectileWeapon_ServerMuzzleFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_ABRProjectileWeapon_MulticastFire = FName(TEXT("MulticastFire"));
	void ABRProjectileWeapon::MulticastFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRProjectileWeapon_MulticastFire),NULL);
	}
	static FName NAME_ABRProjectileWeapon_MulticastMuzzleFX = FName(TEXT("MulticastMuzzleFX"));
	void ABRProjectileWeapon::MulticastMuzzleFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRProjectileWeapon_MulticastMuzzleFX),NULL);
	}
	static FName NAME_ABRProjectileWeapon_ServerFire = FName(TEXT("ServerFire"));
	void ABRProjectileWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRProjectileWeapon_ServerFire),NULL);
	}
	static FName NAME_ABRProjectileWeapon_ServerMuzzleFX = FName(TEXT("ServerMuzzleFX"));
	void ABRProjectileWeapon::ServerMuzzleFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRProjectileWeapon_ServerMuzzleFX),NULL);
	}
	void ABRProjectileWeapon::StaticRegisterNativesABRProjectileWeapon()
	{
		UClass* Class = ABRProjectileWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastFire", &ABRProjectileWeapon::execMulticastFire },
			{ "MulticastMuzzleFX", &ABRProjectileWeapon::execMulticastMuzzleFX },
			{ "ServerFire", &ABRProjectileWeapon::execServerFire },
			{ "ServerMuzzleFX", &ABRProjectileWeapon::execServerMuzzleFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRProjectileWeapon_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRProjectileWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRProjectileWeapon, "MulticastFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80084CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRProjectileWeapon_MulticastMuzzleFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRProjectileWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRProjectileWeapon, "MulticastMuzzleFX", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80084CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRProjectileWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRProjectileWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRProjectileWeapon, "ServerFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRProjectileWeapon_ServerMuzzleFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRProjectileWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRProjectileWeapon, "ServerMuzzleFX", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRProjectileWeapon_NoRegister()
	{
		return ABRProjectileWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRProjectileWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABRWeapon,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRProjectileWeapon_MulticastFire, "MulticastFire" }, // 2773864141
				{ &Z_Construct_UFunction_ABRProjectileWeapon_MulticastMuzzleFX, "MulticastMuzzleFX" }, // 3953137210
				{ &Z_Construct_UFunction_ABRProjectileWeapon_ServerFire, "ServerFire" }, // 675510913
				{ &Z_Construct_UFunction_ABRProjectileWeapon_ServerMuzzleFX, "ServerMuzzleFX" }, // 32863027
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapons/BRProjectileWeapon.h" },
				{ "ModuleRelativePath", "Public/Weapons/BRProjectileWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "ProjectileWeapon" },
				{ "ModuleRelativePath", "Public/Weapons/BRProjectileWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRProjectileWeapon, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRProjectileWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRProjectileWeapon::StaticClass,
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
	IMPLEMENT_CLASS(ABRProjectileWeapon, 1384791199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRProjectileWeapon(Z_Construct_UClass_ABRProjectileWeapon, &ABRProjectileWeapon::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRProjectileWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRProjectileWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
