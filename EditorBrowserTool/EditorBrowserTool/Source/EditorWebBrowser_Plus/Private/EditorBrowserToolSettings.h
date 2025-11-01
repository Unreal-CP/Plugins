#pragma once

#include "UObject/Object.h"
#include "EditorBrowserToolSettings.generated.h"

// UCLASS宏声明，配置为编辑器每个项目的用户设置，使用默认配置
UCLASS(config = EditorPerProjectUserSettings, defaultconfig)
class UEditorBrowserToolSettings : public UObject
{
	GENERATED_BODY()

public:
	// 主页URL配置
	// config: 表示该属性会被保存到配置文件中
	// EditAnywhere: 可以在任意位置的属性编辑器中编辑
	// Category = WebBrowser: 在属性编辑器中归类为"WebBrowser"分类
	UPROPERTY(config, EditAnywhere, Category = WebBrowser)
	FString Homepage;

	// 收藏夹URL列表，存储用户收藏的网页
	UPROPERTY(config, EditAnywhere, Category = WebBrowser)
	TArray<FString> Favorite;

	// 浏览历史记录，存储用户访问过的网页URL
	UPROPERTY(config, EditAnywhere, Category = WebBrowser)
	TArray<FString> History;

	// 是否捕获所有快捷键
	// 默认值为true，表示浏览器会捕获并处理所有键盘快捷键
	UPROPERTY(config, EditAnywhere, Category = WebBrowser)
	bool bCaptureAllShortcuts = true;

	// 构造函数
	UEditorBrowserToolSettings();
};