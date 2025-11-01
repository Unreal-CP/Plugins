// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebPBaseBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FWebPBasePictureInformation;
#ifdef WEBPBASE_WebPBaseBPLibrary_generated_h
#error "WebPBaseBPLibrary.generated.h already included, missing '#pragma once' in WebPBaseBPLibrary.h"
#endif
#define WEBPBASE_WebPBaseBPLibrary_generated_h

#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReleaseLoadedWebp); \
	DECLARE_FUNCTION(execLoadWebp); \
	DECLARE_FUNCTION(execEndRecord); \
	DECLARE_FUNCTION(execBeginRecordFullViewport); \
	DECLARE_FUNCTION(execBeginRecord); \
	DECLARE_FUNCTION(execGetWebPBaseVersion); \
	DECLARE_FUNCTION(execSetWebPAuth);


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPBaseBPLibrary(); \
	friend struct Z_Construct_UClass_UWebPBaseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWebPBaseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebPBase"), NO_API) \
	DECLARE_SERIALIZER(UWebPBaseBPLibrary)


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebPBaseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebPBaseBPLibrary(UWebPBaseBPLibrary&&); \
	UWebPBaseBPLibrary(const UWebPBaseBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPBaseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPBaseBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebPBaseBPLibrary) \
	NO_API virtual ~UWebPBaseBPLibrary();


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_8_PROLOG
#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBPBASE_API UClass* StaticClass<class UWebPBaseBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
