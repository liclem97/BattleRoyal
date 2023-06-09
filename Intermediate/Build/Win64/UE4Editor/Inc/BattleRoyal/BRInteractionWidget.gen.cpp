// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/BRInteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRInteractionWidget() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRInteractionWidget_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRInteractionWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
// End Cross Module References
	void UBRInteractionWidget::StaticRegisterNativesUBRInteractionWidget()
	{
	}
	UClass* Z_Construct_UClass_UBRInteractionWidget_NoRegister()
	{
		return UBRInteractionWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UBRInteractionWidget()
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
				{ "IncludePath", "UI/BRInteractionWidget.h" },
				{ "ModuleRelativePath", "Public/UI/BRInteractionWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
				{ "Category", "BRInteractionWidget" },
				{ "ModuleRelativePath", "Public/UI/BRInteractionWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InteractionText = { UE4CodeGen_Private::EPropertyClass::Text, "InteractionText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBRInteractionWidget, InteractionText), METADATA_PARAMS(NewProp_InteractionText_MetaData, ARRAY_COUNT(NewProp_InteractionText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InteractionText,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBRInteractionWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBRInteractionWidget::StaticClass,
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
	IMPLEMENT_CLASS(UBRInteractionWidget, 3551089607);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBRInteractionWidget(Z_Construct_UClass_UBRInteractionWidget, &UBRInteractionWidget::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("UBRInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBRInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
