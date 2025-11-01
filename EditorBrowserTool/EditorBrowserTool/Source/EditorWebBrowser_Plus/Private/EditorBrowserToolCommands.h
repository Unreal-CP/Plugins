#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorBrowserToolStyle.h"

// 编辑器网页浏览器命令类，继承自TCommands模板类
// TCommands是Unreal Engine用于管理一组相关命令的模板类
class FEditorBrowserToolCommands : public TCommands<FEditorBrowserToolCommands>
{
public:
	// 构造函数
	FEditorBrowserToolCommands()
		// 调用父类TCommands的构造函数
		// 参数说明：
		// TEXT("EditorBrowserTool") - 命令集的上下文名称
		// NSLOCTEXT("Contexts", "EditorBrowserTool", "EditorBrowserTool Plugin") - 本地化的显示名称
		// NAME_None - 父上下文名称（无父上下文）
		// FEditorBrowserToolStyle::GetStyleSetName() - 关联的样式集名称
		: TCommands<FEditorBrowserToolCommands>(TEXT("EditorBrowserTool"),
			NSLOCTEXT("Contexts", "EditorBrowserTool", "EditorBrowserTool Plugin"),
			NAME_None,
			FEditorBrowserToolStyle::GetStyleSetName())
	{
	}

	// TCommands<> 接口实现
	// 注册所有命令，在此函数中创建和初始化各个命令实例
	virtual void RegisterCommands() override;

public:
	// 打开不同网页浏览器实例的命令
	// 每个命令对应一个独立的浏览器窗口/标签页
	TSharedPtr< FUICommandInfo > OpenWebBrowser1;  // 打开第1个浏览器
	TSharedPtr< FUICommandInfo > OpenWebBrowser2;  // 打开第2个浏览器
	TSharedPtr< FUICommandInfo > OpenWebBrowser3;  // 打开第3个浏览器
	TSharedPtr< FUICommandInfo > OpenWebBrowser4;  // 打开第4个浏览器
};