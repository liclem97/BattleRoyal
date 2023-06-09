// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BRPickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRPickupActor() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRPickupActor_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRPickupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRPickupActor_OnRep_ItemClassID_Pickup();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	BATTLEROYAL_API UEnum* Z_Construct_UEnum_BattleRoyal_EItemEquipType();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABRPickupActor::StaticRegisterNativesABRPickupActor()
	{
		UClass* Class = ABRPickupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ItemClassID_Pickup", &ABRPickupActor::execOnRep_ItemClassID_Pickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRPickupActor_OnRep_ItemClassID_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRPickupActor, "OnRep_ItemClassID_Pickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRPickupActor_NoRegister()
	{
		return ABRPickupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRPickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRPickupActor_OnRep_ItemClassID_Pickup, "OnRep_ItemClassID_Pickup" }, // 1174414437
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BRPickupActor.h" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
				{ "Category", "Pickup" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ABRPickupActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_SphereComp_MetaData, ARRAY_COUNT(NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomItems_MetaData[] = {
				{ "Category", "Random" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomItems = { UE4CodeGen_Private::EPropertyClass::Array, "RandomItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABRPickupActor, RandomItems), METADATA_PARAMS(NewProp_RandomItems_MetaData, ARRAY_COUNT(NewProp_RandomItems_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomItems_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "RandomItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandom_MetaData[] = {
				{ "Category", "Random" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			auto NewProp_bRandom_SetBit = [](void* Obj){ ((ABRPickupActor*)Obj)->bRandom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandom = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABRPickupActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandom_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRandom_MetaData, ARRAY_COUNT(NewProp_bRandom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEquipType_Pickup_MetaData[] = {
				{ "Category", "ItemTable" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemEquipType_Pickup = { UE4CodeGen_Private::EPropertyClass::Enum, "ItemEquipType_Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ABRPickupActor, ItemEquipType_Pickup), Z_Construct_UEnum_BattleRoyal_EItemEquipType, METADATA_PARAMS(NewProp_ItemEquipType_Pickup_MetaData, ARRAY_COUNT(NewProp_ItemEquipType_Pickup_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemEquipType_Pickup_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_Pickup_MetaData[] = {
				{ "Category", "ItemTable" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName_Pickup = { UE4CodeGen_Private::EPropertyClass::Str, "ItemName_Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ABRPickupActor, ItemName_Pickup), METADATA_PARAMS(NewProp_ItemName_Pickup_MetaData, ARRAY_COUNT(NewProp_ItemName_Pickup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClassID_Pickup_MetaData[] = {
				{ "Category", "ItemTable" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemClassID_Pickup = { UE4CodeGen_Private::EPropertyClass::Int, "ItemClassID_Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000021, 1, "OnRep_ItemClassID_Pickup", STRUCT_OFFSET(ABRPickupActor, ItemClassID_Pickup), METADATA_PARAMS(NewProp_ItemClassID_Pickup_MetaData, ARRAY_COUNT(NewProp_ItemClassID_Pickup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
				{ "Category", "Data Table" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "ItemDataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABRPickupActor, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_ItemDataTable_MetaData, ARRAY_COUNT(NewProp_ItemDataTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Pickup" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BRPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABRPickupActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomItems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomItems_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemEquipType_Pickup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemEquipType_Pickup_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemName_Pickup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemClassID_Pickup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemDataTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRPickupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRPickupActor::StaticClass,
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
	IMPLEMENT_CLASS(ABRPickupActor, 3626159330);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRPickupActor(Z_Construct_UClass_ABRPickupActor, &ABRPickupActor::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
