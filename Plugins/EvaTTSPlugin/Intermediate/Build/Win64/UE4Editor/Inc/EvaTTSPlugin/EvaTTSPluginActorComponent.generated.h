// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef EVATTSPLUGIN_EvaTTSPluginActorComponent_generated_h
#error "EvaTTSPluginActorComponent.generated.h already included, missing '#pragma once' in EvaTTSPluginActorComponent.h"
#endif
#define EVATTSPLUGIN_EvaTTSPluginActorComponent_generated_h

#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_SPARSE_DATA
#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_OBJECT_REF(UObject,Z_Param_Out_CreatedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeObject(Z_Param_ObjectClass,Z_Param_Out_CreatedObject); \
		P_NATIVE_END; \
	}


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_OBJECT_REF(UObject,Z_Param_Out_CreatedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeObject(Z_Param_ObjectClass,Z_Param_Out_CreatedObject); \
		P_NATIVE_END; \
	}


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvaTTSPluginActorComponent(); \
	friend struct Z_Construct_UClass_UEvaTTSPluginActorComponent_Statics; \
public: \
	DECLARE_CLASS(UEvaTTSPluginActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EvaTTSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEvaTTSPluginActorComponent)


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEvaTTSPluginActorComponent(); \
	friend struct Z_Construct_UClass_UEvaTTSPluginActorComponent_Statics; \
public: \
	DECLARE_CLASS(UEvaTTSPluginActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EvaTTSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEvaTTSPluginActorComponent)


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvaTTSPluginActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvaTTSPluginActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaTTSPluginActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaTTSPluginActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaTTSPluginActorComponent(UEvaTTSPluginActorComponent&&); \
	NO_API UEvaTTSPluginActorComponent(const UEvaTTSPluginActorComponent&); \
public:


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvaTTSPluginActorComponent(UEvaTTSPluginActorComponent&&); \
	NO_API UEvaTTSPluginActorComponent(const UEvaTTSPluginActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvaTTSPluginActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvaTTSPluginActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEvaTTSPluginActorComponent)


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_10_PROLOG
#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_SPARSE_DATA \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_RPC_WRAPPERS \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_INCLASS \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_SPARSE_DATA \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_INCLASS_NO_PURE_DECLS \
	EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVATTSPLUGIN_API UClass* StaticClass<class UEvaTTSPluginActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EvaTTSSampleProject_Plugins_EvaTTSPlugin_Source_EvaTTSPlugin_Public_EvaTTSPluginActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
