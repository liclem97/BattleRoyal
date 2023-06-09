// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameModes/BRGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRGameStateBase() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRGameStateBase_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABRGameStateBase::StaticRegisterNativesABRGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_ABRGameStateBase_NoRegister()
	{
		return ABRGameStateBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameStateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameModes/BRGameStateBase.h" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhaseDataTable_MetaData[] = {
				{ "Category", "Data Table" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhaseDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "PhaseDataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABRGameStateBase, PhaseDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_PhaseDataTable_MetaData, ARRAY_COUNT(NewProp_PhaseDataTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleTargetCircle_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
			};
#endif
			auto NewProp_bVisibleTargetCircle_SetBit = [](void* Obj){ ((ABRGameStateBase*)Obj)->bVisibleTargetCircle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleTargetCircle = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisibleTargetCircle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRGameStateBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisibleTargetCircle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisibleTargetCircle_MetaData, ARRAY_COUNT(NewProp_bVisibleTargetCircle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleCurrentCircle_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xec\x9b\x90\xec\x9d\x84 \xeb\xb3\xb4\xec\x97\xac\xec\xa4\x84\xec\xa7\x80 \xea\xb2\xb0\xec\xa0\x95\xed\x95\xa8" },
			};
#endif
			auto NewProp_bVisibleCurrentCircle_SetBit = [](void* Obj){ ((ABRGameStateBase*)Obj)->bVisibleCurrentCircle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleCurrentCircle = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisibleCurrentCircle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRGameStateBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisibleCurrentCircle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisibleCurrentCircle_MetaData, ARRAY_COUNT(NewProp_bVisibleCurrentCircle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCircleRadius_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xec\xa4\x84\xec\x96\xb4\xeb\x93\x9c\xeb\x8a\x94 \xec\x9e\x90\xea\xb8\xb0\xec\x9e\xa5\xec\x9d\x98 \xeb\xb0\x98\xec\xa7\x80\xeb\xa6\x84" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCircleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TargetCircleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(ABRGameStateBase, TargetCircleRadius), METADATA_PARAMS(NewProp_TargetCircleRadius_MetaData, ARRAY_COUNT(NewProp_TargetCircleRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCircleRadius_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\x9e\x90\xea\xb8\xb0\xec\x9e\xa5\xec\x9d\x98 \xeb\xb0\x98\xec\xa7\x80\xeb\xa6\x84" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentCircleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentCircleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(ABRGameStateBase, CurrentCircleRadius), METADATA_PARAMS(NewProp_CurrentCircleRadius_MetaData, ARRAY_COUNT(NewProp_CurrentCircleRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCirclePosition_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xec\xa4\x84\xec\x96\xb4\xeb\x93\x9c\xeb\x8a\x94 \xec\x9e\x90\xea\xb8\xb0\xec\x9e\xa5\xec\x9d\x98 \xec\xa4\x91\xec\xa0\x90" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetCirclePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetCirclePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(ABRGameStateBase, TargetCirclePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetCirclePosition_MetaData, ARRAY_COUNT(NewProp_TargetCirclePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCirclePosition_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\x9e\x90\xea\xb8\xb0\xec\x9e\xa5\xec\x9d\x98 \xec\xa4\x91\xec\xa0\x90" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentCirclePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentCirclePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(ABRGameStateBase, CurrentCirclePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CurrentCirclePosition_MetaData, ARRAY_COUNT(NewProp_CurrentCirclePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDamageAvailable_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xeb\x8c\x80\xeb\xaf\xb8\xec\xa7\x80\xea\xb0\x80 \xec\x9c\xa0\xed\x9a\xa8\xed\x95\x9c\xec\xa7\x80" },
			};
#endif
			auto NewProp_bDamageAvailable_SetBit = [](void* Obj){ ((ABRGameStateBase*)Obj)->bDamageAvailable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDamageAvailable = { UE4CodeGen_Private::EPropertyClass::Bool, "bDamageAvailable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRGameStateBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDamageAvailable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDamageAvailable_MetaData, ARRAY_COUNT(NewProp_bDamageAvailable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveCount_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameModes/BRGameStateBase.h" },
				{ "ToolTip", "\xec\x83\x9d\xec\xa1\xb4 \xec\x9d\xb8\xec\x9b\x90 \xec\x88\x98" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AliveCount = { UE4CodeGen_Private::EPropertyClass::Int, "AliveCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(ABRGameStateBase, AliveCount), METADATA_PARAMS(NewProp_AliveCount_MetaData, ARRAY_COUNT(NewProp_AliveCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhaseDataTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisibleTargetCircle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisibleCurrentCircle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCircleRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCircleRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCirclePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCirclePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDamageAvailable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AliveCount,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRGameStateBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRGameStateBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(ABRGameStateBase, 2972746973);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRGameStateBase(Z_Construct_UClass_ABRGameStateBase, &ABRGameStateBase::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
