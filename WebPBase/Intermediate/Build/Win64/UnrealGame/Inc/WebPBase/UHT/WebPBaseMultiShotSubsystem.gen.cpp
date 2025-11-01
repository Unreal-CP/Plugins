// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebPBase/Public/Subsystem/WebPBaseMultiShotSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPBaseMultiShotSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_WebPBase();
WEBPBASE_API UClass* Z_Construct_UClass_UWebPBaseMultiShotSubsystem();
WEBPBASE_API UClass* Z_Construct_UClass_UWebPBaseMultiShotSubsystem_NoRegister();
// End Cross Module References

// Begin Class UWebPBaseMultiShotSubsystem Function SampleWebPOneMultiCallBackMethod
struct Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics
{
	struct WebPBaseMultiShotSubsystem_eventSampleWebPOneMultiCallBackMethod_Parms
	{
		bool bGenerateWebp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseMultiShotSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGenerateWebp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWebp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::NewProp_bGenerateWebp_SetBit(void* Obj)
{
	((WebPBaseMultiShotSubsystem_eventSampleWebPOneMultiCallBackMethod_Parms*)Obj)->bGenerateWebp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::NewProp_bGenerateWebp = { "bGenerateWebp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPBaseMultiShotSubsystem_eventSampleWebPOneMultiCallBackMethod_Parms), &Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::NewProp_bGenerateWebp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::NewProp_bGenerateWebp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseMultiShotSubsystem, nullptr, "SampleWebPOneMultiCallBackMethod", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::WebPBaseMultiShotSubsystem_eventSampleWebPOneMultiCallBackMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::WebPBaseMultiShotSubsystem_eventSampleWebPOneMultiCallBackMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseMultiShotSubsystem::execSampleWebPOneMultiCallBackMethod)
{
	P_GET_UBOOL(Z_Param_bGenerateWebp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SampleWebPOneMultiCallBackMethod(Z_Param_bGenerateWebp);
	P_NATIVE_END;
}
// End Class UWebPBaseMultiShotSubsystem Function SampleWebPOneMultiCallBackMethod

// Begin Class UWebPBaseMultiShotSubsystem Function ScreenShotCallback
struct Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics
{
	struct WebPBaseMultiShotSubsystem_eventScreenShotCallback_Parms
	{
		int32 InWidth;
		int32 InHeight;
		TArray<FColor> InColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseMultiShotSubsystem.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseMultiShotSubsystem_eventScreenShotCallback_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseMultiShotSubsystem_eventScreenShotCallback_Parms, InHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors_Inner = { "InColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors = { "InColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPBaseMultiShotSubsystem_eventScreenShotCallback_Parms, InColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColors_MetaData), NewProp_InColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::NewProp_InColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPBaseMultiShotSubsystem, nullptr, "ScreenShotCallback", nullptr, nullptr, Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::WebPBaseMultiShotSubsystem_eventScreenShotCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::WebPBaseMultiShotSubsystem_eventScreenShotCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPBaseMultiShotSubsystem::execScreenShotCallback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_InColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScreenShotCallback(Z_Param_InWidth,Z_Param_InHeight,Z_Param_Out_InColors);
	P_NATIVE_END;
}
// End Class UWebPBaseMultiShotSubsystem Function ScreenShotCallback

// Begin Class UWebPBaseMultiShotSubsystem
void UWebPBaseMultiShotSubsystem::StaticRegisterNativesUWebPBaseMultiShotSubsystem()
{
	UClass* Class = UWebPBaseMultiShotSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SampleWebPOneMultiCallBackMethod", &UWebPBaseMultiShotSubsystem::execSampleWebPOneMultiCallBackMethod },
		{ "ScreenShotCallback", &UWebPBaseMultiShotSubsystem::execScreenShotCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebPBaseMultiShotSubsystem);
UClass* Z_Construct_UClass_UWebPBaseMultiShotSubsystem_NoRegister()
{
	return UWebPBaseMultiShotSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem/WebPBaseMultiShotSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/WebPBaseMultiShotSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_SampleWebPOneMultiCallBackMethod, "SampleWebPOneMultiCallBackMethod" }, // 460928820
		{ &Z_Construct_UFunction_UWebPBaseMultiShotSubsystem_ScreenShotCallback, "ScreenShotCallback" }, // 1586921460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPBaseMultiShotSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WebPBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics::ClassParams = {
	&UWebPBaseMultiShotSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebPBaseMultiShotSubsystem()
{
	if (!Z_Registration_Info_UClass_UWebPBaseMultiShotSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPBaseMultiShotSubsystem.OuterSingleton, Z_Construct_UClass_UWebPBaseMultiShotSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebPBaseMultiShotSubsystem.OuterSingleton;
}
template<> WEBPBASE_API UClass* StaticClass<UWebPBaseMultiShotSubsystem>()
{
	return UWebPBaseMultiShotSubsystem::StaticClass();
}
UWebPBaseMultiShotSubsystem::UWebPBaseMultiShotSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPBaseMultiShotSubsystem);
UWebPBaseMultiShotSubsystem::~UWebPBaseMultiShotSubsystem() {}
// End Class UWebPBaseMultiShotSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebPBaseMultiShotSubsystem, UWebPBaseMultiShotSubsystem::StaticClass, TEXT("UWebPBaseMultiShotSubsystem"), &Z_Registration_Info_UClass_UWebPBaseMultiShotSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPBaseMultiShotSubsystem), 301753968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_244503446(TEXT("/Script/WebPBase"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebPBase_Source_WebPBase_Public_Subsystem_WebPBaseMultiShotSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
