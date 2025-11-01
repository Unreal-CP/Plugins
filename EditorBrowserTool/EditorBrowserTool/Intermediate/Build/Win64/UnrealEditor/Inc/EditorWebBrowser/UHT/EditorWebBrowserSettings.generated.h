// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorWebBrowserSettings.h"

#ifdef EDITORWEBBROWSER_EditorWebBrowserSettings_generated_h
#error "EditorWebBrowserSettings.generated.h already included, missing '#pragma once' in EditorWebBrowserSettings.h"
#endif
#define EDITORWEBBROWSER_EditorWebBrowserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorWebBrowserSettings ************************************************
EDITORWEBBROWSER_API UClass* Z_Construct_UClass_UEditorWebBrowserSettings_NoRegister();

#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorWebBrowserSettings(); \
	friend struct Z_Construct_UClass_UEditorWebBrowserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORWEBBROWSER_API UClass* Z_Construct_UClass_UEditorWebBrowserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorWebBrowserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EditorWebBrowser"), Z_Construct_UClass_UEditorWebBrowserSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorWebBrowserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorWebBrowserSettings(UEditorWebBrowserSettings&&) = delete; \
	UEditorWebBrowserSettings(const UEditorWebBrowserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorWebBrowserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorWebBrowserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorWebBrowserSettings) \
	NO_API virtual ~UEditorWebBrowserSettings();


#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h_10_PROLOG
#define FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorWebBrowserSettings;

// ********** End Class UEditorWebBrowserSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_X_Plugins_EditorWebBrowser_Plus_Source_EditorWebBrowser_Private_EditorWebBrowserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
