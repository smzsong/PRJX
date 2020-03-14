// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KBEnginePlugins/Scripts/LogicEvents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogicEvents() {}
// Cross Module References
	KBENGINEPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FAVATAR_INFOS();
	UPackage* Z_Construct_UPackage__Script_KBEnginePlugins();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_reqCreateAvatar_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_reqCreateAvatar();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_onReqAvatarList_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_onReqAvatarList();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_reqRemoveAvatar_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_reqRemoveAvatar();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_onRemoveAvatar_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_onRemoveAvatar();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_onCreateAvatarResult_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_onCreateAvatarResult();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_selectAvatarGame_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_selectAvatarGame();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_moveSpeed_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_moveSpeed();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_entityNO_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_entityNO();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_name_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_name();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_modelID_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_modelID();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_modelScale_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_modelScale();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_HP_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_HP();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_HP_Max_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_HP_Max();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_MP_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_MP();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_MP_Max_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_MP_Max();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_flags_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_flags();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_state_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_state();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_subState_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_subState();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_forbids_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_set_forbids();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_reqRelive_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_reqRelive();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_recvDamage_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEventData_recvDamage();
// End Cross Module References
class UScriptStruct* FAVATAR_INFOS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KBENGINEPLUGINS_API uint32 Get_Z_Construct_UScriptStruct_FAVATAR_INFOS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAVATAR_INFOS, Z_Construct_UPackage__Script_KBEnginePlugins(), TEXT("AVATAR_INFOS"), sizeof(FAVATAR_INFOS), Get_Z_Construct_UScriptStruct_FAVATAR_INFOS_Hash());
	}
	return Singleton;
}
template<> KBENGINEPLUGINS_API UScriptStruct* StaticStruct<FAVATAR_INFOS>()
{
	return FAVATAR_INFOS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAVATAR_INFOS(FAVATAR_INFOS::StaticStruct, TEXT("/Script/KBEnginePlugins"), TEXT("AVATAR_INFOS"), false, nullptr, nullptr);
static struct FScriptStruct_KBEnginePlugins_StaticRegisterNativesFAVATAR_INFOS
{
	FScriptStruct_KBEnginePlugins_StaticRegisterNativesFAVATAR_INFOS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AVATAR_INFOS")),new UScriptStruct::TCppStructOps<FAVATAR_INFOS>);
	}
} ScriptStruct_KBEnginePlugins_StaticRegisterNativesFAVATAR_INFOS;
	struct Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastSelCharacter_MetaData[];
#endif
		static void NewProp_lastSelCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lastSelCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_roleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sdbid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sdbid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dbid_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_dbid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09???????\xdf\xbc??????????\xc2\xbc????????\xef\xb6\xa8??\n*/" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
		{ "ToolTip", "???????\xdf\xbc??????????\xc2\xbc????????\xef\xb6\xa8??" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAVATAR_INFOS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "Comment", "// ?????\xcb\xbc?\xc2\xbc??????\xd2\xbb????\xd1\xa1???\xc4\xbd?\xc9\xab\n" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
		{ "ToolTip", "?????\xcb\xbc?\xc2\xbc??????\xd2\xbb????\xd1\xa1???\xc4\xbd?\xc9\xab" },
	};
