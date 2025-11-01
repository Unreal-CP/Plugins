// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Type/WebPBaseType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef WEBPBASE_WebPBaseType_generated_h
#error "WebPBaseType.generated.h already included, missing '#pragma once' in WebPBaseType.h"
#endif
#define WEBPBASE_WebPBaseType_generated_h

#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_11_DELEGATE \
WEBPBASE_API void FWebPFinishGenerateMultiWebp_DelegateWrapper(const FScriptDelegate& WebPFinishGenerateMultiWebp, bool bFinishGenerate);


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_13_DELEGATE \
WEBPBASE_API void FWebPLoadAndShowWebp_DelegateWrapper(const FScriptDelegate& WebPLoadAndShowWebp, bool bLoad, UTexture2D* OutWebpPicture, int32 WebpWidth, int32 WebpHeight);


#define FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEBPBASE_API UScriptStruct* StaticStruct<struct FWebPBasePictureInformation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h


#define FOREACH_ENUM_EWEBPBASEPROCESSTYPE(op) \
	op(EWebPBaseProcessType::None) \
	op(EWebPBaseProcessType::Recording) \
	op(EWebPBaseProcessType::Generating) \
	op(EWebPBaseProcessType::Max) 

enum class EWebPBaseProcessType : uint8;
template<> struct TIsUEnumClass<EWebPBaseProcessType> { enum { Value = true }; };
template<> WEBPBASE_API UEnum* StaticEnum<EWebPBaseProcessType>();

#define FOREACH_ENUM_EWEBPBASELOADANDSHOWTYPE(op) \
	op(EWebPBaseLoadAndShowType::None) \
	op(EWebPBaseLoadAndShowType::Loading) \
	op(EWebPBaseLoadAndShowType::Showing) \
	op(EWebPBaseLoadAndShowType::Max) 

enum class EWebPBaseLoadAndShowType : uint8;
template<> struct TIsUEnumClass<EWebPBaseLoadAndShowType> { enum { Value = true }; };
template<> WEBPBASE_API UEnum* StaticEnum<EWebPBaseLoadAndShowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
