// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BRFlyingViewer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRFlyingViewer() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRFlyingViewer_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRFlyingViewer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRFlyingViewer_DestroyWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABRFlyingViewer_DestroyWidget = FName(TEXT("DestroyWidget"));
	void ABRFlyingViewer::DestroyWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRFlyingViewer_DestroyWidget),NULL);
	}
	void ABRFlyingViewer::StaticRegisterNativesABRFlyingViewer()
	{
		UClass* Class = ABRFlyingViewer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyWidget", &ABRFlyingViewer::execDestroyWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRFlyingViewer_DestroyWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRFlyingViewer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRFlyingViewer, "DestroyWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x81020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRFlyingViewer_NoRegister()
	{
		return ABRFlyingViewer::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRFlyingViewer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRFlyingViewer_DestroyWidget, "DestroyWidget" }, // 295320020
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BRFlyingViewer.h" },
				{ "ModuleRelativePath", "Public/BRFlyingViewer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/BRFlyingViewer.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "WidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABRFlyingViewer, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WidgetClass_MetaData, ARRAY_COUNT(NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRFlyingViewer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRFlyingViewer, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArmComp_MetaData, ARRAY_COUNT(NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRFlyingViewer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRFlyingViewer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComp_MetaData, ARRAY_COUNT(NewProp_CameraComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArmComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRFlyingViewer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRFlyingViewer::StaticClass,
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
	IMPLEMENT_CLASS(ABRFlyingViewer, 4236804649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRFlyingViewer(Z_Construct_UClass_ABRFlyingViewer, &ABRFlyingViewer::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRFlyingViewer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRFlyingViewer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
