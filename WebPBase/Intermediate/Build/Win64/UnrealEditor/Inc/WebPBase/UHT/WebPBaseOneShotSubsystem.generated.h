// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/WebPBaseOneShotSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef WEBPBASE_WebPBaseOneShotSubsystem_generated_h
#error "WebPBaseOneShotSubsystem.generated.h already included, missing '#pragma once' in WebPBaseOneShotSubsystem.h"
#endif
#define WEBPBASE_WebPBaseOneShotSubsystem_generated_h

#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_13_DELEGATE \
WEBPBASE_API void FSampleWebPOneShotCallBackBP_DelegateWrapper(const FScriptDelegate& SampleWebPOneShotCallBackBP, bool bFinishGenerate);


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScreenShotCallback); \
	DECLARE_FUNCTION(execSampleWebPOneShotCallBackMethod); \
	DECLARE_FUNCTION(execBeginSampleWebPOneShot);


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPBaseOneShotSubsystem(); \
	friend struct Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWebPBaseOneShotSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebPBase"), NO_API) \
	DECLARE_SERIALIZER(UWebPBaseOneShotSubsystem)


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebPBaseOneShotSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebPBaseOneShotSubsystem(UWebPBaseOneShotSubsystem&&); \
	UWebPBaseOneShotSubsystem(const UWebPBaseOneShotSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPBaseOneShotSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPBaseOneShotSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPBaseOneShotSubsystem) \
	NO_API virtual ~UWebPBaseOneShotSubsystem();


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_15_PROLOG
#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBPBASE_API UClass* StaticClass<class UWebPBaseOneShotSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
