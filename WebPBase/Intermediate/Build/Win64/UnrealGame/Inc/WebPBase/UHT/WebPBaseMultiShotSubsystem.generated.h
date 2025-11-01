// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/WebPBaseMultiShotSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef WEBPBASE_WebPBaseMultiShotSubsystem_generated_h
#error "WebPBaseMultiShotSubsystem.generated.h already included, missing '#pragma once' in WebPBaseMultiShotSubsystem.h"
#endif
#define WEBPBASE_WebPBaseMultiShotSubsystem_generated_h

#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSampleWebPOneMultiCallBackMethod); \
	DECLARE_FUNCTION(execScreenShotCallback);


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPBaseMultiShotSubsystem(); \
	friend struct Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWebPBaseMultiShotSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebPBase"), NO_API) \
	DECLARE_SERIALIZER(UWebPBaseMultiShotSubsystem)


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebPBaseMultiShotSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebPBaseMultiShotSubsystem(UWebPBaseMultiShotSubsystem&&); \
	UWebPBaseMultiShotSubsystem(const UWebPBaseMultiShotSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPBaseMultiShotSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPBaseMultiShotSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPBaseMultiShotSubsystem) \
	NO_API virtual ~UWebPBaseMultiShotSubsystem();


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_13_PROLOG
#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBPBASE_API UClass* StaticClass<class UWebPBaseMultiShotSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
