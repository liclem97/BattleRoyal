// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/BRProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRProjectile() {}
// Cross Module References
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRProjectile_NoRegister();
	BATTLEROYAL_API UClass* Z_Construct_UClass_ABRProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleRoyal();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRProjectile_MulticastExplode();
	BATTLEROYAL_API UFunction* Z_Construct_UFunction_ABRProjectile_ServerExplode();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABRProjectile_MulticastExplode = FName(TEXT("MulticastExplode"));
	void ABRProjectile::MulticastExplode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRProjectile_MulticastExplode),NULL);
	}
	static FName NAME_ABRProjectile_ServerExplode = FName(TEXT("ServerExplode"));
	void ABRProjectile::ServerExplode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABRProjectile_ServerExplode),NULL);
	}
	void ABRProjectile::StaticRegisterNativesABRProjectile()
	{
		UClass* Class = ABRProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastExplode", &ABRProjectile::execMulticastExplode },
			{ "ServerExplode", &ABRProjectile::execServerExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABRProjectile_MulticastExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRProjectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRProjectile, "MulticastExplode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80084CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABRProjectile_ServerExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapons/BRProjectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABRProjectile, "ServerExplode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABRProjectile_NoRegister()
	{
		return ABRProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyal,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABRProjectile_MulticastExplode, "MulticastExplode" }, // 273601273
				{ &Z_Construct_UFunction_ABRProjectile_ServerExplode, "ServerExplode" }, // 707313578
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapons/BRProjectile.h" },
				{ "ModuleRelativePath", "Public/Weapons/BRProjectile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeParticle_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/Weapons/BRProjectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeParticle = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodeParticle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABRProjectile, ExplodeParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_ExplodeParticle_MetaData, ARRAY_COUNT(NewProp_ExplodeParticle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
				{ "Category", "Movement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Weapons/BRProjectile.h" },
				{ "ToolTip", "Projectile movement component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
				{ "Category", "Projectile" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Weapons/BRProjectile.h" },
				{ "ToolTip", "Sphere collision component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABRProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionComp_MetaData, ARRAY_COUNT(NewProp_CollisionComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplodeParticle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRProjectile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRProjectile::StaticClass,
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
	IMPLEMENT_CLASS(ABRProjectile, 3235843829);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRProjectile(Z_Construct_UClass_ABRProjectile, &ABRProjectile::StaticClass, TEXT("/Script/BattleRoyal"), TEXT("ABRProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
