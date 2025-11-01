// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorBrowserToolSettings.h"

#ifdef EDITORBROWSERTOOL_EditorBrowserToolSettings_generated_h
#error "EditorBrowserToolSettings.generated.h already included, missing '#pragma once' in EditorBrowserToolSettings.h"
#endif
#define EDITORBROWSERTOOL_EditorBrowserToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorBrowserToolSettings ***********************************************
EDITORBROWSERTOOL_API UClass* Z_Construct_UClass_UEditorBrowserToolSettings_NoRegister();

#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorBrowserToolSettings(); \
	friend struct Z_Construct_UClass_UEditorBrowserToolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORBROWSERTOOL_API UClass* Z_Construct_UClass_UEditorBrowserToolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorBrowserToolSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EditorBrowserTool"), Z_Construct_UClass_UEditorBrowserToolSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorBrowserToolSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorBrowserToolSettings(UEditorBrowserToolSettings&&) = delete; \
	UEditorBrowserToolSettings(const UEditorBrowserToolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorBrowserToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorBrowserToolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorBrowserToolSettings) \
	NO_API virtual ~UEditorBrowserToolSettings();


#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h_7_PROLOG
#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h_10_INCLASS_NO_PURE_DECLS \
	FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorBrowserToolSettings;

// ********** End Class UEditorBrowserToolSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Plus_Private_EditorBrowserToolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
