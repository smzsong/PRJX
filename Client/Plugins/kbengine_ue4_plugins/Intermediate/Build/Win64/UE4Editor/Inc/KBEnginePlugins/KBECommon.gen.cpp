// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KBEnginePlugins/Engine/KBECommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBECommon() {}
// Cross Module References
	KBENGINEPLUGINS_API UEnum* Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE();
	UPackage* Z_Construct_UPackage__Script_KBEnginePlugins();
	KBENGINEPLUGINS_API UEnum* Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE();
	KBENGINEPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FKServerErr();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_AKBECommon_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_AKBECommon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* NETWORK_ENCRYPT_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE, Z_Construct_UPackage__Script_KBEnginePlugins(), TEXT("NETWORK_ENCRYPT_TYPE"));
		}
		return Singleton;
	}
	template<> KBENGINEPLUGINS_API UEnum* StaticEnum<NETWORK_ENCRYPT_TYPE>()
	{
		return NETWORK_ENCRYPT_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_NETWORK_ENCRYPT_TYPE(NETWORK_ENCRYPT_TYPE_StaticEnum, TEXT("/Script/KBEnginePlugins"), TEXT("NETWORK_ENCRYPT_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE_Hash() { return 1517537677U; }
	UEnum* Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KBEnginePlugins();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("NETWORK_ENCRYPT_TYPE"), 0, Get_Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NETWORK_ENCRYPT_TYPE::ENCRYPT_TYPE_NONE", (int64)NETWORK_ENCRYPT_TYPE::ENCRYPT_TYPE_NONE },
				{ "NETWORK_ENCRYPT_TYPE::ENCRYPT_TYPE_BLOWFISH", (int64)NETWORK_ENCRYPT_TYPE::ENCRYPT_TYPE_BLOWFISH },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\xe5\x8a\xa0\xe5\xaf\x86\xe9\x80\x9a\xe8\xae\xaf\xe7\x9a\x84\xe7\xb1\xbb\xe5\x88\xab\n" },
				{ "ENCRYPT_TYPE_BLOWFISH.DisplayName", "Blowfish" },
				{ "ENCRYPT_TYPE_BLOWFISH.Name", "NETWORK_ENCRYPT_TYPE::ENCRYPT_TYPE_BLOWFISH" },
				{ "ENCRYPT_TYPE_NONE.DisplayName", "None" },
				{ "ENCRYPT_TYPE_NONE.Name", "NETWORK_ENCRYPT_TYPE::ENCRYPT_TYPE_NONE" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
				{ "ToolTip", "\xe5\x8a\xa0\xe5\xaf\x86\xe9\x80\x9a\xe8\xae\xaf\xe7\x9a\x84\xe7\xb1\xbb\xe5\x88\xab" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KBEnginePlugins,
				nullptr,
				"NETWORK_ENCRYPT_TYPE",
				"NETWORK_ENCRYPT_TYPE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EKCLIENT_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE, Z_Construct_UPackage__Script_KBEnginePlugins(), TEXT("EKCLIENT_TYPE"));
		}
		return Singleton;
	}
	template<> KBENGINEPLUGINS_API UEnum* StaticEnum<EKCLIENT_TYPE>()
	{
		return EKCLIENT_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKCLIENT_TYPE(EKCLIENT_TYPE_StaticEnum, TEXT("/Script/KBEnginePlugins"), TEXT("EKCLIENT_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE_Hash() { return 3096226074U; }
	UEnum* Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KBEnginePlugins();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKCLIENT_TYPE"), 0, Get_Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKCLIENT_TYPE::CLIENT_TYPE_UNKNOWN", (int64)EKCLIENT_TYPE::CLIENT_TYPE_UNKNOWN },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_MOBILE", (int64)EKCLIENT_TYPE::CLIENT_TYPE_MOBILE },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_WIN", (int64)EKCLIENT_TYPE::CLIENT_TYPE_WIN },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_LINUX", (int64)EKCLIENT_TYPE::CLIENT_TYPE_LINUX },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_MAC", (int64)EKCLIENT_TYPE::CLIENT_TYPE_MAC },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_BROWSER", (int64)EKCLIENT_TYPE::CLIENT_TYPE_BROWSER },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_BOTS", (int64)EKCLIENT_TYPE::CLIENT_TYPE_BOTS },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_MINI", (int64)EKCLIENT_TYPE::CLIENT_TYPE_MINI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CLIENT_TYPE_BOTS.DisplayName", "Bots" },
				{ "CLIENT_TYPE_BOTS.Name", "EKCLIENT_TYPE::CLIENT_TYPE_BOTS" },
				{ "CLIENT_TYPE_BROWSER.DisplayName", "Browser" },
				{ "CLIENT_TYPE_BROWSER.Name", "EKCLIENT_TYPE::CLIENT_TYPE_BROWSER" },
				{ "CLIENT_TYPE_LINUX.DisplayName", "Linux" },
				{ "CLIENT_TYPE_LINUX.Name", "EKCLIENT_TYPE::CLIENT_TYPE_LINUX" },
				{ "CLIENT_TYPE_MAC.DisplayName", "Mac" },
				{ "CLIENT_TYPE_MAC.Name", "EKCLIENT_TYPE::CLIENT_TYPE_MAC" },
				{ "CLIENT_TYPE_MINI.DisplayName", "Mini" },
				{ "CLIENT_TYPE_MINI.Name", "EKCLIENT_TYPE::CLIENT_TYPE_MINI" },
				{ "CLIENT_TYPE_MOBILE.DisplayName", "Mobile" },
				{ "CLIENT_TYPE_MOBILE.Name", "EKCLIENT_TYPE::CLIENT_TYPE_MOBILE" },
				{ "CLIENT_TYPE_UNKNOWN.DisplayName", "unknown" },
				{ "CLIENT_TYPE_UNKNOWN.Name", "EKCLIENT_TYPE::CLIENT_TYPE_UNKNOWN" },
				{ "CLIENT_TYPE_WIN.DisplayName", "Windows" },
				{ "CLIENT_TYPE_WIN.Name", "EKCLIENT_TYPE::CLIENT_TYPE_WIN" },
				{ "Comment", "// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe7\x9a\x84\xe7\xb1\xbb\xe5\x88\xab\n// http://www.kbengine.org/docs/programming/clientsdkprogramming.html\n// http://www.kbengine.org/cn/docs/programming/clientsdkprogramming.html\n" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
				{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe7\x9a\x84\xe7\xb1\xbb\xe5\x88\xab\nhttp:www.kbengine.org/docs/programming/clientsdkprogramming.html\nhttp:www.kbengine.org/cn/docs/programming/clientsdkprogramming.html" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KBEnginePlugins,
				nullptr,
				"EKCLIENT_TYPE",
				"EKCLIENT_TYPE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKServerErr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KBENGINEPLUGINS_API uint32 Get_Z_Construct_UScriptStruct_FKServerErr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKServerErr, Z_Construct_UPackage__Script_KBEnginePlugins(), TEXT("KServerErr"), sizeof(FKServerErr), Get_Z_Construct_UScriptStruct_FKServerErr_Hash());
	}
	return Singleton;
}
template<> KBENGINEPLUGINS_API UScriptStruct* StaticStruct<FKServerErr>()
{
	return FKServerErr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKServerErr(FKServerErr::StaticStruct, TEXT("/Script/KBEnginePlugins"), TEXT("KServerErr"), false, nullptr, nullptr);
static struct FScriptStruct_KBEnginePlugins_StaticRegisterNativesFKServerErr
{
	FScriptStruct_KBEnginePlugins_StaticRegisterNativesFKServerErr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KServerErr")),new UScriptStruct::TCppStructOps<FKServerErr>);
	}
} ScriptStruct_KBEnginePlugins_StaticRegisterNativesFKServerErr;
	struct Z_Construct_UScriptStruct_FKServerErr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_descr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_descr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKServerErr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Engine/KBECommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKServerErr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKServerErr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_id_MetaData[] = {
		{ "Category", "ServerErr" },
		{ "ModuleRelativePath", "Engine/KBECommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKServerErr, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_descr_MetaData[] = {
		{ "Category", "ServerErr" },
		{ "ModuleRelativePath", "Engine/KBECommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_descr = { "descr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKServerErr, descr), METADATA_PARAMS(Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_descr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_descr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_name_MetaData[] = {
		{ "Category", "ServerErr" },
		{ "ModuleRelativePath", "Engine/KBECommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKServerErr, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKServerErr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_descr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKServerErr_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKServerErr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
		nullptr,
		&NewStructOps,
		"KServerErr",
		sizeof(FKServerErr),
		alignof(FKServerErr),
		Z_Construct_UScriptStruct_FKServerErr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKServerErr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKServerErr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKServerErr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKServerErr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKServerErr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KBEnginePlugins();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KServerErr"), sizeof(FKServerErr), Get_Z_Construct_UScriptStruct_FKServerErr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKServerErr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKServerErr_Hash() { return 3773412304U; }
	void AKBECommon::StaticRegisterNativesAKBECommon()
	{
	}
	UClass* Z_Construct_UClass_AKBECommon_NoRegister()
	{
		return AKBECommon::StaticClass();
	}
	struct Z_Construct_UClass_AKBECommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKBECommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKBECommon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/KBECommon.h" },
		{ "ModuleRelativePath", "Engine/KBECommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKBECommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKBECommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKBECommon_Statics::ClassParams = {
		&AKBECommon::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKBECommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKBECommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKBECommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKBECommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKBECommon, 4140236654);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<AKBECommon>()
	{
		return AKBECommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKBECommon(Z_Construct_UClass_AKBECommon, &AKBECommon::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("AKBECommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKBECommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
