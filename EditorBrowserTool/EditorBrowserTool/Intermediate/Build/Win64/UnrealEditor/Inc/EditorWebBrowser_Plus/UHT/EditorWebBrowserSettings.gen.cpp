// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorWebBrowserSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEditorWebBrowserSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EDITORWEBBROWSER_PLUS_API UClass* Z_Construct_UClass_UEditorWebBrowserSettings();
EDITORWEBBROWSER_PLUS_API UClass* Z_Construct_UClass_UEditorWebBrowserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EditorWebBrowser_Plus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEditorWebBrowserSettings ************************************************
void UEditorWebBrowserSettings::StaticRegisterNativesUEditorWebBrowserSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorWebBrowserSettings;
UClass* UEditorWebBrowserSettings::GetPrivateStaticClass()
{
	using TClass = UEditorWebBrowserSettings;
	if (!Z_Registration_Info_UClass_UEditorWebBrowserSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorWebBrowserSettings"),
			Z_Registration_Info_UClass_UEditorWebBrowserSettings.InnerSingleton,
			StaticRegisterNativesUEditorWebBrowserSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEditorWebBrowserSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorWebBrowserSettings_NoRegister()
{
	return UEditorWebBrowserSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorWebBrowserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UCLASS\xe5\xae\x8f\xe5\xa3\xb0\xe6\x98\x8e\xef\xbc\x8c\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xba\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe6\xaf\x8f\xe4\xb8\xaa\xe9\xa1\xb9\xe7\x9b\xae\xe7\x9a\x84\xe7\x94\xa8\xe6\x88\xb7\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe9\xbb\x98\xe8\xae\xa4\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "IncludePath", "EditorWebBrowserSettings.h" },
		{ "ModuleRelativePath", "Private/EditorWebBrowserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS\xe5\xae\x8f\xe5\xa3\xb0\xe6\x98\x8e\xef\xbc\x8c\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xba\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe6\xaf\x8f\xe4\xb8\xaa\xe9\xa1\xb9\xe7\x9b\xae\xe7\x9a\x84\xe7\x94\xa8\xe6\x88\xb7\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe9\xbb\x98\xe8\xae\xa4\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Homepage_MetaData[] = {
		{ "Category", "WebBrowser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb\xe9\xa1\xb5URL\xe9\x85\x8d\xe7\xbd\xae\n// config: \xe8\xa1\xa8\xe7\xa4\xba\xe8\xaf\xa5\xe5\xb1\x9e\xe6\x80\xa7\xe4\xbc\x9a\xe8\xa2\xab\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\n// EditAnywhere: \xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe4\xbb\xbb\xe6\x84\x8f\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe7\xbc\x96\xe8\xbe\x91\n// Category = WebBrowser: \xe5\x9c\xa8\xe5\xb1\x9e\xe6\x80\xa7\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe5\xbd\x92\xe7\xb1\xbb\xe4\xb8\xba\"WebBrowser\"\xe5\x88\x86\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Private/EditorWebBrowserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe9\xa1\xb5URL\xe9\x85\x8d\xe7\xbd\xae\nconfig: \xe8\xa1\xa8\xe7\xa4\xba\xe8\xaf\xa5\xe5\xb1\x9e\xe6\x80\xa7\xe4\xbc\x9a\xe8\xa2\xab\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\nEditAnywhere: \xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe4\xbb\xbb\xe6\x84\x8f\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe7\xbc\x96\xe8\xbe\x91\nCategory = WebBrowser: \xe5\x9c\xa8\xe5\xb1\x9e\xe6\x80\xa7\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe5\xbd\x92\xe7\xb1\xbb\xe4\xb8\xba\"WebBrowser\"\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Favorite_MetaData[] = {
		{ "Category", "WebBrowser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xb6\xe8\x97\x8f\xe5\xa4\xb9URL\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe5\xad\x98\xe5\x82\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x94\xb6\xe8\x97\x8f\xe7\x9a\x84\xe7\xbd\x91\xe9\xa1\xb5\n" },
#endif
		{ "ModuleRelativePath", "Private/EditorWebBrowserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe8\x97\x8f\xe5\xa4\xb9URL\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe5\xad\x98\xe5\x82\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x94\xb6\xe8\x97\x8f\xe7\x9a\x84\xe7\xbd\x91\xe9\xa1\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_History_MetaData[] = {
		{ "Category", "WebBrowser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb5\x8f\xe8\xa7\x88\xe5\x8e\x86\xe5\x8f\xb2\xe8\xae\xb0\xe5\xbd\x95\xef\xbc\x8c\xe5\xad\x98\xe5\x82\xa8\xe7\x94\xa8\xe6\x88\xb7\xe8\xae\xbf\xe9\x97\xae\xe8\xbf\x87\xe7\x9a\x84\xe7\xbd\x91\xe9\xa1\xb5URL\n" },
#endif
		{ "ModuleRelativePath", "Private/EditorWebBrowserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb5\x8f\xe8\xa7\x88\xe5\x8e\x86\xe5\x8f\xb2\xe8\xae\xb0\xe5\xbd\x95\xef\xbc\x8c\xe5\xad\x98\xe5\x82\xa8\xe7\x94\xa8\xe6\x88\xb7\xe8\xae\xbf\xe9\x97\xae\xe8\xbf\x87\xe7\x9a\x84\xe7\xbd\x91\xe9\xa1\xb5URL" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAllShortcuts_MetaData[] = {
		{ "Category", "WebBrowser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x8d\x95\xe8\x8e\xb7\xe6\x89\x80\xe6\x9c\x89\xe5\xbf\xab\xe6\x8d\xb7\xe9\x94\xae\n// \xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xb8\xbatrue\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe4\xbc\x9a\xe6\x8d\x95\xe8\x8e\xb7\xe5\xb9\xb6\xe5\xa4\x84\xe7\x90\x86\xe6\x89\x80\xe6\x9c\x89\xe9\x94\xae\xe7\x9b\x98\xe5\xbf\xab\xe6\x8d\xb7\xe9\x94\xae\n" },
#endif
		{ "ModuleRelativePath", "Private/EditorWebBrowserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x8d\x95\xe8\x8e\xb7\xe6\x89\x80\xe6\x9c\x89\xe5\xbf\xab\xe6\x8d\xb7\xe9\x94\xae\n\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xb8\xbatrue\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe4\xbc\x9a\xe6\x8d\x95\xe8\x8e\xb7\xe5\xb9\xb6\xe5\xa4\x84\xe7\x90\x86\xe6\x89\x80\xe6\x9c\x89\xe9\x94\xae\xe7\x9b\x98\xe5\xbf\xab\xe6\x8d\xb7\xe9\x94\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Homepage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Favorite_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Favorite;
	static const UECodeGen_Private::FStrPropertyParams NewProp_History_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_History;
	static void NewProp_bCaptureAllShortcuts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAllShortcuts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWebBrowserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_Homepage = { "Homepage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorWebBrowserSettings, Homepage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Homepage_MetaData), NewProp_Homepage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_Favorite_Inner = { "Favorite", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_Favorite = { "Favorite", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorWebBrowserSettings, Favorite), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Favorite_MetaData), NewProp_Favorite_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorWebBrowserSettings, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) };
void Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_bCaptureAllShortcuts_SetBit(void* Obj)
{
	((UEditorWebBrowserSettings*)Obj)->bCaptureAllShortcuts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_bCaptureAllShortcuts = { "bCaptureAllShortcuts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditorWebBrowserSettings), &Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_bCaptureAllShortcuts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAllShortcuts_MetaData), NewProp_bCaptureAllShortcuts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorWebBrowserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_Homepage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_Favorite_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_Favorite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWebBrowserSettings_Statics::NewProp_bCaptureAllShortcuts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWebBrowserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditorWebBrowserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorWebBrowser_Plus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWebBrowserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorWebBrowserSettings_Statics::ClassParams = {
	&UEditorWebBrowserSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditorWebBrowserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWebBrowserSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWebBrowserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorWebBrowserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorWebBrowserSettings()
{
	if (!Z_Registration_Info_UClass_UEditorWebBrowserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorWebBrowserSettings.OuterSingleton, Z_Construct_UClass_UEditorWebBrowserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorWebBrowserSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWebBrowserSettings);
UEditorWebBrowserSettings::~UEditorWebBrowserSettings() {}
// ********** End Class UEditorWebBrowserSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorWebBrowserSettings_h__Script_EditorWebBrowser_Plus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorWebBrowserSettings, UEditorWebBrowserSettings::StaticClass, TEXT("UEditorWebBrowserSettings"), &Z_Registration_Info_UClass_UEditorWebBrowserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorWebBrowserSettings), 207767795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorWebBrowserSettings_h__Script_EditorWebBrowser_Plus_1141124328(TEXT("/Script/EditorWebBrowser_Plus"),
	Z_CompiledInDeferFile_FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorWebBrowserSettings_h__Script_EditorWebBrowser_Plus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorWebBrowserSettings_h__Script_EditorWebBrowser_Plus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
