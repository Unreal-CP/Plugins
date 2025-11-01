// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebPBase/Public/WebPBaseBPLibrary.h"
#include "WebPBase/Public/Type/WebPBaseType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPBaseBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WebPBase();
WEBPBASE_API UClass* Z_Construct_UClass_UWebPBaseBPLibrary();
WEBPBASE_API UClass* Z_Construct_UClass_UWebPBaseBPLibrary_NoRegister();
WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature();
WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature();
WEBPBASE_API UScriptStruct* Z_Construct_UScriptStruct_FWebPBasePictureInformation();
// End Cross Module References

// Begin Class UWebPBaseBPLibrary Function BeginRecord
struct Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics
{
	struct WebPBaseBPLibrary_eventBeginRecord_Parms
	{
		UObject* WorldContextObject;
		FString InGeneratedWebpPicturesPath;
		FWebPBasePictureInformation InWebpPictureInformation;
		bool bBegin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebPBase" },
		{ "DisplayName", "BeginRecord" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGeneratedWebpPicturesPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWebpPictureInformation;
	static void NewProp_bBegin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBegin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventBeginRecord_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_InGeneratedWebpPicturesPath = { "InGeneratedWebpPicturesPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventBeginRecord_Parms, InGeneratedWebpPicturesPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_InWebpPictureInformation = { "InWebpPictureInformation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventBeginRecord_Parms, InWebpPictureInformation), Z_Construct_UScriptStruct_FWebPBasePictureInformation, METADATA_PARAMS(0, nullptr) }; // 3506958783
void Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_bBegin_SetBit(void* Obj)
{
	((WebPBaseBPLibrary_eventBeginRecord_Parms*)Obj)->bBegin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_bBegin = { "bBegin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPBaseBPLibrary_eventBeginRecord_Parms), &Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_bBegin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_InGeneratedWebpPicturesPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_InWebpPictureInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::NewProp_bBegin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "BeginRecord", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::WebPBaseBPLibrary_eventBeginRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::WebPBaseBPLibrary_eventBeginRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execBeginRecord)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InGeneratedWebpPicturesPath);
	P_GET_STRUCT(FWebPBasePictureInformation,Z_Param_InWebpPictureInformation);
	P_GET_UBOOL_REF(Z_Param_Out_bBegin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebPBaseBPLibrary::BeginRecord(Z_Param_WorldContextObject,Z_Param_InGeneratedWebpPicturesPath,Z_Param_InWebpPictureInformation,Z_Param_Out_bBegin);
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function BeginRecord

// Begin Class UWebPBaseBPLibrary Function BeginRecordFullViewport
struct Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics
{
	struct WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms
	{
		UObject* WorldContextObject;
		FString InGeneratedWebpPicturesPath;
		bool bBegin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebPBase" },
		{ "Comment", "// \xe5\x85\xa8\xe5\xb1\x8f\xe5\xbd\x95\xe5\x88\xb6\n" },
		{ "DisplayName", "BeginRecordFullViewport" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
		{ "ToolTip", "\xe5\x85\xa8\xe5\xb1\x8f\xe5\xbd\x95\xe5\x88\xb6" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGeneratedWebpPicturesPath;
	static void NewProp_bBegin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBegin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_InGeneratedWebpPicturesPath = { "InGeneratedWebpPicturesPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms, InGeneratedWebpPicturesPath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_bBegin_SetBit(void* Obj)
{
	((WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms*)Obj)->bBegin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_bBegin = { "bBegin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms), &Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_bBegin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_InGeneratedWebpPicturesPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::NewProp_bBegin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "BeginRecordFullViewport", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::WebPBaseBPLibrary_eventBeginRecordFullViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execBeginRecordFullViewport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InGeneratedWebpPicturesPath);
	P_GET_UBOOL_REF(Z_Param_Out_bBegin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebPBaseBPLibrary::BeginRecordFullViewport(Z_Param_WorldContextObject,Z_Param_InGeneratedWebpPicturesPath,Z_Param_Out_bBegin);
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function BeginRecordFullViewport

// Begin Class UWebPBaseBPLibrary Function EndRecord
struct Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics
{
	struct WebPBaseBPLibrary_eventEndRecord_Parms
	{
		UObject* WorldContextObject;
		FScriptDelegate InFinishWebpBPDegelete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebPBase" },
		{ "DisplayName", "EndRecord" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InFinishWebpBPDegelete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventEndRecord_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::NewProp_InFinishWebpBPDegelete = { "InFinishWebpBPDegelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventEndRecord_Parms, InFinishWebpBPDegelete), Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 756934392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::NewProp_InFinishWebpBPDegelete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "EndRecord", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::WebPBaseBPLibrary_eventEndRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::WebPBaseBPLibrary_eventEndRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execEndRecord)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InFinishWebpBPDegelete);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebPBaseBPLibrary::EndRecord(Z_Param_WorldContextObject,FWebPFinishGenerateMultiWebp(Z_Param_InFinishWebpBPDegelete));
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function EndRecord

// Begin Class UWebPBaseBPLibrary Function GetWebPBaseVersion
struct Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics
{
	struct WebPBaseBPLibrary_eventGetWebPBaseVersion_Parms
	{
		FString OutVersionInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebPBase" },
		{ "DisplayName", "GetWebPBaseVersion" },
		{ "Keywords", "Get Webp Version" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutVersionInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::NewProp_OutVersionInfo = { "OutVersionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventGetWebPBaseVersion_Parms, OutVersionInfo), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WebPBaseBPLibrary_eventGetWebPBaseVersion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPBaseBPLibrary_eventGetWebPBaseVersion_Parms), &Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::NewProp_OutVersionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "GetWebPBaseVersion", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::WebPBaseBPLibrary_eventGetWebPBaseVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::WebPBaseBPLibrary_eventGetWebPBaseVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execGetWebPBaseVersion)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutVersionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWebPBaseBPLibrary::GetWebPBaseVersion(Z_Param_Out_OutVersionInfo);
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function GetWebPBaseVersion

// Begin Class UWebPBaseBPLibrary Function LoadWebp
struct Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics
{
	struct WebPBaseBPLibrary_eventLoadWebp_Parms
	{
		UObject* WorldContextObject;
		FScriptDelegate InLoadAndShowWebpDegelete;
		FString InWebpFilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebPBase" },
		{ "DisplayName", "LoadWebp" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InLoadAndShowWebpDegelete;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InWebpFilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventLoadWebp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::NewProp_InLoadAndShowWebpDegelete = { "InLoadAndShowWebpDegelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventLoadWebp_Parms, InLoadAndShowWebpDegelete), Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3367595713
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::NewProp_InWebpFilePath = { "InWebpFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventLoadWebp_Parms, InWebpFilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::NewProp_InLoadAndShowWebpDegelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::NewProp_InWebpFilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "LoadWebp", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::WebPBaseBPLibrary_eventLoadWebp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::WebPBaseBPLibrary_eventLoadWebp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execLoadWebp)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InLoadAndShowWebpDegelete);
	P_GET_PROPERTY(FStrProperty,Z_Param_InWebpFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebPBaseBPLibrary::LoadWebp(Z_Param_WorldContextObject,FWebPLoadAndShowWebp(Z_Param_InLoadAndShowWebpDegelete),Z_Param_InWebpFilePath);
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function LoadWebp

// Begin Class UWebPBaseBPLibrary Function ReleaseLoadedWebp
struct Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics
{
	struct WebPBaseBPLibrary_eventReleaseLoadedWebp_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebP" },
		{ "DisplayName", "ReleaseLoadedWebp" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseBPLibrary_eventReleaseLoadedWebp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "ReleaseLoadedWebp", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::WebPBaseBPLibrary_eventReleaseLoadedWebp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::WebPBaseBPLibrary_eventReleaseLoadedWebp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execReleaseLoadedWebp)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebPBaseBPLibrary::ReleaseLoadedWebp(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function ReleaseLoadedWebp

// Begin Class UWebPBaseBPLibrary Function SetWebPAuth
struct Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebPBase" },
		{ "DisplayName", "SetAuth" },
		{ "Keywords", "Set Webp Auth" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseBPLibrary, nullptr, "SetWebPAuth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseBPLibrary::execSetWebPAuth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebPBaseBPLibrary::SetWebPAuth();
	P_NATIVE_END;
}
// End Class UWebPBaseBPLibrary Function SetWebPAuth

// Begin Class UWebPBaseBPLibrary
void UWebPBaseBPLibrary::StaticRegisterNativesUWebPBaseBPLibrary()
{
	UClass* Class = UWebPBaseBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginRecord", &UWebPBaseBPLibrary::execBeginRecord },
		{ "BeginRecordFullViewport", &UWebPBaseBPLibrary::execBeginRecordFullViewport },
		{ "EndRecord", &UWebPBaseBPLibrary::execEndRecord },
		{ "GetWebPBaseVersion", &UWebPBaseBPLibrary::execGetWebPBaseVersion },
		{ "LoadWebp", &UWebPBaseBPLibrary::execLoadWebp },
		{ "ReleaseLoadedWebp", &UWebPBaseBPLibrary::execReleaseLoadedWebp },
		{ "SetWebPAuth", &UWebPBaseBPLibrary::execSetWebPAuth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebPBaseBPLibrary);
UClass* Z_Construct_UClass_UWebPBaseBPLibrary_NoRegister()
{
	return UWebPBaseBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UWebPBaseBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WebPBaseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WebPBaseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecord, "BeginRecord" }, // 1714037102
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_BeginRecordFullViewport, "BeginRecordFullViewport" }, // 645224197
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_EndRecord, "EndRecord" }, // 3665821209
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_GetWebPBaseVersion, "GetWebPBaseVersion" }, // 2637486643
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_LoadWebp, "LoadWebp" }, // 3271895285
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_ReleaseLoadedWebp, "ReleaseLoadedWebp" }, // 1005424895
		{ &Z_Construct_UFunction_UWebPBaseBPLibrary_SetWebPAuth, "SetWebPAuth" }, // 2676572259
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPBaseBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebPBaseBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WebPBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPBaseBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPBaseBPLibrary_Statics::ClassParams = {
	&UWebPBaseBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPBaseBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebPBaseBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebPBaseBPLibrary()
{
	if (!Z_Registration_Info_UClass_UWebPBaseBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPBaseBPLibrary.OuterSingleton, Z_Construct_UClass_UWebPBaseBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebPBaseBPLibrary.OuterSingleton;
}
template<> WEBPBASE_API UClass* StaticClass<UWebPBaseBPLibrary>()
{
	return UWebPBaseBPLibrary::StaticClass();
}
UWebPBaseBPLibrary::UWebPBaseBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPBaseBPLibrary);
UWebPBaseBPLibrary::~UWebPBaseBPLibrary() {}
// End Class UWebPBaseBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebPBaseBPLibrary, UWebPBaseBPLibrary::StaticClass, TEXT("UWebPBaseBPLibrary"), &Z_Registration_Info_UClass_UWebPBaseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPBaseBPLibrary), 4018462861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_1956729139(TEXT("/Script/WebPBase"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_WebPBaseBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
