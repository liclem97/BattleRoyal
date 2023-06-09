// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/ClientMainWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientMainWidget() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_UClientMainWidget_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UClientMainWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_UClientMainWidget_AliveCountFunc();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_UClientMainWidget_PlayBloodScreen();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_UClientMainWidget_SetPlayerHPRatio();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UClientMainWidget_PlayBloodScreen = FName(TEXT("PlayBloodScreen"));
	void UClientMainWidget::PlayBloodScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UClientMainWidget_PlayBloodScreen),NULL);
	}
	void UClientMainWidget::StaticRegisterNativesUClientMainWidget()
	{
		UClass* Class = UClientMainWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AliveCountFunc", &UClientMainWidget::execAliveCountFunc },
			{ "SetPlayerHPRatio", &UClientMainWidget::execSetPlayerHPRatio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UClientMainWidget_AliveCountFunc()
	{
		struct ClientMainWidget_eventAliveCountFunc_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ClientMainWidget_eventAliveCountFunc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientMainWidget, "AliveCountFunc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ClientMainWidget_eventAliveCountFunc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClientMainWidget_PlayBloodScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientMainWidget, "PlayBloodScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClientMainWidget_SetPlayerHPRatio()
	{
		struct ClientMainWidget_eventSetPlayerHPRatio_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ClientMainWidget_eventSetPlayerHPRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientMainWidget, "SetPlayerHPRatio", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ClientMainWidget_eventSetPlayerHPRatio_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClientMainWidget_NoRegister()
	{
		return UClientMainWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UClientMainWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UClientMainWidget_AliveCountFunc, "AliveCountFunc" }, // 100761662
				{ &Z_Construct_UFunction_UClientMainWidget_PlayBloodScreen, "PlayBloodScreen" }, // 1860964353
				{ &Z_Construct_UFunction_UClientMainWidget_SetPlayerHPRatio, "SetPlayerHPRatio" }, // 939823467
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/ClientMainWidget.h" },
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "ClientMainWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPBar = { UE4CodeGen_Private::EPropertyClass::Object, "HPBar", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UClientMainWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(NewProp_HPBar_MetaData, ARRAY_COUNT(NewProp_HPBar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveCount_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "ClientMainWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AliveCount = { UE4CodeGen_Private::EPropertyClass::Object, "AliveCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UClientMainWidget, AliveCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_AliveCount_MetaData, ARRAY_COUNT(NewProp_AliveCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMsg_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "ClientMainWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UI/ClientMainWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerMsg = { UE4CodeGen_Private::EPropertyClass::Object, "ServerMsg", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UClientMainWidget, ServerMsg), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_ServerMsg_MetaData, ARRAY_COUNT(NewProp_ServerMsg_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HPBar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AliveCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerMsg,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClientMainWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClientMainWidget::StaticClass,
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
	IMPLEMENT_CLASS(UClientMainWidget, 827976681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientMainWidget(Z_Construct_UClass_UClientMainWidget, &UClientMainWidget::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("UClientMainWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientMainWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
