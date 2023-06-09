// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameModes/BRPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRPlayerController() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRPlayerController_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_BackToLobby();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_OnRep_NotificationFromServer();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_PlayScreenAnim();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_RideInC130();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRAirplane_NoRegister();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_ShowBloodScreenEffect();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_ShowDeathResult();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_ShowWinnerResult();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPlayerController_WantToDive();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRWorldMap_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UResultWidget_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UClientMainWidget_NoRegister();
// End Cross Module References
	static FName NAME_ABRPlayerController_BackToLobby = FName(TEXT("BackToLobby"));
	void ABRPlayerController::BackToLobby()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_BackToLobby),NULL);
	}
	static FName NAME_ABRPlayerController_PlayScreenAnim = FName(TEXT("PlayScreenAnim"));
	void ABRPlayerController::PlayScreenAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_PlayScreenAnim),NULL);
	}
	static FName NAME_ABRPlayerController_RideInC130 = FName(TEXT("RideInC130"));
	void ABRPlayerController::RideInC130(ABRAirplane* C130)
	{
		BRPlayerController_eventRideInC130_Parms Parms;
		Parms.C130=C130;
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_RideInC130),&Parms);
	}
	static FName NAME_ABRPlayerController_ShowBloodScreenEffect = FName(TEXT("ShowBloodScreenEffect"));
	void ABRPlayerController::ShowBloodScreenEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_ShowBloodScreenEffect),NULL);
	}
	static FName NAME_ABRPlayerController_ShowDeathResult = FName(TEXT("ShowDeathResult"));
	void ABRPlayerController::ShowDeathResult(int32 NewRank)
	{
		BRPlayerController_eventShowDeathResult_Parms Parms;
		Parms.NewRank=NewRank;
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_ShowDeathResult),&Parms);
	}
	static FName NAME_ABRPlayerController_ShowWinnerResult = FName(TEXT("ShowWinnerResult"));
	void ABRPlayerController::ShowWinnerResult()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_ShowWinnerResult),NULL);
	}
	static FName NAME_ABRPlayerController_WantToDive = FName(TEXT("WantToDive"));
	void ABRPlayerController::WantToDive()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRPlayerController_WantToDive),NULL);
	}
	void ABRPlayerController::StaticRegisterNativesABRPlayerController()
	{
		UClass* Class = ABRPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackToLobby", &ABRPlayerController::execBackToLobby },
			{ "OnRep_NotificationFromServer", &ABRPlayerController::execOnRep_NotificationFromServer },
			{ "RideInC130", &ABRPlayerController::execRideInC130 },
			{ "ShowBloodScreenEffect", &ABRPlayerController::execShowBloodScreenEffect },
			{ "ShowDeathResult", &ABRPlayerController::execShowDeathResult },
			{ "ShowWinnerResult", &ABRPlayerController::execShowWinnerResult },
			{ "WantToDive", &ABRPlayerController::execWantToDive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_BackToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "BackToLobby", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x81020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_OnRep_NotificationFromServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "OnRep_NotificationFromServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_PlayScreenAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "PlayScreenAnim", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_RideInC130()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_C130 = { UE4CodeGen_Private::EPropertyClass::Object, "C130", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRPlayerController_eventRideInC130_Parms, C130), Z_Construct_UClass_ABRAirplane_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_C130,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "RideInC130", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(BRPlayerController_eventRideInC130_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_ShowBloodScreenEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "ShowBloodScreenEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x81020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_ShowDeathResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewRank = { UE4CodeGen_Private::EPropertyClass::Int, "NewRank", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BRPlayerController_eventShowDeathResult_Parms, NewRank), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRank,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "ShowDeathResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x81020CC0, sizeof(BRPlayerController_eventShowDeathResult_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_ShowWinnerResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "ShowWinnerResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x81020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRPlayerController_WantToDive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPlayerController, "WantToDive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRPlayerController_NoRegister()
	{
		return ABRPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRPlayerController_BackToLobby, "BackToLobby" }, // 39769895
				{ &Z_Construct_UFunction_ABRPlayerController_OnRep_NotificationFromServer, "OnRep_NotificationFromServer" }, // 2591753121
				{ &Z_Construct_UFunction_ABRPlayerController_PlayScreenAnim, "PlayScreenAnim" }, // 1313073497
				{ &Z_Construct_UFunction_ABRPlayerController_RideInC130, "RideInC130" }, // 3308055173
				{ &Z_Construct_UFunction_ABRPlayerController_ShowBloodScreenEffect, "ShowBloodScreenEffect" }, // 2246986656
				{ &Z_Construct_UFunction_ABRPlayerController_ShowDeathResult, "ShowDeathResult" }, // 3759853485
				{ &Z_Construct_UFunction_ABRPlayerController_ShowWinnerResult, "ShowWinnerResult" }, // 3867651468
				{ &Z_Construct_UFunction_ABRPlayerController_WantToDive, "WantToDive" }, // 1168785059
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameModes/BRPlayerController.h" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationFromServer_MetaData[] = {
				{ "Category", "BRPlayerController" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_NotificationFromServer = { UE4CodeGen_Private::EPropertyClass::Text, "NotificationFromServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_NotificationFromServer", STRUCT_OFFSET(ABRPlayerController, NotificationFromServer), METADATA_PARAMS(NewProp_NotificationFromServer_MetaData, ARRAY_COUNT(NewProp_NotificationFromServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldMapClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WorldMapClass = { UE4CodeGen_Private::EPropertyClass::Class, "WorldMapClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, WorldMapClass), Z_Construct_UClass_UBRWorldMap_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WorldMapClass_MetaData, ARRAY_COUNT(NewProp_WorldMapClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_Player_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_Player = { UE4CodeGen_Private::EPropertyClass::Class, "BP_Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, BP_Player), Z_Construct_UClass_ABRCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BP_Player_MetaData, ARRAY_COUNT(NewProp_BP_Player_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyingViewer_MetaData[] = {
				{ "Category", "FlyingViewer" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FlyingViewer = { UE4CodeGen_Private::EPropertyClass::Class, "FlyingViewer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, FlyingViewer), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FlyingViewer_MetaData, ARRAY_COUNT(NewProp_FlyingViewer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultWidget = { UE4CodeGen_Private::EPropertyClass::Object, "ResultWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, ResultWidget), Z_Construct_UClass_UResultWidget_NoRegister, METADATA_PARAMS(NewProp_ResultWidget_MetaData, ARRAY_COUNT(NewProp_ResultWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResultWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResultWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, ResultWidgetClass), Z_Construct_UClass_UResultWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ResultWidgetClass_MetaData, ARRAY_COUNT(NewProp_ResultWidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[] = {
				{ "Category", "BRPlayerController" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainWidget = { UE4CodeGen_Private::EPropertyClass::Object, "MainWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, MainWidget), Z_Construct_UClass_UClientMainWidget_NoRegister, METADATA_PARAMS(NewProp_MainWidget_MetaData, ARRAY_COUNT(NewProp_MainWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/GameModes/BRPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "MainWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ABRPlayerController, MainWidgetClass), Z_Construct_UClass_UClientMainWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MainWidgetClass_MetaData, ARRAY_COUNT(NewProp_MainWidgetClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotificationFromServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldMapClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BP_Player,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlyingViewer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultWidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainWidgetClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABRPlayerController, 2097000511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRPlayerController(Z_Construct_UClass_ABRPlayerController, &ABRPlayerController::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
