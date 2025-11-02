#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

struct FBrowserContextSettings;
class IWebBrowserWindow;
class IWebBrowserPopupFeatures;
class IWebBrowserDialog;
struct FWebNavigationRequest;
enum class EWebBrowserDialogEventResponse;
class SWebBrowserView;

// 网页浏览器标签页控件，继承自Slate复合控件
class SWebBrowserTab : public SCompoundWidget
{
public:
	SWebBrowserTab();

	// Slate声明宏，定义控件的参数
	SLATE_BEGIN_ARGS(SWebBrowserTab) { }
	SLATE_END_ARGS()

public:
	// 构造函数，初始化控件
	void Construct(const FArguments& InArgs, TSharedPtr<FBrowserContextSettings> Settings);

private:
	// 浏览器核心功能
	void LoadURL(FString NewURL);		// 加载指定URL
	void Reload();						// 重新加载当前页面
	void StopLoad();					// 停止加载

	// 状态获取函数
	FText GetTitleText() const;			// 获取页面标题
	FText GetAddressBarUrlText() const;	// 获取地址栏URL文本
	bool IsLoaded() const;				// 检查页面是否已加载完成
	bool IsLoading() const;				// 检查页面是否正在加载


	// UI事件处理函数
	FReply OnBackClicked();		// 后退按钮点击
	FReply OnForwardClicked();	// 前进按钮点击
	FReply OnReloadClicked();	// 刷新按钮点击
	FReply OnHomeClicked();		// 主页按钮点击
	FReply OnStarClicked();		// 收藏按钮点击

	// UI状态函数
	FText GetReloadButtonText() const;	// 获取刷新按钮文本（刷新/停止）
	void OnUrlTextCommitted(const FText& NewText, ETextCommit::Type CommitType); // 地址栏文本提交
	EVisibility GetViewportVisibility() const; // 获取浏览器视口可见性

	/** 获取加载动画是否应该可见 */
	EVisibility GetLoadingThrobberVisibility() const;
	// 获取菜单内容（右键菜单等）
	TSharedRef<SWidget> OnGetMenuContent();

	// 导航功能
	bool CanGoBack() const;		// 是否可以后退
	void GoBack();				// 执行后退
	bool CanGoForward() const;	// 是否可以前进
	void GoForward();			// 执行前进

	// 广告相关功能
	void HideAds();

	// 收藏夹功能
	bool IsCurrentPageStared() const;			// 当前页面是否已收藏
	void AddToFavorite(const FString& Page);	// 添加到收藏夹
	void RemoveFromFavorite(const FString& Page); // 从收藏夹移除

	// 历史记录功能
	void ClearHistory();					// 清除历史记录
	void AddToHistory(const FString& Page);	// 添加到历史记录

	// 获取当前URL
	FString GetCurrentUrl() const;

protected:
	// 浏览器事件回调函数
	bool HandleBrowserCreateWindow(const TWeakPtr<IWebBrowserWindow>& NewBrowserWindow, const TWeakPtr<IWebBrowserPopupFeatures>& PopupFeatures); // 处理创建新窗口
	bool HandleBrowserCloseWindow(const TWeakPtr<IWebBrowserWindow>& BrowserWindowPtr); // 处理关闭窗口
	bool HandleBrowserBeforeBrowse(const FString& Url, const FWebNavigationRequest& Request); // 处理导航前事件
	EWebBrowserDialogEventResponse HandleShowDialog(const TWeakPtr<IWebBrowserDialog>& DialogPtr); // 处理对话框显示
	void HandleBrowserUrlChanged(const FText& Url); // 处理URL改变
	bool HandleLoadAdsUrl(const FString& Method, const FString& Url, FString& Response); // 处理广告URL加载

	// 覆盖层管理（用于弹出窗口等）
	bool IsShowingOverlay() const; // 是否正在显示覆盖层
	void AddWebOverlay(const TSharedRef< SWidget >& Content); // 添加网页覆盖层
	void RemoveWebOverlay(const TSharedRef< SWidget >& Content); // 移除网页覆盖层
	void RemoveAllOverlayWindows(); // 移除所有覆盖层窗口

private:
	// 浏览器覆盖层控件映射（管理弹出窗口）
	TMap<TWeakPtr<IWebBrowserWindow>, TWeakPtr<SWebBrowserView>> BrowserOverlayWidgets;
	// 浏览器容器，用于承载浏览器视图
	TSharedPtr<SOverlay> BrowserContainer;

	// 核心浏览器视图组件
	TSharedPtr<SWebBrowserView> BrowserView;
	// 地址栏输入框
	TSharedPtr<SEditableTextBox> InputText;

	// 是否显示初始加载动画
	bool bShowInitialThrobber = true;

	// 静态变量，控制广告显示（静态因为只需要显示一次）
	static bool bShowAds;

	// 静态变量，页面URL最大长度限制
	static int MaxPageUrlLength;

	// 静态变量，广告源URL
	static FString AdsFeedUrl;

	// 配置文件页面URL
	FString ProfilePage;

	// 浏览器窗口控件映射（管理浏览器窗口实例）
	TMap<TWeakPtr<IWebBrowserWindow>, TWeakPtr<SWindow>> BrowserWindowWidgets;
};