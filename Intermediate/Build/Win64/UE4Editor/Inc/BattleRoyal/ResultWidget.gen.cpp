// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/ResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResultWidget() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_UResultWidget_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UResultWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_UResultWidget_OnGoToLobbyClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UResultWidget::StaticRegisterNativesUResultWidget()
	{
		UClass* Class = UResultWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGoToLobbyClicked", &UResultWidget::execOnGoToLobbyClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UResultWidget_OnGoToLobbyClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UI/ResultWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UResultWidget, "OnGoToLobbyClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UResultWidget_NoRegister()
	{
		return UResultWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UResultWidget_OnGoToLobbyClicked, "OnGoToLobbyClicked" }, // 1277539346
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/ResultWidget.h" },
				{ "ModuleRelativePath", "Public/UI/ResultWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoToLobby_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "ResultWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/ResultWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoToLobby = { UE4CodeGen_Private::EPropertyClass::Object, "GoToLobby", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UResultWidget, GoToLobby), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_GoToLobby_MetaData, ARRAY_COUNT(NewProp_GoToLobby_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "ResultWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/ResultWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rank = { UE4CodeGen_Private::EPropertyClass::Object, "Rank", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UResultWidget, Rank), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_Rank_MetaData, ARRAY_COUNT(NewProp_Rank_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultText_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "ResultWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/ResultWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultText = { UE4CodeGen_Private::EPropertyClass::Object, "ResultText", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UResultWidget, ResultText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_ResultText_MetaData, ARRAY_COUNT(NewProp_ResultText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoToLobby,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rank,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultText,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UResultWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UResultWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UResultWidget, 1617271635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResultWidget(Z_Construct_UClass_UResultWidget, &UResultWidget::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("UResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
