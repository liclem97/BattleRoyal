// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/BRWorldMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRWorldMap() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRWorldMap_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRWorldMap();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRCircle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UBRWorldMap::StaticRegisterNativesUBRWorldMap()
	{
	}
	UClass* Z_Construct_UClass_UBRWorldMap_NoRegister()
	{
		return UBRWorldMap::StaticClass();
	}
	UClass* Z_Construct_UClass_UBRWorldMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/BRWorldMap.h" },
				{ "ModuleRelativePath", "Public/UI/BRWorldMap.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCircle_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "BRWorldMap" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/BRWorldMap.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetCircle = { UE4CodeGen_Private::EPropertyClass::Object, "TargetCircle", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(UBRWorldMap, TargetCircle), Z_Construct_UClass_UBRCircle_NoRegister, METADATA_PARAMS(NewProp_TargetCircle_MetaData, ARRAY_COUNT(NewProp_TargetCircle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCircle_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "BRWorldMap" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/BRWorldMap.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCircle = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentCircle", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(UBRWorldMap, CurrentCircle), Z_Construct_UClass_UBRCircle_NoRegister, METADATA_PARAMS(NewProp_CurrentCircle_MetaData, ARRAY_COUNT(NewProp_CurrentCircle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIcon_MetaData[] = {
				{ "Category", "Image" },
				{ "ModuleRelativePath", "Public/UI/BRWorldMap.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultIcon = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultIcon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UBRWorldMap, DefaultIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DefaultIcon_MetaData, ARRAY_COUNT(NewProp_DefaultIcon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C130Icon_MetaData[] = {
				{ "Category", "Image" },
				{ "ModuleRelativePath", "Public/UI/BRWorldMap.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_C130Icon = { UE4CodeGen_Private::EPropertyClass::Object, "C130Icon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UBRWorldMap, C130Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_C130Icon_MetaData, ARRAY_COUNT(NewProp_C130Icon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyIcon_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "BRWorldMap" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/BRWorldMap.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyIcon = { UE4CodeGen_Private::EPropertyClass::Object, "MyIcon", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(UBRWorldMap, MyIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_MyIcon_MetaData, ARRAY_COUNT(NewProp_MyIcon_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCircle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCircle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultIcon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_C130Icon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyIcon,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBRWorldMap>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBRWorldMap::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UBRWorldMap, 2927962345);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBRWorldMap(Z_Construct_UClass_UBRWorldMap, &UBRWorldMap::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("UBRWorldMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBRWorldMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
