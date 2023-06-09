// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/BRWeapon_Rifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRWeapon_Rifle() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_Rifle_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_Rifle();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
// End Cross Module References
	void ABRWeapon_Rifle::StaticRegisterNativesABRWeapon_Rifle()
	{
	}
	UClass* Z_Construct_UClass_ABRWeapon_Rifle_NoRegister()
	{
		return ABRWeapon_Rifle::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRWeapon_Rifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABRWeapon,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapons/BRWeapon_Rifle.h" },
				{ "ModuleRelativePath", "Public/Weapons/BRWeapon_Rifle.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRWeapon_Rifle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRWeapon_Rifle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABRWeapon_Rifle, 3747007934);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRWeapon_Rifle(Z_Construct_UClass_ABRWeapon_Rifle, &ABRWeapon_Rifle::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRWeapon_Rifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRWeapon_Rifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
