// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebPBase/Public/Subsystem/WebPBaseOneShotSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPBaseOneShotSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_WebPBase();
WEBPBASE_API UClass* Z_Construct_UClass_UWebPBaseOneShotSubsystem();
WEBPBASE_API UClass* Z_Construct_UClass_UWebPBaseOneShotSubsystem_NoRegister();
WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature();
// End Cross Module References

// Begin Delegate FSampleWebPOneShotCallBackBP
struct Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics
{
	struct _Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms
	{
		bool bFinishGenerate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x8f\x8d\xe5\xb0\x84\xe5\x88\xb0\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe6\x8e\xa5\xe5\x8f\xa3\xe5\x9b\x9e\xe8\xb0\x83\n" },
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseOneShotSubsystem.h" },
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xb0\x84\xe5\x88\xb0\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe6\x8e\xa5\xe5\x8f\xa3\xe5\x9b\x9e\xe8\xb0\x83" },
	};
#endif // WITH_METADATA
	static void NewProp_bFinishGenerate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishGenerate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::NewProp_bFinishGenerate_SetBit(void* Obj)
{
	((_Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms*)Obj)->bFinishGenerate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::NewProp_bFinishGenerate = { "bFinishGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms), &Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::NewProp_bFinishGenerate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::NewProp_bFinishGenerate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebPBase, nullptr, "SampleWebPOneShotCallBackBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::_Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::_Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSampleWebPOneShotCallBackBP_DelegateWrapper(const FScriptDelegate& SampleWebPOneShotCallBackBP, bool bFinishGenerate)
{
	struct _Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms
	{
		bool bFinishGenerate;
	};
	_Script_WebPBase_eventSampleWebPOneShotCallBackBP_Parms Parms;
	Parms.bFinishGenerate=bFinishGenerate ? true : false;
	SampleWebPOneShotCallBackBP.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSampleWebPOneShotCallBackBP

// Begin Class UWebPBaseOneShotSubsystem Function BeginSampleWebPOneShot
struct Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics
{
	struct WebPBaseOneShotSubsystem_eventBeginSampleWebPOneShot_Parms
	{
		FScriptDelegate InSampleWebPOneShotCallBackBP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Webp|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseOneShotSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InSampleWebPOneShotCallBackBP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::NewProp_InSampleWebPOneShotCallBackBP = { "InSampleWebPOneShotCallBackBP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseOneShotSubsystem_eventBeginSampleWebPOneShot_Parms, InSampleWebPOneShotCallBackBP), Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 686559954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::NewProp_InSampleWebPOneShotCallBackBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseOneShotSubsystem, nullptr, "BeginSampleWebPOneShot", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::WebPBaseOneShotSubsystem_eventBeginSampleWebPOneShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::WebPBaseOneShotSubsystem_eventBeginSampleWebPOneShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseOneShotSubsystem::execBeginSampleWebPOneShot)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InSampleWebPOneShotCallBackBP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginSampleWebPOneShot(FSampleWebPOneShotCallBackBP(Z_Param_InSampleWebPOneShotCallBackBP));
	P_NATIVE_END;
}
// End Class UWebPBaseOneShotSubsystem Function BeginSampleWebPOneShot

// Begin Class UWebPBaseOneShotSubsystem Function SampleWebPOneShotCallBackMethod
struct Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics
{
	struct WebPBaseOneShotSubsystem_eventSampleWebPOneShotCallBackMethod_Parms
	{
		bool bGenerateWebp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseOneShotSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGenerateWebp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWebp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::NewProp_bGenerateWebp_SetBit(void* Obj)
{
	((WebPBaseOneShotSubsystem_eventSampleWebPOneShotCallBackMethod_Parms*)Obj)->bGenerateWebp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::NewProp_bGenerateWebp = { "bGenerateWebp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPBaseOneShotSubsystem_eventSampleWebPOneShotCallBackMethod_Parms), &Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::NewProp_bGenerateWebp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::NewProp_bGenerateWebp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseOneShotSubsystem, nullptr, "SampleWebPOneShotCallBackMethod", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::WebPBaseOneShotSubsystem_eventSampleWebPOneShotCallBackMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::WebPBaseOneShotSubsystem_eventSampleWebPOneShotCallBackMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseOneShotSubsystem::execSampleWebPOneShotCallBackMethod)
{
	P_GET_UBOOL(Z_Param_bGenerateWebp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SampleWebPOneShotCallBackMethod(Z_Param_bGenerateWebp);
	P_NATIVE_END;
}
// End Class UWebPBaseOneShotSubsystem Function SampleWebPOneShotCallBackMethod

// Begin Class UWebPBaseOneShotSubsystem Function ScreenShotCallback
struct Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics
{
	struct WebPBaseOneShotSubsystem_eventScreenShotCallback_Parms
	{
		int32 InWidth;
		int32 InHeight;
		TArray<FColor> InColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseOneShotSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseOneShotSubsystem_eventScreenShotCallback_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseOneShotSubsystem_eventScreenShotCallback_Parms, InHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors_Inner = { "InColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors = { "InColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseOneShotSubsystem_eventScreenShotCallback_Parms, InColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColors_MetaData), NewProp_InColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseOneShotSubsystem, nullptr, "ScreenShotCallback", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::WebPBaseOneShotSubsystem_eventScreenShotCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::WebPBaseOneShotSubsystem_eventScreenShotCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseOneShotSubsystem::execScreenShotCallback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_InColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScreenShotCallback(Z_Param_InWidth,Z_Param_InHeight,Z_Param_Out_InColors);
	P_NATIVE_END;
}
// End Class UWebPBaseOneShotSubsystem Function ScreenShotCallback

// Begin Class UWebPBaseOneShotSubsystem
void UWebPBaseOneShotSubsystem::StaticRegisterNativesUWebPBaseOneShotSubsystem()
{
	UClass* Class = UWebPBaseOneShotSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginSampleWebPOneShot", &UWebPBaseOneShotSubsystem::execBeginSampleWebPOneShot },
		{ "SampleWebPOneShotCallBackMethod", &UWebPBaseOneShotSubsystem::execSampleWebPOneShotCallBackMethod },
		{ "ScreenShotCallback", &UWebPBaseOneShotSubsystem::execScreenShotCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebPBaseOneShotSubsystem);
UClass* Z_Construct_UClass_UWebPBaseOneShotSubsystem_NoRegister()
{
	return UWebPBaseOneShotSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem/WebPBaseOneShotSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseOneShotSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPBaseOneShotSubsystem_BeginSampleWebPOneShot, "BeginSampleWebPOneShot" }, // 412701218
		{ &Z_Construct_UFunction_UWebPBaseOneShotSubsystem_SampleWebPOneShotCallBackMethod, "SampleWebPOneShotCallBackMethod" }, // 3539953483
		{ &Z_Construct_UFunction_UWebPBaseOneShotSubsystem_ScreenShotCallback, "ScreenShotCallback" }, // 2194704488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPBaseOneShotSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WebPBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics::ClassParams = {
	&UWebPBaseOneShotSubsystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebPBaseOneShotSubsystem()
{
	if (!Z_Registration_Info_UClass_UWebPBaseOneShotSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPBaseOneShotSubsystem.OuterSingleton, Z_Construct_UClass_UWebPBaseOneShotSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebPBaseOneShotSubsystem.OuterSingleton;
}
template<> WEBPBASE_API UClass* StaticClass<UWebPBaseOneShotSubsystem>()
{
	return UWebPBaseOneShotSubsystem::StaticClass();
}
UWebPBaseOneShotSubsystem::UWebPBaseOneShotSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPBaseOneShotSubsystem);
UWebPBaseOneShotSubsystem::~UWebPBaseOneShotSubsystem() {}
// End Class UWebPBaseOneShotSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebPBaseOneShotSubsystem, UWebPBaseOneShotSubsystem::StaticClass, TEXT("UWebPBaseOneShotSubsystem"), &Z_Registration_Info_UClass_UWebPBaseOneShotSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPBaseOneShotSubsystem), 407261931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_2041586691(TEXT("/Script/WebPBase"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseOneShotSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
