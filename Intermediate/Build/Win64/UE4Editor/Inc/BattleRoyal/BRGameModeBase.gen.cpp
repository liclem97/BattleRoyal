// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameModes/BRGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRGameModeBase() {}
// Cross Module References
	BATTLEROYAL_API UEnum* Z_Construct_UEnum_BattleRoyal_EPlayingState();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRGameModeBase_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	static UEnum* EPlayingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BattleRoyal_EPlayingState, Z_Construct_UPackage__Script_BattleRoyal(), TEXT("EPlayingState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayingState(EPlayingState_StaticEnum, TEXT("/Script/BattleRoyal"), TEXT("EPlayingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BattleRoyal_EPlayingState_CRC() { return 3706602953U; }
	UEnum* Z_Construct_UEnum_BattleRoyal_EPlayingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BattleRoyal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayingState"), 0, Get_Z_Construct_UEnum_BattleRoyal_EPlayingState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayingState::Waiting", (int64)EPlayingState::Waiting },
				{ "EPlayingState::Battle", (int64)EPlayingState::Battle },
				{ "EPlayingState::Ceremony", (int64)EPlayingState::Ceremony },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Battle.DisplayName", "Battle" },
				{ "Ceremony.DisplayName", "Ceremony" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameModeBase.h" },
				{ "Waiting.DisplayName", "Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BattleRoyal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPlayingState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPlayingState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABRGameModeBase::StaticRegisterNativesABRGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABRGameModeBase_NoRegister()
	{
		return ABRGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameModes/BRGameModeBase.h" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainTimeOfCeremony_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainTimeOfCeremony = { UE4CodeGen_Private::EPropertyClass::Int, "RemainTimeOfCeremony", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ABRGameModeBase, RemainTimeOfCeremony), METADATA_PARAMS(NewProp_RemainTimeOfCeremony_MetaData, ARRAY_COUNT(NewProp_RemainTimeOfCeremony_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingTime_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaitingTime = { UE4CodeGen_Private::EPropertyClass::Int, "WaitingTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ABRGameModeBase, WaitingTime), METADATA_PARAMS(NewProp_WaitingTime_MetaData, ARRAY_COUNT(NewProp_WaitingTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumPlayerCount_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/GameModes/BRGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumPlayerCount = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumPlayerCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ABRGameModeBase, MinimumPlayerCount), METADATA_PARAMS(NewProp_MinimumPlayerCount_MetaData, ARRAY_COUNT(NewProp_MinimumPlayerCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainTimeOfCeremony,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaitingTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumPlayerCount,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ABRGameModeBase, 4062671520);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRGameModeBase(Z_Construct_UClass_ABRGameModeBase, &ABRGameModeBase::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
