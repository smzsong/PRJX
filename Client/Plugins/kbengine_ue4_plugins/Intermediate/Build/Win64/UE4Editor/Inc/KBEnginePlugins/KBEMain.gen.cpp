// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KBEnginePlugins/Engine/KBEMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBEMain() {}
// Cross Module References
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEMain_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEMain();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_KBEnginePlugins();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_createAccount();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_destroyKBEngine();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getClientScriptVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getClientVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getComponentName();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getServerScriptVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getServerVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_login();
	KBENGINEPLUGINS_API UEnum* Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE();
	KBENGINEPLUGINS_API UEnum* Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE();
// End Cross Module References
	void UKBEMain::StaticRegisterNativesUKBEMain()
	{
		UClass* Class = UKBEMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "createAccount", &UKBEMain::execcreateAccount },
			{ "destroyKBEngine", &UKBEMain::execdestroyKBEngine },
			{ "getClientScriptVersion", &UKBEMain::execgetClientScriptVersion },
			{ "getClientVersion", &UKBEMain::execgetClientVersion },
			{ "getComponentName", &UKBEMain::execgetComponentName },
			{ "getServerScriptVersion", &UKBEMain::execgetServerScriptVersion },
			{ "getServerVersion", &UKBEMain::execgetServerVersion },
			{ "login", &UKBEMain::execlogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKBEMain_createAccount_Statics
	{
		struct KBEMain_eventcreateAccount_Parms
		{
			FString username;
			FString password;
			TArray<uint8> datas;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_datas;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_datas_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KBEMain_eventcreateAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KBEMain_eventcreateAccount_Parms), &Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas = { "datas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventcreateAccount_Parms, datas), METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas_Inner = { "datas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventcreateAccount_Parms, password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventcreateAccount_Parms, username), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_createAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_datas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_createAccount_Statics::NewProp_username,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_createAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "Comment", "/*\n\x09\x09\xe5\x88\x9b\xe5\xbb\xba\xe8\xb4\xa6\xe5\x8f\xb7\n\x09*/" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe8\xb4\xa6\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_createAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "createAccount", nullptr, nullptr, sizeof(KBEMain_eventcreateAccount_Parms), Z_Construct_UFunction_UKBEMain_createAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_createAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_createAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_createAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_createAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_createAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics
	{
		struct KBEMain_eventdestroyKBEngine_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KBEMain_eventdestroyKBEngine_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KBEMain_eventdestroyKBEngine_Parms), &Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "Comment", "/**\n\x09\x09\xe5\x9c\xa8\xe7\xa8\x8b\xe5\xba\x8f\xe5\x85\xb3\xe9\x97\xad\xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe4\xb8\xbb\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8, \xe5\xbd\xbb\xe5\xba\x95\xe9\x94\x80\xe6\xaf\x81KBEngine\n\x09*/" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe7\xa8\x8b\xe5\xba\x8f\xe5\x85\xb3\xe9\x97\xad\xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe4\xb8\xbb\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8, \xe5\xbd\xbb\xe5\xba\x95\xe9\x94\x80\xe6\xaf\x81KBEngine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "destroyKBEngine", nullptr, nullptr, sizeof(KBEMain_eventdestroyKBEngine_Parms), Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_destroyKBEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_destroyKBEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics
	{
		struct KBEMain_eventgetClientScriptVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventgetClientScriptVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "getClientScriptVersion", nullptr, nullptr, sizeof(KBEMain_eventgetClientScriptVersion_Parms), Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_getClientScriptVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_getClientScriptVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_getClientVersion_Statics
	{
		struct KBEMain_eventgetClientVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventgetClientVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "getClientVersion", nullptr, nullptr, sizeof(KBEMain_eventgetClientVersion_Parms), Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_getClientVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_getClientVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_getComponentName_Statics
	{
		struct KBEMain_eventgetComponentName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_getComponentName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventgetComponentName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_getComponentName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_getComponentName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_getComponentName_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "Comment", "/*\n\x09\x09\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xb1\x9e\xe4\xba\x8eKBE\xe6\xa1\x86\xe6\x9e\xb6\xe4\xb8\xad\xe7\x9a\x84\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8a\x9f\xe8\x83\xbd\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb0\x86\xe5\x9b\xba\xe5\xae\x9a\xe8\xbf\x94\xe5\x9b\x9e""client\n\x09*/" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
		{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xb1\x9e\xe4\xba\x8eKBE\xe6\xa1\x86\xe6\x9e\xb6\xe4\xb8\xad\xe7\x9a\x84\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8a\x9f\xe8\x83\xbd\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb0\x86\xe5\x9b\xba\xe5\xae\x9a\xe8\xbf\x94\xe5\x9b\x9e""client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_getComponentName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "getComponentName", nullptr, nullptr, sizeof(KBEMain_eventgetComponentName_Parms), Z_Construct_UFunction_UKBEMain_getComponentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getComponentName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_getComponentName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getComponentName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_getComponentName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_getComponentName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics
	{
		struct KBEMain_eventgetServerScriptVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventgetServerScriptVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "getServerScriptVersion", nullptr, nullptr, sizeof(KBEMain_eventgetServerScriptVersion_Parms), Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_getServerScriptVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_getServerScriptVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_getServerVersion_Statics
	{
		struct KBEMain_eventgetServerVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventgetServerVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "getServerVersion", nullptr, nullptr, sizeof(KBEMain_eventgetServerVersion_Parms), Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_getServerVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_getServerVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKBEMain_login_Statics
	{
		struct KBEMain_eventlogin_Parms
		{
			FString username;
			FString password;
			TArray<uint8> datas;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_datas;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_datas_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KBEMain_eventlogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KBEMain_eventlogin_Parms), &Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_datas = { "datas", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventlogin_Parms, datas), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_datas_Inner = { "datas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventlogin_Parms, password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KBEMain_eventlogin_Parms, username), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKBEMain_login_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_datas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_datas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKBEMain_login_Statics::NewProp_username,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKBEMain_login_Statics::Function_MetaDataParams[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKBEMain_login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, nullptr, "login", nullptr, nullptr, sizeof(KBEMain_eventlogin_Parms), Z_Construct_UFunction_UKBEMain_login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_login_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKBEMain_login_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKBEMain_login_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKBEMain_login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKBEMain_login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKBEMain_NoRegister()
	{
		return UKBEMain::StaticClass();
	}
	struct Z_Construct_UClass_UKBEMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_automaticallyUpdateSDK_MetaData[];
#endif
		static void NewProp_automaticallyUpdateSDK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_automaticallyUpdateSDK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UDP_RECV_BUFFER_MAX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UDP_RECV_BUFFER_MAX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UDP_SEND_BUFFER_MAX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UDP_SEND_BUFFER_MAX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TCP_RECV_BUFFER_MAX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TCP_RECV_BUFFER_MAX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TCP_SEND_BUFFER_MAX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TCP_SEND_BUFFER_MAX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverHeartbeatTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_serverHeartbeatTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forceDisableUDP_MetaData[];
#endif
		static void NewProp_forceDisableUDP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceDisableUDP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOnInitCallPropertysSetMethods_MetaData[];
#endif
		static void NewProp_isOnInitCallPropertysSetMethods_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnInitCallPropertysSetMethods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useAliasEntityID_MetaData[];
#endif
		static void NewProp_useAliasEntityID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useAliasEntityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_syncPlayerMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_syncPlayerMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_networkEncryptType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_networkEncryptType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_networkEncryptType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_clientType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_clientType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKBEMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKBEMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKBEMain_createAccount, "createAccount" }, // 3667210914
		{ &Z_Construct_UFunction_UKBEMain_destroyKBEngine, "destroyKBEngine" }, // 2278071267
		{ &Z_Construct_UFunction_UKBEMain_getClientScriptVersion, "getClientScriptVersion" }, // 4215905707
		{ &Z_Construct_UFunction_UKBEMain_getClientVersion, "getClientVersion" }, // 384876070
		{ &Z_Construct_UFunction_UKBEMain_getComponentName, "getComponentName" }, // 2259682412
		{ &Z_Construct_UFunction_UKBEMain_getServerScriptVersion, "getServerScriptVersion" }, // 3567501325
		{ &Z_Construct_UFunction_UKBEMain_getServerVersion, "getServerVersion" }, // 725186340
		{ &Z_Construct_UFunction_UKBEMain_login, "login" }, // 4041833447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "KBEngine" },
		{ "DisplayName", "KBEngine Main" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming" },
		{ "IncludePath", "Engine/KBEMain.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	void Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK_SetBit(void* Obj)
	{
		((UKBEMain*)Obj)->automaticallyUpdateSDK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK = { "automaticallyUpdateSDK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKBEMain), &Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_RECV_BUFFER_MAX_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_RECV_BUFFER_MAX = { "UDP_RECV_BUFFER_MAX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, UDP_RECV_BUFFER_MAX), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_RECV_BUFFER_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_RECV_BUFFER_MAX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_SEND_BUFFER_MAX_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_SEND_BUFFER_MAX = { "UDP_SEND_BUFFER_MAX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, UDP_SEND_BUFFER_MAX), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_SEND_BUFFER_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_SEND_BUFFER_MAX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_RECV_BUFFER_MAX_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_RECV_BUFFER_MAX = { "TCP_RECV_BUFFER_MAX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, TCP_RECV_BUFFER_MAX), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_RECV_BUFFER_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_RECV_BUFFER_MAX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_SEND_BUFFER_MAX_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_SEND_BUFFER_MAX = { "TCP_SEND_BUFFER_MAX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, TCP_SEND_BUFFER_MAX), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_SEND_BUFFER_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_SEND_BUFFER_MAX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_serverHeartbeatTick_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_serverHeartbeatTick = { "serverHeartbeatTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, serverHeartbeatTick), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_serverHeartbeatTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_serverHeartbeatTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	void Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP_SetBit(void* Obj)
	{
		((UKBEMain*)Obj)->forceDisableUDP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP = { "forceDisableUDP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKBEMain), &Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	void Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods_SetBit(void* Obj)
	{
		((UKBEMain*)Obj)->isOnInitCallPropertysSetMethods = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods = { "isOnInitCallPropertysSetMethods", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKBEMain), &Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	void Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID_SetBit(void* Obj)
	{
		((UKBEMain*)Obj)->useAliasEntityID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID = { "useAliasEntityID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKBEMain), &Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_syncPlayerMS_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_syncPlayerMS = { "syncPlayerMS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, syncPlayerMS), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_syncPlayerMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_syncPlayerMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType = { "networkEncryptType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, networkEncryptType), Z_Construct_UEnum_KBEnginePlugins_NETWORK_ENCRYPT_TYPE, METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType = { "clientType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, clientType), Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE, METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_port_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, port), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKBEMain_Statics::NewProp_ip_MetaData[] = {
		{ "Category", "KBEngine" },
		{ "ModuleRelativePath", "Engine/KBEMain.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKBEMain_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKBEMain, ip), METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::NewProp_ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::NewProp_ip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKBEMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_automaticallyUpdateSDK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_RECV_BUFFER_MAX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_UDP_SEND_BUFFER_MAX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_RECV_BUFFER_MAX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_TCP_SEND_BUFFER_MAX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_serverHeartbeatTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_forceDisableUDP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_isOnInitCallPropertysSetMethods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_useAliasEntityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_syncPlayerMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_networkEncryptType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_clientType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKBEMain_Statics::NewProp_ip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKBEMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKBEMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKBEMain_Statics::ClassParams = {
		&UKBEMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKBEMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKBEMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKBEMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKBEMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKBEMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEMain, 3320178117);
	template<> KBENGINEPLUGINS_API UClass* StaticClass<UKBEMain>()
	{
		return UKBEMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEMain(Z_Construct_UClass_UKBEMain, &UKBEMain::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
