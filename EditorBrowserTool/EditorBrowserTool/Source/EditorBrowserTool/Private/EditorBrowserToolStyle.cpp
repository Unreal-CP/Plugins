#include "EditorBrowserToolStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/AppStyle.h"

TSharedPtr< FSlateStyleSet > FEditorBrowserToolStyle::StyleInstance = NULL;

void FEditorBrowserToolStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FEditorBrowserToolStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FEditorBrowserToolStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("EditorBrowserToolStyle"));
	return StyleSetName;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".otf") ), __VA_ARGS__ )

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon40x40(40.0f, 40.0f);

TSharedRef< FSlateStyleSet > FEditorBrowserToolStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("EditorBrowserToolStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("EditorBrowserTool")->GetBaseDir() / TEXT("Resources"));

	Style->Set("EditorBrowserTool.Icon", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon40x40));
	Style->Set("EditorBrowserTool.Icon.Small", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon20x20));
	Style->Set("EditorBrowserTool.Icon.Tab", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon16x16));
	Style->Set("EditorBrowserTool.OpenPluginWindow", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon40x40));

	FButtonStyle NavigateButton = FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton");
	NavigateButton.SetDisabled(FSlateNoResource());
	NavigateButton.SetNormalPadding(FMargin(2, 2, 2, 2));
	NavigateButton.SetPressedPadding(FMargin(2, 2, 2, 2));
	Style->Set("NavigateButton", NavigateButton);

	FButtonStyle AdsButton = FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton");
	NavigateButton.SetDisabled(FSlateNoResource());
	NavigateButton.SetHovered(FSlateNoResource());
	NavigateButton.SetPressed(FSlateNoResource());
	NavigateButton.SetNormalPadding(FMargin(0, 0, 0, 0));
	NavigateButton.SetPressedPadding(FMargin(0, 0, 0, 0));
	Style->Set("EditorBrowserTool.Ads.Button", NavigateButton);

	return Style;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT

void FEditorBrowserToolStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FEditorBrowserToolStyle::Get()
{
	return *StyleInstance;
}
