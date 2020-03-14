// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_ClientGameMode_generated_h
#error "ClientGameMode.generated.h already included, missing '#pragma once' in ClientGameMode.h"
#endif
#define CLIENT_ClientGameMode_generated_h

#define Client_Source_Client_ClientGameMode_h_12_SPARSE_DATA
#define Client_Source_Client_ClientGameMode_h_12_RPC_WRAPPERS
#define Client_Source_Client_ClientGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Client_Source_Client_ClientGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientGameMode(); \
	friend struct Z_Construct_UClass_AClientGameMode_Statics; \
public: \
	DECLARE_CLASS(AClientGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), CLIENT_API) \
	DECLARE_SERIALIZER(AClientGameMode)


#define Client_Source_Client_ClientGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAClientGameMode(); \
	friend struct Z_Construct_UClass_AClientGameMode_Statics; \
public: \
	DECLARE_CLASS(AClientGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), CLIENT_API) \
	DECLARE_SERIALIZER(AClientGameMode)


#define Client_Source_Client_ClientGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENT_API AClientGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENT_API, AClientGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CLIENT_API AClientGameMode(AClientGameMode&&); \
	CLIENT_API AClientGameMode(const AClientGameMode&); \
public:


#define Client_Source_Client_ClientGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CLIENT_API AClientGameMode(AClientGameMode&&); \
	CLIENT_API AClientGameMode(const AClientGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENT_API, AClientGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientGameMode)


#define Client_Source_Client_ClientGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Client_Source_Client_ClientGameMode_h_9_PROLOG
#define Client_Source_Client_ClientGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_ClientGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_ClientGameMode_h_12_SPARSE_DATA \
	Client_Source_Client_ClientGameMode_h_12_RPC_WRAPPERS \
	Client_Source_Client_ClientGameMode_h_12_INCLASS \
	Client_Source_Client_ClientGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Client_Source_Client_ClientGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_ClientGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_ClientGameMode_h_12_SPARSE_DATA \
	Client_Source_Client_ClientGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Client_Source_Client_ClientGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Client_Source_Client_ClientGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class AClientGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Client_Source_Client_ClientGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