#endif
	void Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter_SetBit(void* Obj)
	{
		((FAVATAR_INFOS*)Obj)->lastSelCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter = { "lastSelCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAVATAR_INFOS), &Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_level_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAVATAR_INFOS, level), METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_roleType_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_roleType = { "roleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAVATAR_INFOS, roleType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_roleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_roleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_name_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAVATAR_INFOS, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_sdbid_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "Comment", "// ??????\xcd\xbc???\xc9\xb6?\xc8\xa1uint64???\xcd\xa3? ?????\xe1\xb9\xa9\xd2\xbb???\xd6\xb7??????????\xda\xb1\xc8\xbd\xcf\xba\xcd\xb6?\xc8\xa1\n" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
		{ "ToolTip", "??????\xcd\xbc???\xc9\xb6?\xc8\xa1uint64???\xcd\xa3? ?????\xe1\xb9\xa9\xd2\xbb???\xd6\xb7??????????\xda\xb1\xc8\xbd\xcf\xba\xcd\xb6?\xc8\xa1" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_sdbid = { "sdbid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAVATAR_INFOS, sdbid), METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_sdbid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_sdbid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_dbid_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_dbid = { "dbid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAVATAR_INFOS, dbid), METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_dbid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_dbid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_lastSelCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_roleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_sdbid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::NewProp_dbid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
		nullptr,
		&NewStructOps,
		"AVATAR_INFOS",
		sizeof(FAVATAR_INFOS),
		alignof(FAVATAR_INFOS),
		Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAVATAR_INFOS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAVATAR_INFOS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KBEnginePlugins();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AVATAR_INFOS"), sizeof(FAVATAR_INFOS), Get_Z_Construct_UScriptStruct_FAVATAR_INFOS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAVATAR_INFOS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAVATAR_INFOS_Hash() { return 3395189020U; }
	void UKBEventData_reqCreateAvatar::StaticRegisterNativesUKBEventData_reqCreateAvatar()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_reqCreateAvatar_NoRegister()
	{
		return UKBEventData_reqCreateAvatar::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_roleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_name_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_reqCreateAvatar, name), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_roleType_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_roleType = { "roleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_reqCreateAvatar, roleType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_roleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_roleType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::NewProp_roleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_reqCreateAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::ClassParams = {
		&UKBEventData_reqCreateAvatar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_reqCreateAvatar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_reqCreateAvatar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_reqCreateAvatar, 717291037);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_reqCreateAvatar>()
	{
		return UKBEventData_reqCreateAvatar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_reqCreateAvatar(Z_Construct_UClass_UKBEventData_reqCreateAvatar, &UKBEventData_reqCreateAvatar::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_reqCreateAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_reqCreateAvatar);
	void UKBEventData_onReqAvatarList::StaticRegisterNativesUKBEventData_onReqAvatarList()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_onReqAvatarList_NoRegister()
	{
		return UKBEventData_onReqAvatarList::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_avatars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatars_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars = { "avatars", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_onReqAvatarList, avatars), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars_Inner = { "avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAVATAR_INFOS, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::NewProp_avatars_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_onReqAvatarList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::ClassParams = {
		&UKBEventData_onReqAvatarList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_onReqAvatarList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_onReqAvatarList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_onReqAvatarList, 2311653408);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_onReqAvatarList>()
	{
		return UKBEventData_onReqAvatarList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_onReqAvatarList(Z_Construct_UClass_UKBEventData_onReqAvatarList, &UKBEventData_onReqAvatarList::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_onReqAvatarList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_onReqAvatarList);
	void UKBEventData_reqRemoveAvatar::StaticRegisterNativesUKBEventData_reqRemoveAvatar()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_reqRemoveAvatar_NoRegister()
	{
		return UKBEventData_reqRemoveAvatar::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatarInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::NewProp_avatarInfos_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::NewProp_avatarInfos = { "avatarInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_reqRemoveAvatar, avatarInfos), Z_Construct_UScriptStruct_FAVATAR_INFOS, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::NewProp_avatarInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::NewProp_avatarInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::NewProp_avatarInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_reqRemoveAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::ClassParams = {
		&UKBEventData_reqRemoveAvatar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_reqRemoveAvatar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_reqRemoveAvatar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_reqRemoveAvatar, 381757158);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_reqRemoveAvatar>()
	{
		return UKBEventData_reqRemoveAvatar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_reqRemoveAvatar(Z_Construct_UClass_UKBEventData_reqRemoveAvatar, &UKBEventData_reqRemoveAvatar::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_reqRemoveAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_reqRemoveAvatar);
	void UKBEventData_onRemoveAvatar::StaticRegisterNativesUKBEventData_onRemoveAvatar()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_onRemoveAvatar_NoRegister()
	{
		return UKBEventData_onRemoveAvatar::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatarInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::NewProp_avatarInfos_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::NewProp_avatarInfos = { "avatarInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_onRemoveAvatar, avatarInfos), Z_Construct_UScriptStruct_FAVATAR_INFOS, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::NewProp_avatarInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::NewProp_avatarInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::NewProp_avatarInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_onRemoveAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::ClassParams = {
		&UKBEventData_onRemoveAvatar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_onRemoveAvatar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_onRemoveAvatar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_onRemoveAvatar, 250243522);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_onRemoveAvatar>()
	{
		return UKBEventData_onRemoveAvatar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_onRemoveAvatar(Z_Construct_UClass_UKBEventData_onRemoveAvatar, &UKBEventData_onRemoveAvatar::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_onRemoveAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_onRemoveAvatar);
	void UKBEventData_onCreateAvatarResult::StaticRegisterNativesUKBEventData_onCreateAvatarResult()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_onCreateAvatarResult_NoRegister()
	{
		return UKBEventData_onCreateAvatarResult::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatarInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_errorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_avatarInfos_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_avatarInfos = { "avatarInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_onCreateAvatarResult, avatarInfos), Z_Construct_UScriptStruct_FAVATAR_INFOS, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_avatarInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_avatarInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorStr_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorStr = { "errorStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_onCreateAvatarResult, errorStr), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorCode_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_onCreateAvatarResult, errorCode), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_avatarInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::NewProp_errorCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_onCreateAvatarResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::ClassParams = {
		&UKBEventData_onCreateAvatarResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_onCreateAvatarResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_onCreateAvatarResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_onCreateAvatarResult, 2577835773);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_onCreateAvatarResult>()
	{
		return UKBEventData_onCreateAvatarResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_onCreateAvatarResult(Z_Construct_UClass_UKBEventData_onCreateAvatarResult, &UKBEventData_onCreateAvatarResult::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_onCreateAvatarResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_onCreateAvatarResult);
	void UKBEventData_selectAvatarGame::StaticRegisterNativesUKBEventData_selectAvatarGame()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_selectAvatarGame_NoRegister()
	{
		return UKBEventData_selectAvatarGame::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatarInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::NewProp_avatarInfos_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::NewProp_avatarInfos = { "avatarInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_selectAvatarGame, avatarInfos), Z_Construct_UScriptStruct_FAVATAR_INFOS, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::NewProp_avatarInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::NewProp_avatarInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::NewProp_avatarInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_selectAvatarGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::ClassParams = {
		&UKBEventData_selectAvatarGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_selectAvatarGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_selectAvatarGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_selectAvatarGame, 1002792901);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_selectAvatarGame>()
	{
		return UKBEventData_selectAvatarGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_selectAvatarGame(Z_Construct_UClass_UKBEventData_selectAvatarGame, &UKBEventData_selectAvatarGame::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_selectAvatarGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_selectAvatarGame);
	void UKBEventData_set_moveSpeed::StaticRegisterNativesUKBEventData_set_moveSpeed()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_moveSpeed_NoRegister()
	{
		return UKBEventData_set_moveSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_moveSpeed, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_moveSpeed, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_entityID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::NewProp_entityID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_moveSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::ClassParams = {
		&UKBEventData_set_moveSpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_moveSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_moveSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_moveSpeed, 1030071355);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_moveSpeed>()
	{
		return UKBEventData_set_moveSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_moveSpeed(Z_Construct_UClass_UKBEventData_set_moveSpeed, &UKBEventData_set_moveSpeed::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_moveSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_moveSpeed);
	void UKBEventData_set_entityNO::StaticRegisterNativesUKBEventData_set_entityNO()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_entityNO_NoRegister()
	{
		return UKBEventData_set_entityNO::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_entityNO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityNO_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entityNO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_entityNO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_entityNO_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityNO_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityNO = { "entityNO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_entityNO, entityNO), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityNO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityNO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_entityNO, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_entityNO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityNO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_entityNO_Statics::NewProp_entityID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_entityNO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_entityNO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_entityNO_Statics::ClassParams = {
		&UKBEventData_set_entityNO::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_entityNO_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_entityNO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_entityNO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_entityNO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_entityNO, 3312238230);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_entityNO>()
	{
		return UKBEventData_set_entityNO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_entityNO(Z_Construct_UClass_UKBEventData_set_entityNO, &UKBEventData_set_entityNO::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_entityNO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_entityNO);
	void UKBEventData_set_name::StaticRegisterNativesUKBEventData_set_name()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_name_NoRegister()
	{
		return UKBEventData_set_name::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_name_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_name_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_name_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_name_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_name, name), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_name, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_entityID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_name_Statics::NewProp_entityID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_name_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_name>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_name_Statics::ClassParams = {
		&UKBEventData_set_name::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_name_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_name_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_name_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_name_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_name()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_name_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_name, 3460453587);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_name>()
	{
		return UKBEventData_set_name::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_name(Z_Construct_UClass_UKBEventData_set_name, &UKBEventData_set_name::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_name"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_name);
	void UKBEventData_set_modelID::StaticRegisterNativesUKBEventData_set_modelID()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_modelID_NoRegister()
	{
		return UKBEventData_set_modelID::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_modelID_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modelID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_modelID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_modelID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_modelID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_modelID, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_modelID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_modelID = { "modelID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_modelID, modelID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_modelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_modelID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_modelID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_modelID_Statics::NewProp_modelID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_modelID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_modelID>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_modelID_Statics::ClassParams = {
		&UKBEventData_set_modelID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_modelID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelID_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_modelID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_modelID()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_modelID_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_modelID, 1156363251);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_modelID>()
	{
		return UKBEventData_set_modelID::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_modelID(Z_Construct_UClass_UKBEventData_set_modelID, &UKBEventData_set_modelID::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_modelID"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_modelID);
	void UKBEventData_set_modelScale::StaticRegisterNativesUKBEventData_set_modelScale()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_modelScale_NoRegister()
	{
		return UKBEventData_set_modelScale::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_modelScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_modelScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_modelScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_modelScale_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_modelScale, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_modelScale_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_modelScale = { "modelScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_modelScale, modelScale), nullptr, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_modelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_modelScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_modelScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_modelScale_Statics::NewProp_modelScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_modelScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_modelScale>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_modelScale_Statics::ClassParams = {
		&UKBEventData_set_modelScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_modelScale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_modelScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_modelScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_modelScale_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_modelScale, 3349001565);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_modelScale>()
	{
		return UKBEventData_set_modelScale::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_modelScale(Z_Construct_UClass_UKBEventData_set_modelScale, &UKBEventData_set_modelScale::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_modelScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_modelScale);
	void UKBEventData_set_HP::StaticRegisterNativesUKBEventData_set_HP()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_HP_NoRegister()
	{
		return UKBEventData_set_HP::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_HP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_HP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_HP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_HP, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_HP, HP), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_HP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_HP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_HP_Statics::NewProp_HP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_HP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_HP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_HP_Statics::ClassParams = {
		&UKBEventData_set_HP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_HP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_HP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_HP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_HP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_HP, 1120974349);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_HP>()
	{
		return UKBEventData_set_HP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_HP(Z_Construct_UClass_UKBEventData_set_HP, &UKBEventData_set_HP::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_HP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_HP);
	void UKBEventData_set_HP_Max::StaticRegisterNativesUKBEventData_set_HP_Max()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_HP_Max_NoRegister()
	{
		return UKBEventData_set_HP_Max::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_HP_Max_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_HP_Max, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_HP_Max_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_HP_Max = { "HP_Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_HP_Max, HP_Max), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_HP_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_HP_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::NewProp_HP_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_HP_Max>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::ClassParams = {
		&UKBEventData_set_HP_Max::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_HP_Max()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_HP_Max_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_HP_Max, 2237581341);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_HP_Max>()
	{
		return UKBEventData_set_HP_Max::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_HP_Max(Z_Construct_UClass_UKBEventData_set_HP_Max, &UKBEventData_set_HP_Max::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_HP_Max"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_HP_Max);
	void UKBEventData_set_MP::StaticRegisterNativesUKBEventData_set_MP()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_MP_NoRegister()
	{
		return UKBEventData_set_MP::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_MP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_MP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_MP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_MP, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_MP_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_MP, MP), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_MP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_MP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_MP_Statics::NewProp_MP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_MP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_MP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_MP_Statics::ClassParams = {
		&UKBEventData_set_MP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_MP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_MP_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_MP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_MP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_MP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_MP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_MP, 2798833877);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_MP>()
	{
		return UKBEventData_set_MP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_MP(Z_Construct_UClass_UKBEventData_set_MP, &UKBEventData_set_MP::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_MP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_MP);
	void UKBEventData_MP_Max::StaticRegisterNativesUKBEventData_MP_Max()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_MP_Max_NoRegister()
	{
		return UKBEventData_MP_Max::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_MP_Max_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MP_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MP_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_MP_Max_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_MP_Max_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_MP_Max, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_MP_Max_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_MP_Max = { "MP_Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_MP_Max, MP_Max), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_MP_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_MP_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_MP_Max_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_MP_Max_Statics::NewProp_MP_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_MP_Max_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_MP_Max>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_MP_Max_Statics::ClassParams = {
		&UKBEventData_MP_Max::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_MP_Max_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_MP_Max_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_MP_Max_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_MP_Max_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_MP_Max()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_MP_Max_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_MP_Max, 2980750108);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_MP_Max>()
	{
		return UKBEventData_MP_Max::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_MP_Max(Z_Construct_UClass_UKBEventData_MP_Max, &UKBEventData_MP_Max::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_MP_Max"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_MP_Max);
	void UKBEventData_set_flags::StaticRegisterNativesUKBEventData_set_flags()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_flags_NoRegister()
	{
		return UKBEventData_set_flags::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_flags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_flags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_flags_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_flags, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_flags_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_flags, flags), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_flags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_flags_Statics::NewProp_flags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_flags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_flags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_flags_Statics::ClassParams = {
		&UKBEventData_set_flags::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_flags_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_flags_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_flags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_flags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_flags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_flags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_flags, 1383568626);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_flags>()
	{
		return UKBEventData_set_flags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_flags(Z_Construct_UClass_UKBEventData_set_flags, &UKBEventData_set_flags::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_flags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_flags);
	void UKBEventData_set_state::StaticRegisterNativesUKBEventData_set_state()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_state_NoRegister()
	{
		return UKBEventData_set_state::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_state_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_state_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_state_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_state, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_state_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_state, state), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_state_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_state_Statics::NewProp_state,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_state_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_state>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_state_Statics::ClassParams = {
		&UKBEventData_set_state::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_state_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_state_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_state_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_state_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_state()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_state_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_state, 3104550638);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_state>()
	{
		return UKBEventData_set_state::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_state(Z_Construct_UClass_UKBEventData_set_state, &UKBEventData_set_state::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_state"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_state);
	void UKBEventData_set_subState::StaticRegisterNativesUKBEventData_set_subState()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_subState_NoRegister()
	{
		return UKBEventData_set_subState::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_subState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_subState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_subState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_subState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_subState, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_subState_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_subState = { "subState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_subState, subState), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_subState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_subState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_subState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_subState_Statics::NewProp_subState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_subState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_subState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_subState_Statics::ClassParams = {
		&UKBEventData_set_subState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_subState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_subState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_subState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_subState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_subState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_subState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_subState, 2709636650);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_subState>()
	{
		return UKBEventData_set_subState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_subState(Z_Construct_UClass_UKBEventData_set_subState, &UKBEventData_set_subState::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_subState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_subState);
	void UKBEventData_set_forbids::StaticRegisterNativesUKBEventData_set_forbids()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_set_forbids_NoRegister()
	{
		return UKBEventData_set_forbids::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_set_forbids_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forbids_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_forbids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_set_forbids_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_forbids_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_forbids, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_forbids_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_forbids = { "forbids", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_set_forbids, forbids), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_forbids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_forbids_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_set_forbids_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_set_forbids_Statics::NewProp_forbids,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_set_forbids_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_set_forbids>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_set_forbids_Statics::ClassParams = {
		&UKBEventData_set_forbids::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_set_forbids_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_forbids_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_set_forbids_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_set_forbids_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_set_forbids()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_set_forbids_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_set_forbids, 3683928300);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_set_forbids>()
	{
		return UKBEventData_set_forbids::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_set_forbids(Z_Construct_UClass_UKBEventData_set_forbids, &UKBEventData_set_forbids::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_set_forbids"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_set_forbids);
	void UKBEventData_reqRelive::StaticRegisterNativesUKBEventData_reqRelive()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_reqRelive_NoRegister()
	{
		return UKBEventData_reqRelive::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_reqRelive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reliveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_reliveType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_reqRelive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqRelive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_reqRelive_Statics::NewProp_reliveType_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKBEventData_reqRelive_Statics::NewProp_reliveType = { "reliveType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_reqRelive, reliveType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqRelive_Statics::NewProp_reliveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqRelive_Statics::NewProp_reliveType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_reqRelive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_reqRelive_Statics::NewProp_reliveType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_reqRelive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_reqRelive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_reqRelive_Statics::ClassParams = {
		&UKBEventData_reqRelive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_reqRelive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqRelive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_reqRelive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_reqRelive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_reqRelive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_reqRelive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_reqRelive, 769283906);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_reqRelive>()
	{
		return UKBEventData_reqRelive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_reqRelive(Z_Construct_UClass_UKBEventData_reqRelive, &UKBEventData_reqRelive::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_reqRelive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_reqRelive);
	void UKBEventData_recvDamage::StaticRegisterNativesUKBEventData_recvDamage()
	{
	}
	UClass* Z_Construct_UClass_UKBEventData_recvDamage_NoRegister()
	{
		return UKBEventData_recvDamage::StaticClass();
	}
	struct Z_Construct_UClass_UKBEventData_recvDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_entityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_damageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skillID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_skillID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEventData_recvDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKBEventData,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_recvDamage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/LogicEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_entityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_entityID = { "entityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_recvDamage, entityID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_entityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_entityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_recvDamage, damage), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_recvDamage, damageType), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_skillID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_skillID = { "skillID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_recvDamage, skillID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_skillID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_skillID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_attackerID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Scripts/LogicEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_attackerID = { "attackerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEventData_recvDamage, attackerID), METADATA_PARAMS(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_attackerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_attackerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEventData_recvDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_entityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_skillID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEventData_recvDamage_Statics::NewProp_attackerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEventData_recvDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEventData_recvDamage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEventData_recvDamage_Statics::ClassParams = {
		&UKBEventData_recvDamage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKBEventData_recvDamage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEventData_recvDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEventData_recvDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEventData_recvDamage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEventData_recvDamage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEventData_recvDamage, 1509289818);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEventData_recvDamage>()
	{
		return UKBEventData_recvDamage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEventData_recvDamage(Z_Construct_UClass_UKBEventData_recvDamage, &UKBEventData_recvDamage::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEventData_recvDamage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEventData_recvDamage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
