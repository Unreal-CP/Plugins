// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebPBase/Public/Type/WebPBaseType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPBaseType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_WebPBase();
WEBPBASE_API UEnum* Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType();
WEBPBASE_API UEnum* Z_Construct_UEnum_WebPBase_EWebPBaseProcessType();
WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature();
WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature();
WEBPBASE_API UScriptStruct* Z_Construct_UScriptStruct_FWebPBasePictureInformation();
// End Cross Module References

// Begin Delegate FWebPFinishGenerateMultiWebp
struct Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics
{
	struct _Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms
	{
		bool bFinishGenerate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFinishGenerate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishGenerate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::NewProp_bFinishGenerate_SetBit(void* Obj)
{
	((_Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms*)Obj)->bFinishGenerate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::NewProp_bFinishGenerate = { "bFinishGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms), &Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::NewProp_bFinishGenerate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::NewProp_bFinishGenerate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebPBase, nullptr, "WebPFinishGenerateMultiWebp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::_Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::_Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebPFinishGenerateMultiWebp_DelegateWrapper(const FScriptDelegate& WebPFinishGenerateMultiWebp, bool bFinishGenerate)
{
	struct _Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms
	{
		bool bFinishGenerate;
	};
	_Script_WebPBase_eventWebPFinishGenerateMultiWebp_Parms Parms;
	Parms.bFinishGenerate=bFinishGenerate ? true : false;
	WebPFinishGenerateMultiWebp.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FWebPFinishGenerateMultiWebp

// Begin Delegate FWebPLoadAndShowWebp
struct Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics
{
	struct _Script_WebPBase_eventWebPLoadAndShowWebp_Parms
	{
		bool bLoad;
		UTexture2D* OutWebpPicture;
		int32 WebpWidth;
		int32 WebpHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutWebpPicture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WebpWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WebpHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_bLoad_SetBit(void* Obj)
{
	((_Script_WebPBase_eventWebPLoadAndShowWebp_Parms*)Obj)->bLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_bLoad = { "bLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WebPBase_eventWebPLoadAndShowWebp_Parms), &Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_bLoad_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_OutWebpPicture = { "OutWebpPicture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebPBase_eventWebPLoadAndShowWebp_Parms, OutWebpPicture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_WebpWidth = { "WebpWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebPBase_eventWebPLoadAndShowWebp_Parms, WebpWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_WebpHeight = { "WebpHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebPBase_eventWebPLoadAndShowWebp_Parms, WebpHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_bLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_OutWebpPicture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_WebpWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::NewProp_WebpHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebPBase, nullptr, "WebPLoadAndShowWebp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::_Script_WebPBase_eventWebPLoadAndShowWebp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::_Script_WebPBase_eventWebPLoadAndShowWebp_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebPLoadAndShowWebp_DelegateWrapper(const FScriptDelegate& WebPLoadAndShowWebp, bool bLoad, UTexture2D* OutWebpPicture, int32 WebpWidth, int32 WebpHeight)
{
	struct _Script_WebPBase_eventWebPLoadAndShowWebp_Parms
	{
		bool bLoad;
		UTexture2D* OutWebpPicture;
		int32 WebpWidth;
		int32 WebpHeight;
	};
	_Script_WebPBase_eventWebPLoadAndShowWebp_Parms Parms;
	Parms.bLoad=bLoad ? true : false;
	Parms.OutWebpPicture=OutWebpPicture;
	Parms.WebpWidth=WebpWidth;
	Parms.WebpHeight=WebpHeight;
	WebPLoadAndShowWebp.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FWebPLoadAndShowWebp

// Begin ScriptStruct FWebPBasePictureInformation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebPBasePictureInformation;
class UScriptStruct* FWebPBasePictureInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebPBasePictureInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebPBasePictureInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebPBasePictureInformation, (UObject*)Z_Construct_UPackage__Script_WebPBase(), TEXT("WebPBasePictureInformation"));
	}
	return Z_Registration_Info_UScriptStruct_WebPBasePictureInformation.OuterSingleton;
}
template<> WEBPBASE_API UScriptStruct* StaticStruct<FWebPBasePictureInformation>()
{
	return FWebPBasePictureInformation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X0_MetaData[] = {
		{ "Category", "WebP" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y0_MetaData[] = {
		{ "Category", "WebP" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X1_MetaData[] = {
		{ "Category", "WebP" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y1_MetaData[] = {
		{ "Category", "WebP" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebPBasePictureInformation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_X0 = { "X0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWebPBasePictureInformation, X0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X0_MetaData), NewProp_X0_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_Y0 = { "Y0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWebPBasePictureInformation, Y0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y0_MetaData), NewProp_Y0_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_X1 = { "X1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWebPBasePictureInformation, X1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X1_MetaData), NewProp_X1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_Y1 = { "Y1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWebPBasePictureInformation, Y1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y1_MetaData), NewProp_Y1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_X0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_Y0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_X1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewProp_Y1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WebPBase,
	nullptr,
	&NewStructOps,
	"WebPBasePictureInformation",
	Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::PropPointers),
	sizeof(FWebPBasePictureInformation),
	alignof(FWebPBasePictureInformation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWebPBasePictureInformation()
{
	if (!Z_Registration_Info_UScriptStruct_WebPBasePictureInformation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebPBasePictureInformation.InnerSingleton, Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WebPBasePictureInformation.InnerSingleton;
}
// End ScriptStruct FWebPBasePictureInformation

// Begin Enum EWebPBaseProcessType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebPBaseProcessType;
static UEnum* EWebPBaseProcessType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWebPBaseProcessType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWebPBaseProcessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebPBase_EWebPBaseProcessType, (UObject*)Z_Construct_UPackage__Script_WebPBase(), TEXT("EWebPBaseProcessType"));
	}
	return Z_Registration_Info_UEnum_EWebPBaseProcessType.OuterSingleton;
}
template<> WEBPBASE_API UEnum* StaticEnum<EWebPBaseProcessType>()
{
	return EWebPBaseProcessType_StaticEnum();
}
struct Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Generating.Name", "EWebPBaseProcessType::Generating" },
		{ "Max.Name", "EWebPBaseProcessType::Max" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
		{ "None.Name", "EWebPBaseProcessType::None" },
		{ "Recording.Name", "EWebPBaseProcessType::Recording" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWebPBaseProcessType::None", (int64)EWebPBaseProcessType::None },
		{ "EWebPBaseProcessType::Recording", (int64)EWebPBaseProcessType::Recording },
		{ "EWebPBaseProcessType::Generating", (int64)EWebPBaseProcessType::Generating },
		{ "EWebPBaseProcessType::Max", (int64)EWebPBaseProcessType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WebPBase,
	nullptr,
	"EWebPBaseProcessType",
	"EWebPBaseProcessType",
	Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WebPBase_EWebPBaseProcessType()
{
	if (!Z_Registration_Info_UEnum_EWebPBaseProcessType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebPBaseProcessType.InnerSingleton, Z_Construct_UEnum_WebPBase_EWebPBaseProcessType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWebPBaseProcessType.InnerSingleton;
}
// End Enum EWebPBaseProcessType

// Begin Enum EWebPBaseLoadAndShowType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType;
static UEnum* EWebPBaseLoadAndShowType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType, (UObject*)Z_Construct_UPackage__Script_WebPBase(), TEXT("EWebPBaseLoadAndShowType"));
	}
	return Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType.OuterSingleton;
}
template<> WEBPBASE_API UEnum* StaticEnum<EWebPBaseLoadAndShowType>()
{
	return EWebPBaseLoadAndShowType_StaticEnum();
}
struct Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Loading.Name", "EWebPBaseLoadAndShowType::Loading" },
		{ "Max.Name", "EWebPBaseLoadAndShowType::Max" },
		{ "ModuleRelativePath", "Public/Type/WebPBaseType.h" },
		{ "None.Name", "EWebPBaseLoadAndShowType::None" },
		{ "Showing.Name", "EWebPBaseLoadAndShowType::Showing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWebPBaseLoadAndShowType::None", (int64)EWebPBaseLoadAndShowType::None },
		{ "EWebPBaseLoadAndShowType::Loading", (int64)EWebPBaseLoadAndShowType::Loading },
		{ "EWebPBaseLoadAndShowType::Showing", (int64)EWebPBaseLoadAndShowType::Showing },
		{ "EWebPBaseLoadAndShowType::Max", (int64)EWebPBaseLoadAndShowType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WebPBase,
	nullptr,
	"EWebPBaseLoadAndShowType",
	"EWebPBaseLoadAndShowType",
	Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType()
{
	if (!Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType.InnerSingleton, Z_Construct_UEnum_WebPBase_EWebPBaseLoadAndShowType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType.InnerSingleton;
}
// End Enum EWebPBaseLoadAndShowType

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWebPBaseProcessType_StaticEnum, TEXT("EWebPBaseProcessType"), &Z_Registration_Info_UEnum_EWebPBaseProcessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3905748012U) },
		{ EWebPBaseLoadAndShowType_StaticEnum, TEXT("EWebPBaseLoadAndShowType"), &Z_Registration_Info_UEnum_EWebPBaseLoadAndShowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 429121517U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWebPBasePictureInformation::StaticStruct, Z_Construct_UScriptStruct_FWebPBasePictureInformation_Statics::NewStructOps, TEXT("WebPBasePictureInformation"), &Z_Registration_Info_UScriptStruct_WebPBasePictureInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebPBasePictureInformation), 3506958783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_3654915215(TEXT("/Script/WebPBase"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Type_WebPBaseType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
