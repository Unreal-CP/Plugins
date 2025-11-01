#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

// 前向声明，避免头文件包含
class SEditorBrowserTool;
struct FBrowserContextSettings;

// 编辑器网页浏览器模块类，继承自Unreal的模块接口
class FEditorBrowserToolModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	// 模块启动时调用
	virtual void StartupModule() override;
	// 模块关闭时调用
	virtual void ShutdownModule() override;

	/** 这些函数将绑定到命令（默认情况下会打开插件窗口） */
	// 打开不同网页浏览器的点击处理函数
	void OpenWebBrowser1Clicked();
	void OpenWebBrowser2Clicked();
	void OpenWebBrowser3Clicked();
	void OpenWebBrowser4Clicked();

private:
	// 生成插件标签页的回调函数
	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);
	// 根据索引获取网页浏览器标签文本
	FText GetWebBrowserLabelWithIndex(uint32 Idx);
	// 根据浏览器索引获取标签页标题
	FText GetWebBrowserTabLabel(int32 BrowserIdx);

private:
	// 插件命令列表，用于处理UI命令
	TSharedPtr<class FUICommandList> PluginCommands;
	// 浏览器上下文设置，存储浏览器相关配置
	TSharedPtr<FBrowserContextSettings> BrowserContextSettings;
	// 网页浏览器控件数组，支持最多4个浏览器实例
	TSharedPtr<SEditorBrowserTool> WebBrowserWidget[4];

private:
	/** 添加工具栏按钮 */
	void AddToolbarButtons(FToolBarBuilder& Builder);
	/** 生成网页浏览器下拉菜单 */
	TSharedRef<SWidget> GenerateWebBrowserMenu();
};
