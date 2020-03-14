// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KBEnginePlugins/Engine/KBETicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBETicker() {}
// Cross Module References
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBETicker_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBETicker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KBEnginePlugins();
// End Cross Module References
	void UKBETicker::StaticRegisterNativesUKBETicker()
	{
	}
	UClass* Z_Construct_UClass_UKBETicker_NoRegister()
	{
		return UKBETicker::StaticClass();
	}
	struct Z_Construct_UClass_UKBETicker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBETicker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBETicker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Engine/KBETicker.h" },
		{ "ModuleRelativePath", "Engine/KBETicker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBETicker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBETicker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBETicker_Statics::ClassParams = {
		&UKBETicker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBETicker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBETicker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBETicker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBETicker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBETicker, 607875390);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBETicker>()
	{
		return UKBETicker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBETicker(Z_Construct_UClass_UKBETicker, &UKBETicker::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBETicker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBETicker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
