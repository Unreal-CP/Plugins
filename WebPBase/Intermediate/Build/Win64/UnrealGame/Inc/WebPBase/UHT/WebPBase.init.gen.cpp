// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPBase_init() {}
	WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature();
	WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature();
	WEBPBASE_API UFunction* Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WebPBase;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WebPBase()
	{
		if (!Z_Registration_Info_UPackage__Script_WebPBase.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WebPBase_SampleWebPOneShotCallBackBP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WebPBase_WebPFinishGenerateMultiWebp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WebPBase_WebPLoadAndShowWebp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebPBase",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE00E4C1C,
				0x15AF52A4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WebPBase.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WebPBase.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WebPBase(Z_Construct_UPackage__Script_WebPBase, TEXT("/Script/WebPBase"), Z_Registration_Info_UPackage__Script_WebPBase, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE00E4C1C, 0x15AF52A4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
