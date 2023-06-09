// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameModes/BRItemDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRItemDataTable() {}
// Cross Module References
	BATTLEROYAL_API UEnum* Z_Construct_UEnum_BattleRoyal_EItemEquipType();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UScriptStruct* Z_Construct_UScriptStruct_FITemTableRow();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRItemDataTable_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_UBRItemDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
// End Cross Module References
	static UEnum* EItemEquipType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BattleRoyal_EItemEquipType, Z_Construct_UPackage__Script_BattleRoyal(), TEXT("EItemEquipType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemEquipType(EItemEquipType_StaticEnum, TEXT("/Script/BattleRoyal"), TEXT("EItemEquipType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BattleRoyal_EItemEquipType_CRC() { return 1306097480U; }
	UEnum* Z_Construct_UEnum_BattleRoyal_EItemEquipType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BattleRoyal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemEquipType"), 0, Get_Z_Construct_UEnum_BattleRoyal_EItemEquipType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemEquipType::Equip_Upper", (int64)EItemEquipType::Equip_Upper },
				{ "EItemEquipType::Equip_Lower", (int64)EItemEquipType::Equip_Lower },
				{ "EItemEquipType::Equip_Helmet", (int64)EItemEquipType::Equip_Helmet },
				{ "EItemEquipType::Equip_Shoes", (int64)EItemEquipType::Equip_Shoes },
				{ "EItemEquipType::Equip_Weapon", (int64)EItemEquipType::Equip_Weapon },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equip_Helmet.DisplayName", "Equip_Helmet" },
				{ "Equip_Lower.DisplayName", "Equip_Lower" },
				{ "Equip_Shoes.DisplayName", "Equip_Shoes" },
				{ "Equip_Upper.DisplayName", "Equip_Upper" },
				{ "Equip_Weapon.DisplayName", "Equip_Weapon" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BattleRoyal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EItemEquipType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EItemEquipType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FITemTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BATTLEROYAL_API uint32 Get_Z_Construct_UScriptStruct_FITemTableRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FITemTableRow, Z_Construct_UPackage__Script_BattleRoyal(), TEXT("ITemTableRow"), sizeof(FITemTableRow), Get_Z_Construct_UScriptStruct_FITemTableRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FITemTableRow(FITemTableRow::StaticStruct, TEXT("/Script/BattleRoyal"), TEXT("ITemTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_BattleRoyal_StaticRegisterNativesFITemTableRow
{
	FScriptStruct_BattleRoyal_StaticRegisterNativesFITemTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ITemTableRow")),new UScriptStruct::TCppStructOps<FITemTableRow>);
	}
} ScriptStruct_BattleRoyal_StaticRegisterNativesFITemTableRow;
	UScriptStruct* Z_Construct_UScriptStruct_FITemTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FITemTableRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BattleRoyal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ITemTableRow"), sizeof(FITemTableRow), Get_Z_Construct_UScriptStruct_FITemTableRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FITemTableRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_Weapon_MetaData[] = {
				{ "Category", "Item Data" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_Weapon = { UE4CodeGen_Private::EPropertyClass::Class, "BP_Weapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(FITemTableRow, BP_Weapon), Z_Construct_UClass_ABRWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BP_Weapon_MetaData, ARRAY_COUNT(NewProp_BP_Weapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStaticMesh_MetaData[] = {
				{ "Category", "Item Data" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemStaticMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ItemStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(FITemTableRow, ItemStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_ItemStaticMesh_MetaData, ARRAY_COUNT(NewProp_ItemStaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSkeletalMesh_MetaData[] = {
				{ "Category", "Item Data" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ItemSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(FITemTableRow, ItemSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_ItemSkeletalMesh_MetaData, ARRAY_COUNT(NewProp_ItemSkeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEquipType_MetaData[] = {
				{ "Category", "Item Data" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemEquipType = { UE4CodeGen_Private::EPropertyClass::Enum, "ItemEquipType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FITemTableRow, ItemEquipType), Z_Construct_UEnum_BattleRoyal_EItemEquipType, METADATA_PARAMS(NewProp_ItemEquipType_MetaData, ARRAY_COUNT(NewProp_ItemEquipType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemEquipType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
				{ "Category", "Item Data" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName = { UE4CodeGen_Private::EPropertyClass::Str, "ItemName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FITemTableRow, ItemName), METADATA_PARAMS(NewProp_ItemName_MetaData, ARRAY_COUNT(NewProp_ItemName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClassID_MetaData[] = {
				{ "Category", "Item Data" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemClassID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemClassID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FITemTableRow, ItemClassID), METADATA_PARAMS(NewProp_ItemClassID_MetaData, ARRAY_COUNT(NewProp_ItemClassID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BP_Weapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemStaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemSkeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemEquipType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemEquipType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemClassID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ITemTableRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FITemTableRow),
				alignof(FITemTableRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FITemTableRow_CRC() { return 2945619870U; }
	void UBRItemDataTable::StaticRegisterNativesUBRItemDataTable()
	{
	}
	UClass* Z_Construct_UClass_UBRItemDataTable_NoRegister()
	{
		return UBRItemDataTable::StaticClass();
	}
	UClass* Z_Construct_UClass_UBRItemDataTable()
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
				{ "IncludePath", "GameModes/BRItemDataTable.h" },
				{ "ModuleRelativePath", "Public/GameModes/BRItemDataTable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBRItemDataTable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBRItemDataTable::StaticClass,
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
	IMPLEMENT_CLASS(UBRItemDataTable, 1983954490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBRItemDataTable(Z_Construct_UClass_UBRItemDataTable, &UBRItemDataTable::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("UBRItemDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBRItemDataTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
