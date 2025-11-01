#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

/** 编辑器网页浏览器样式管理类 */
class FEditorBrowserToolStyle
{
public:
	// 初始化样式系统
	static void Initialize();

	// 关闭样式系统，释放资源
	static void Shutdown();

	/** 重新加载Slate渲染器使用的纹理 */
	static void ReloadTextures();

	/** @return 返回网页浏览器使用的Slate样式集 */
	static const ISlateStyle& Get();

	// 获取样式集的名称
	static FName GetStyleSetName();

private:
	// 创建样式集实例
	static TSharedRef< class FSlateStyleSet > Create();

private:
	// 样式集实例的共享指针
	static TSharedPtr< class FSlateStyleSet > StyleInstance;
};