#include "EditorBrowserToolSettings.h"

UEditorBrowserToolSettings::UEditorBrowserToolSettings()
{
	Homepage = TEXT("https://www.bing.com/");
	Favorite.Add(TEXT("https://www.bilibili.com/"));
	Favorite.Add(TEXT("https://www.youtube.com/"));
	Favorite.Add(TEXT("https://www.yanweb.top/"));
}