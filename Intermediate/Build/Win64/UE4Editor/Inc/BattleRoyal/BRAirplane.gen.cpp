// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BRAirplane.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRAirplane() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRAirplane_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRAirplane();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABRAirplane::StaticRegisterNativesABRAirplane()
	{
	}
	UClass* Z_Construct_UClass_ABRAirplane_NoRegister()
	{
		return ABRAirplane::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRAirplane()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BRAirplane.h" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneSound_MetaData[] = {
				{ "Category", "Airplane" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneSound = { UE4CodeGen_Private::EPropertyClass::Object, "PlaneSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000090009, 1, nullptr, STRUCT_OFFSET(ABRAirplane, PlaneSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_PlaneSound_MetaData, ARRAY_COUNT(NewProp_PlaneSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P4Comp_MetaData[] = {
				{ "Category", "Airplane" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P4Comp = { UE4CodeGen_Private::EPropertyClass::Object, "P4Comp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABRAirplane, P4Comp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_P4Comp_MetaData, ARRAY_COUNT(NewProp_P4Comp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P3Comp_MetaData[] = {
				{ "Category", "Airplane" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P3Comp = { UE4CodeGen_Private::EPropertyClass::Object, "P3Comp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABRAirplane, P3Comp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_P3Comp_MetaData, ARRAY_COUNT(NewProp_P3Comp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2Comp_MetaData[] = {
				{ "Category", "Airplane" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P2Comp = { UE4CodeGen_Private::EPropertyClass::Object, "P2Comp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABRAirplane, P2Comp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_P2Comp_MetaData, ARRAY_COUNT(NewProp_P2Comp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1Comp_MetaData[] = {
				{ "Category", "Airplane" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P1Comp = { UE4CodeGen_Private::EPropertyClass::Object, "P1Comp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABRAirplane, P1Comp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_P1Comp_MetaData, ARRAY_COUNT(NewProp_P1Comp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyComp_MetaData[] = {
				{ "Category", "Airplane" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRAirplane.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyComp = { UE4CodeGen_Private::EPropertyClass::Object, "BodyComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABRAirplane, BodyComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BodyComp_MetaData, ARRAY_COUNT(NewProp_BodyComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_P4Comp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_P3Comp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_P2Comp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_P1Comp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRAirplane>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRAirplane::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ABRAirplane, 679592779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRAirplane(Z_Construct_UClass_ABRAirplane, &ABRAirplane::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRAirplane"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRAirplane);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
