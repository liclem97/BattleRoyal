// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameModes/BRElectricFieldPhaseTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRElectricFieldPhaseTable() {}
// Cross Module References
	BATTLEROYAL_API UScriptStruct* Z_Construct_UScriptStruct_FElectricFieldRow();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRElectricFieldPhaseTable_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRElectricFieldPhaseTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
// End Cross Module References
class UScriptStruct* FElectricFieldRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BATTLEROYAL_API uint32 Get_Z_Construct_UScriptStruct_FElectricFieldRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FElectricFieldRow, Z_Construct_UPackage__Script_BattleRoyal(), TEXT("ElectricFieldRow"), sizeof(FElectricFieldRow), Get_Z_Construct_UScriptStruct_FElectricFieldRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FElectricFieldRow(FElectricFieldRow::StaticStruct, TEXT("/Script/BattleRoyal"), TEXT("ElectricFieldRow"), false, nullptr, nullptr);
static struct FScriptStruct_BattleRoyal_StaticRegisterNativesFElectricFieldRow
{
	FScriptStruct_BattleRoyal_StaticRegisterNativesFElectricFieldRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ElectricFieldRow")),new UScriptStruct::TCppStructOps<FElectricFieldRow>);
	}
} ScriptStruct_BattleRoyal_StaticRegisterNativesFElectricFieldRow;
	UScriptStruct* Z_Construct_UScriptStruct_FElectricFieldRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FElectricFieldRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BattleRoyal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ElectricFieldRow"), sizeof(FElectricFieldRow), Get_Z_Construct_UScriptStruct_FElectricFieldRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElectricFieldRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomTargetDistanceMax_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomTargetDistanceMax = { UE4CodeGen_Private::EPropertyClass::Float, "RandomTargetDistanceMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, RandomTargetDistanceMax), METADATA_PARAMS(NewProp_RandomTargetDistanceMax_MetaData, ARRAY_COUNT(NewProp_RandomTargetDistanceMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomTargetDistanceMin_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomTargetDistanceMin = { UE4CodeGen_Private::EPropertyClass::Float, "RandomTargetDistanceMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, RandomTargetDistanceMin), METADATA_PARAMS(NewProp_RandomTargetDistanceMin_MetaData, ARRAY_COUNT(NewProp_RandomTargetDistanceMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRandomTarget_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			auto NewProp_UseRandomTarget_SetBit = [](void* Obj){ ((FElectricFieldRow*)Obj)->UseRandomTarget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRandomTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "UseRandomTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FElectricFieldRow), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseRandomTarget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseRandomTarget_MetaData, ARRAY_COUNT(NewProp_UseRandomTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTime_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShrinkTime = { UE4CodeGen_Private::EPropertyClass::Int, "ShrinkTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, ShrinkTime), METADATA_PARAMS(NewProp_ShrinkTime_MetaData, ARRAY_COUNT(NewProp_ShrinkTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowTime_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShowTime = { UE4CodeGen_Private::EPropertyClass::Int, "ShowTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, ShowTime), METADATA_PARAMS(NewProp_ShowTime_MetaData, ARRAY_COUNT(NewProp_ShowTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaitTime = { UE4CodeGen_Private::EPropertyClass::Int, "WaitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, WaitTime), METADATA_PARAMS(NewProp_WaitTime_MetaData, ARRAY_COUNT(NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCircleRadius_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCircleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TargetCircleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, TargetCircleRadius), METADATA_PARAMS(NewProp_TargetCircleRadius_MetaData, ARRAY_COUNT(NewProp_TargetCircleRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCirclePosition_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetCirclePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetCirclePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, TargetCirclePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetCirclePosition_MetaData, ARRAY_COUNT(NewProp_TargetCirclePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCircleRadius_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentCircleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentCircleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, CurrentCircleRadius), METADATA_PARAMS(NewProp_CurrentCircleRadius_MetaData, ARRAY_COUNT(NewProp_CurrentCircleRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCirclePosition_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentCirclePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentCirclePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, CurrentCirclePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CurrentCirclePosition_MetaData, ARRAY_COUNT(NewProp_CurrentCirclePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
				{ "Category", "ElectricFieldPhase" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Phase = { UE4CodeGen_Private::EPropertyClass::Int, "Phase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FElectricFieldRow, Phase), METADATA_PARAMS(NewProp_Phase_MetaData, ARRAY_COUNT(NewProp_Phase_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomTargetDistanceMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomTargetDistanceMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseRandomTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShrinkTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaitTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCircleRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCirclePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCircleRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCirclePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Phase,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ElectricFieldRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FElectricFieldRow),
				alignof(FElectricFieldRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FElectricFieldRow_CRC() { return 3506273277U; }
	void UBRElectricFieldPhaseTable::StaticRegisterNativesUBRElectricFieldPhaseTable()
	{
	}
	UClass* Z_Construct_UClass_UBRElectricFieldPhaseTable_NoRegister()
	{
		return UBRElectricFieldPhaseTable::StaticClass();
	}
	UClass* Z_Construct_UClass_UBRElectricFieldPhaseTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataTable,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameModes/BRElectricFieldPhaseTable.h" },
				{ "ModuleRelativePath", "Public/GameModes/BRElectricFieldPhaseTable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBRElectricFieldPhaseTable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBRElectricFieldPhaseTable::StaticClass,
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
	IMPLEMENT_CLASS(UBRElectricFieldPhaseTable, 849151288);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBRElectricFieldPhaseTable(Z_Construct_UClass_UBRElectricFieldPhaseTable, &UBRElectricFieldPhaseTable::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("UBRElectricFieldPhaseTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBRElectricFieldPhaseTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
