// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrabTheFlag/BonusGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusGenerator() {}
// Cross Module References
	GRABTHEFLAG_API UClass* Z_Construct_UClass_UBonusGenerator_NoRegister();
	GRABTHEFLAG_API UClass* Z_Construct_UClass_UBonusGenerator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GrabTheFlag();
// End Cross Module References
	void UBonusGenerator::StaticRegisterNativesUBonusGenerator()
	{
	}
	UClass* Z_Construct_UClass_UBonusGenerator_NoRegister()
	{
		return UBonusGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UBonusGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonusGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GrabTheFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BonusGenerator.h" },
		{ "ModuleRelativePath", "BonusGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonusGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonusGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBonusGenerator_Statics::ClassParams = {
		&UBonusGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonusGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonusGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonusGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBonusGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBonusGenerator, 1314914563);
	template<> GRABTHEFLAG_API UClass* StaticClass<UBonusGenerator>()
	{
		return UBonusGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBonusGenerator(Z_Construct_UClass_UBonusGenerator, &UBonusGenerator::StaticClass, TEXT("/Script/GrabTheFlag"), TEXT("UBonusGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonusGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
