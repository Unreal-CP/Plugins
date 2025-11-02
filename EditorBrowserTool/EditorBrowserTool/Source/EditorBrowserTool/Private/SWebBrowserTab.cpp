#include "SWebBrowserTab.h"

#include "EditorBrowserToolStyle.h"
#include "EditorBrowserToolSettings.h"

#include "IWebBrowserSingleton.h"
#include "WebBrowserModule.h"
#include "IWebBrowserCookieManager.h"
#include "IWebBrowserDialog.h"
#include "IWebBrowserWindow.h"

#include "EditorFontGlyphs.h"
#include "EditorStyle.h"
#include "Widgets/Images/SThrobber.h"
#include "Widgets/SNullWidget.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Styling/AppStyle.h"


#define LOCTEXT_NAMESPACE "WebBrowserTab"

// 静态成员变量初始化
bool SWebBrowserTab::bShowAds = false;  // 是否显示广告
int SWebBrowserTab::MaxPageUrlLength = 50;  // 页面URL显示的最大长度

// 广告源URL
FString SWebBrowserTab::AdsFeedUrl = TEXT("http://104.238.158.97/editor_web_browser/index.php");

// 匿名命名空间，定义图标字符（使用FontAwesome字体）
namespace
{
	FText BackIcon = FText::FromString(FString(TEXT("\xf04a")));      // 后退图标
	FText ForwardIcon = FText::FromString(FString(TEXT("\xf04e")));   // 前进图标
	FText ReloadIcon = FText::FromString(FString(TEXT("\xf021")));    // 刷新图标
	FText StopIcon = FText::FromString(FString(TEXT("\xf00d")));      // 停止图标
	FText MenuIcon = FText::FromString(FString(TEXT("\xf0c9")));      // 菜单图标
	FText StarIcon = FText::FromString(FString(TEXT("\xf005")));      // 收藏图标
	FText HomeIcon = FText::FromString(FString(TEXT("\xf015")));      // 主页图标
}

SWebBrowserTab::SWebBrowserTab()
{
	ProfilePage = TEXT("https://www.unrealengine.com");
}

// 构建函数，创建浏览器UI
void SWebBrowserTab::Construct(const FArguments& InArgs, TSharedPtr<FBrowserContextSettings> Settings)
{
	ChildSlot
		[
			SNew(SVerticalBox)  // 垂直布局
				+ SVerticalBox::Slot()  // 工具栏槽位
				.AutoHeight()  // 自动高度
				[
					SNew(SHorizontalBox)  // 水平布局的工具栏
						// 后退按钮
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Center)
						[
							SNew(SButton)
								.IsEnabled(this, &SWebBrowserTab::CanGoBack)  // 根据能否后退启用/禁用
								.OnClicked(this, &SWebBrowserTab::OnBackClicked)  // 点击事件
								.ButtonStyle(FEditorBrowserToolStyle::Get(), "NavigateButton")  // 使用自定义样式
								[
									SNew(STextBlock)
										.Text(BackIcon)  // 显示后退图标
										.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))  // 使用FontAwesome字体
								]
						]
						// 前进按钮
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Center)
						.AutoWidth()
						[
							SNew(SButton)
								.IsEnabled(this, &SWebBrowserTab::CanGoForward)
								.OnClicked(this, &SWebBrowserTab::OnForwardClicked)
								.ButtonStyle(FEditorBrowserToolStyle::Get(), "NavigateButton")
								[
									SNew(STextBlock)
										.Text(ForwardIcon)
										.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))
								]
						]
						// 主页按钮
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SButton)
								.OnClicked(this, &SWebBrowserTab::OnHomeClicked)
								.ButtonStyle(FEditorBrowserToolStyle::Get(), "NavigateButton")
								[
									SNew(STextBlock)
										.Text(HomeIcon)
										.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))
								]
						]
						// 刷新/停止按钮
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SButton)
								.OnClicked(this, &SWebBrowserTab::OnReloadClicked)
								.ButtonStyle(FEditorBrowserToolStyle::Get(), "NavigateButton")
								[
									SNew(STextBlock)
										.Text(this, &SWebBrowserTab::GetReloadButtonText)  // 动态文本（刷新/停止）
										.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))
								]
						]
						// 地址栏和收藏按钮
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Fill)
						.Padding(5.f, 5.f)
						[
							SNew(SOverlay)  // 覆盖层，用于在地址栏上叠加收藏按钮
								+ SOverlay::Slot()
								[
									SAssignNew(InputText, SEditableTextBox)  // 地址栏输入框
										.OnTextCommitted(this, &SWebBrowserTab::OnUrlTextCommitted)  // 文本提交事件
										.Text(this, &SWebBrowserTab::GetAddressBarUrlText)  // 显示当前URL
										.SelectAllTextWhenFocused(true)  // 获得焦点时全选文本
										.ClearKeyboardFocusOnCommit(true)  // 提交时清除键盘焦点
										.RevertTextOnEscape(true)  // 按ESC恢复原文本
								]
								+ SOverlay::Slot()
								.VAlign(VAlign_Center)
								.HAlign(HAlign_Right)
								[
									SNew(SButton)
										.OnClicked(this, &SWebBrowserTab::OnStarClicked)  // 收藏按钮点击
										.ButtonStyle(FEditorBrowserToolStyle::Get(), "NavigateButton")
										.ForegroundColor_Lambda([this]() {
										// 根据当前页面是否已收藏改变颜色
										return IsCurrentPageStared() ? FLinearColor(1.f, 0.5f, 0.f, 1.f) : FLinearColor(1.f, 1.f, 1.f, 0.8f);
											})
										[
											SNew(STextBlock)
												.Text(StarIcon)
												.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))
										]
								]
						]
						// 菜单按钮
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SComboButton)  // 组合按钮，点击显示下拉菜单
								.ContentPadding(0)
								.HasDownArrow(false)  // 不显示下拉箭头
								.ForegroundColor(FSlateColor::UseForeground())
								.ComboButtonStyle(FAppStyle::Get(), "SimpleComboButton")
								.OnGetMenuContent(this, &SWebBrowserTab::OnGetMenuContent)  // 获取菜单内容
								.ButtonContent()
								[
									SNew(STextBlock)
										.Text(MenuIcon)
										.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))
								]
						]
				]
				// 浏览器内容区域
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(SOverlay)  // 覆盖层布局
						// 主浏览器视图
						+ SOverlay::Slot()
						[
							SNew(SVerticalBox)
								+ SVerticalBox::Slot()
								[
									SAssignNew(BrowserContainer, SOverlay)  // 浏览器容器，用于承载浏览器和弹出窗口
										+ SOverlay::Slot()
										[
											SAssignNew(BrowserView, SWebBrowserView)  // 主浏览器视图
												.ShowErrorMessage(true)  // 显示错误信息
												.SupportsTransparency(true)  // 支持透明
												.InitialURL(GetDefault<UEditorBrowserToolSettings>()->Homepage)  // 初始URL从设置中读取
												.PopupMenuMethod(EPopupMethod::UseCurrentWindow)  // 弹出菜单使用当前窗口
												.OnUrlChanged(this, &SWebBrowserTab::HandleBrowserUrlChanged)  // URL改变回调
												.OnBeforeNavigation(this, &SWebBrowserTab::HandleBrowserBeforeBrowse)  // 导航前回调
												.OnCreateWindow(this, &SWebBrowserTab::HandleBrowserCreateWindow)  // 创建窗口回调
												.OnCloseWindow(this, &SWebBrowserTab::HandleBrowserCloseWindow)  // 关闭窗口回调
												.OnShowDialog(this, &SWebBrowserTab::HandleShowDialog)  // 显示对话框回调
												.ContextSettings(*Settings)  // 浏览器上下文设置
												.BrowserFrameRate(180)  // 添加这一行，将帧率设置为90
										]
								]
						]
						// 广告区域（底部）
						//+ SOverlay::Slot()
						//.HAlign(HAlign_Fill)
						//.VAlign(VAlign_Bottom)
						//[
						//	SNew(SBorder)
						//		.BorderBackgroundColor(FSlateColor(FLinearColor(0.f, 0.f, 0.f, 0.99f)))  // 半透明黑色背景
						//		.BorderImage(FAppStyle::GetBrush("Graph.StateNode.Body"))
						//		.Padding(FMargin(10, 5, 5, 10))
						//		.Visibility_Lambda([this] { return bShowAds ? EVisibility::Visible : EVisibility::Collapsed; })  // 根据广告显示状态控制可见性
						//		[
						//			SNew(SBox)
						//				.MinDesiredHeight(300)  // 最小高度300
						//				[
						//					SNew(SOverlay)
						//						// 广告浏览器视图
						//						+ SOverlay::Slot()
						//						.HAlign(HAlign_Fill)
						//						.VAlign(VAlign_Fill)
						//						[
						//							SNew(SWebBrowserView)
						//								.SupportsTransparency(true)
						//								.InitialURL(AdsFeedUrl)  // 加载广告URL
						//								.OnLoadUrl(this, &SWebBrowserTab::HandleLoadAdsUrl)  // 广告链接点击处理
						//								.ContextSettings(*Settings)
						//						]
						//						// 关闭广告按钮
						//						+ SOverlay::Slot()
						//						.VAlign(EVerticalAlignment::VAlign_Top)
						//						.HAlign(HAlign_Right)
						//						[
						//							SNew(SButton)
						//								.OnClicked_Lambda([this] { HideAds(); return FReply::Handled(); })  // 点击隐藏广告
						//								.Content()
						//								[
						//									SNew(STextBlock)
						//										.Text(StopIcon)
						//										.Font(FAppStyle::Get().GetFontStyle("FontAwesome.16"))
						//								]
						//						]
						//				]
						//		]
						//	]
						// 加载动画
						+ SOverlay::Slot()
						.HAlign(HAlign_Center)
						.VAlign(VAlign_Center)
						[
							SNew(SCircularThrobber)  // 圆形加载动画
								.Radius(10.0f)
								.ToolTipText(LOCTEXT("LoadingThrobberToolTip", "正在加载页面..."))  // 悬停提示 - 翻译为中文
								.Visibility(this, &SWebBrowserTab::GetLoadingThrobberVisibility)  // 根据加载状态控制可见性
						]
				]
		];
}

// 处理浏览器创建新窗口（弹出窗口）
bool SWebBrowserTab::HandleBrowserCreateWindow(const TWeakPtr<IWebBrowserWindow>& NewBrowserWindow, const TWeakPtr<IWebBrowserPopupFeatures>& PopupFeatures)
{
	TSharedPtr<IWebBrowserPopupFeatures> PopupFeaturesSP = PopupFeatures.Pin();
	check(PopupFeatures.IsValid())  // 验证弹出特性有效

		TSharedPtr<IWebBrowserWindow> NewBrowserWindowSP = NewBrowserWindow.Pin();
	check(NewBrowserWindowSP.IsValid());  // 验证新浏览器窗口有效

	// 创建新的浏览器视图用于弹出窗口
	TSharedRef<SWebBrowserView> NewBrowserToOverlay =
		SNew(SWebBrowserView, NewBrowserWindowSP)
		.ShowErrorMessage(false)  // 不显示错误信息
		.SupportsTransparency(true)
		.OnCreateWindow(this, &SWebBrowserTab::HandleBrowserCreateWindow)  // 递归处理嵌套弹出窗口
		.OnCloseWindow(this, &SWebBrowserTab::HandleBrowserCloseWindow)
		.OnBeforeNavigation(this, &SWebBrowserTab::HandleBrowserBeforeBrowse)
		.OnShowDialog(this, &SWebBrowserTab::HandleShowDialog);

	// 将新浏览器添加到覆盖层
	AddWebOverlay(NewBrowserToOverlay);
	BrowserOverlayWidgets.Add(NewBrowserWindow, NewBrowserToOverlay);  // 记录映射关系

	return true;  // 表示已处理创建窗口请求
}

// 处理浏览器关闭窗口
bool SWebBrowserTab::HandleBrowserCloseWindow(const TWeakPtr<IWebBrowserWindow>& BrowserWindowPtr)
{
	UE_LOG(LogTemp, Log, TEXT("HandleBrowserCloseWindow"));

	TSharedPtr<IWebBrowserWindow> BrowserWindow = BrowserWindowPtr.Pin();
	if (BrowserWindow.IsValid())
	{
		if (!BrowserWindow->IsClosing())
		{
			// 如果浏览器未设置关闭，则告诉浏览器关闭，这会再次回调此处理函数
			BrowserWindow->CloseBrowser(false);
		}
		else
		{
			// 关闭匹配的覆盖层窗口
			const TWeakPtr<SWebBrowserView>* FoundBrowserViewWidgetPtr = BrowserOverlayWidgets.Find(BrowserWindow);
			if (FoundBrowserViewWidgetPtr != nullptr)
			{
				TSharedPtr<SWebBrowserView> FoundBrowserViewWidget = FoundBrowserViewWidgetPtr->Pin();
				if (FoundBrowserViewWidget.IsValid())
				{
					RemoveWebOverlay(FoundBrowserViewWidget.ToSharedRef());  // 从覆盖层移除
				}
				BrowserOverlayWidgets.Remove(BrowserWindow);  // 从映射中移除
				return true;
			}

			// 关闭匹配的独立窗口
			const TWeakPtr<SWindow>* FoundBrowserWindowWidgetPtr = BrowserWindowWidgets.Find(BrowserWindow);
			if (FoundBrowserWindowWidgetPtr != nullptr)
			{
				TSharedPtr<SWindow> FoundBrowserWindowWidget = FoundBrowserWindowWidgetPtr->Pin();
				if (FoundBrowserWindowWidget.IsValid())
				{
					FoundBrowserWindowWidget->RequestDestroyWindow();  // 请求销毁窗口
				}
				BrowserWindowWidgets.Remove(BrowserWindow);
				return true;
			}
		}
	}

	return false;  // 未处理关闭请求
}

// 检查是否正在显示覆盖层
bool SWebBrowserTab::IsShowingOverlay() const
{
	// 如果浏览器容器包含多于一个插槽，则表示正在显示覆盖层浏览器
	return BrowserContainer->GetNumWidgets() > 1;
}

// 从覆盖层移除指定控件
void SWebBrowserTab::RemoveWebOverlay(const TSharedRef< SWidget >& Content)
{
	if (IsShowingOverlay())
	{
		BrowserContainer->RemoveSlot(Content);
	}
}

// 移除所有覆盖层窗口
void SWebBrowserTab::RemoveAllOverlayWindows()
{
	for (auto Pair : BrowserOverlayWidgets)
	{
		TSharedPtr<SWebBrowserView> BrowserViewWidget = Pair.Value.Pin();
		RemoveWebOverlay(BrowserViewWidget.ToSharedRef());
	}
	BrowserOverlayWidgets.Empty();
}

// 处理浏览器URL改变
void SWebBrowserTab::HandleBrowserUrlChanged(const FText& Url)
{
	AddToHistory(Url.ToString());
}

// 处理广告URL加载
bool SWebBrowserTab::HandleLoadAdsUrl(const FString& Method, const FString& Url, FString& Response)
{
	// 如果点击了市场链接并且正在显示广告
	if (Url.StartsWith(FString(TEXT("https://www.unrealengine.com"))) && bShowAds)
	{
		HideAds();  // 隐藏广告
		LoadURL(Url);  // 加载市场页面
		return true;  // 表示已处理
	}
	return false;  // 未处理
}

// 处理浏览器导航前事件
bool SWebBrowserTab::HandleBrowserBeforeBrowse(const FString& Url, const FWebNavigationRequest& Request)
{
	// 注释掉的代码：如果是主框架则添加到历史记录
	// 现在改为在HandleBrowserUrlChanged中添加历史记录
	// UE_LOG(LogTemp, Log, TEXT("HandleBrowserBeforeBrowse Main:%d Redirect:%d URL: %s"), Request.bIsMainFrame, Request.bIsRedirect, *Url);
	return false;  // 返回false允许导航继续
}

// 处理显示对话框
EWebBrowserDialogEventResponse SWebBrowserTab::HandleShowDialog(const TWeakPtr<IWebBrowserDialog>& DialogPtr)
{
	// 注意：由于OS X崩溃问题，我们继续所有对话框的默认操作以防止它们使用原生窗口显示。
	// 未来应该为这些对话框添加自定义处理程序/UI
	EWebBrowserDialogEventResponse WebDialogHandling = EWebBrowserDialogEventResponse::Continue;
	return WebDialogHandling;
}

// 添加网页覆盖层
void SWebBrowserTab::AddWebOverlay(const TSharedRef< SWidget >& Content)
{
	if (BrowserContainer.IsValid())
	{
		BrowserContainer->AddSlot()
			.Padding(0.0f)
			[
				Content
			];
	}
}

// 加载指定URL
void SWebBrowserTab::LoadURL(FString NewURL)
{
	RemoveAllOverlayWindows();  // 先移除所有覆盖层窗口

	if (BrowserView.IsValid())
	{
		BrowserView->LoadURL(NewURL);
	}
}

// 重新加载当前页面
void SWebBrowserTab::Reload()
{
	if (BrowserView.IsValid())
	{
		BrowserView->Reload();
	}
}

// 停止加载
void SWebBrowserTab::StopLoad()
{
	if (BrowserView.IsValid())
	{
		BrowserView->StopLoad();
	}
}

// 获取页面标题文本
FText SWebBrowserTab::GetTitleText() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->GetTitleText();
	}
	return LOCTEXT("InvalidWindow", "浏览器窗口无效或不支持//Invalid or unsupported browser window");  // 翻译为中文
}

// 获取地址栏URL文本
FText SWebBrowserTab::GetAddressBarUrlText() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->GetAddressBarUrlText();
	}
	return FText::GetEmpty();
}

// 检查页面是否已加载完成
bool SWebBrowserTab::IsLoaded() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->IsLoaded();
	}

	return false;
}

// 检查页面是否正在加载
bool SWebBrowserTab::IsLoading() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->IsLoading();
	}

	return false;
}

// 检查是否可以后退
bool SWebBrowserTab::CanGoBack() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->CanGoBack();
	}
	return false;
}

// 执行后退
void SWebBrowserTab::GoBack()
{
	if (BrowserView.IsValid())
	{
		BrowserView->GoBack();
	}
}

// 后退按钮点击处理
FReply SWebBrowserTab::OnBackClicked()
{
	GoBack();
	return FReply::Handled();  // 表示已处理事件
}

// 检查是否可以前进
bool SWebBrowserTab::CanGoForward() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->CanGoForward();
	}
	return false;
}

// 执行前进
void SWebBrowserTab::GoForward()
{
	if (BrowserView.IsValid())
	{
		BrowserView->GoForward();
	}
}

// 隐藏广告
void SWebBrowserTab::HideAds()
{
	bShowAds = false;
}

// 检查当前页面是否已收藏
bool SWebBrowserTab::IsCurrentPageStared() const
{
	return GetMutableDefault<UEditorBrowserToolSettings>()->Favorite.Contains(GetCurrentUrl());
}

// 添加到收藏夹
void SWebBrowserTab::AddToFavorite(const FString& Page)
{
	GetMutableDefault<UEditorBrowserToolSettings>()->Favorite.Remove(Page);  // 先移除（避免重复）
	GetMutableDefault<UEditorBrowserToolSettings>()->Favorite.Insert(Page, 0);  // 插入到开头
	GetMutableDefault<UEditorBrowserToolSettings>()->SaveConfig();  // 保存配置
}

// 从收藏夹移除
void SWebBrowserTab::RemoveFromFavorite(const FString& Page)
{
	GetMutableDefault<UEditorBrowserToolSettings>()->Favorite.Remove(Page);
	GetMutableDefault<UEditorBrowserToolSettings>()->SaveConfig();
}

// 清除历史记录
void SWebBrowserTab::ClearHistory()
{
	GetMutableDefault<UEditorBrowserToolSettings>()->History.Empty();
	GetMutableDefault<UEditorBrowserToolSettings>()->SaveConfig();
}

// 添加到历史记录
void SWebBrowserTab::AddToHistory(const FString& Page)
{
	const int MaxCount = 20;  // 历史记录最大数量
	GetMutableDefault<UEditorBrowserToolSettings>()->History.Remove(Page);  // 先移除（避免重复）
	GetMutableDefault<UEditorBrowserToolSettings>()->History.Insert(Page, 0);  // 插入到开头
	if (GetMutableDefault<UEditorBrowserToolSettings>()->History.Num() > MaxCount)
		GetMutableDefault<UEditorBrowserToolSettings>()->History.SetNum(MaxCount);  // 限制数量

	GetMutableDefault<UEditorBrowserToolSettings>()->SaveConfig();  // 保存配置
}

// 获取当前URL
FString SWebBrowserTab::GetCurrentUrl() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->GetUrl();
	}

	return FString();
}

// 前进按钮点击处理
FReply SWebBrowserTab::OnForwardClicked()
{
	GoForward();
	return FReply::Handled();
}

// 获取刷新按钮文本（根据加载状态返回刷新或停止图标）
FText SWebBrowserTab::GetReloadButtonText() const
{
	if (BrowserView.IsValid())
	{
		if (BrowserView->IsLoading())
		{
			return StopIcon;  // 正在加载时显示停止图标
		}
	}
	return ReloadIcon;  // 否则显示刷新图标
}

// 刷新/停止按钮点击处理
FReply SWebBrowserTab::OnReloadClicked()
{
	if (IsLoading())
	{
		StopLoad();  // 正在加载时停止
	}
	else
	{
		Reload();  // 否则重新加载
	}
	return FReply::Handled();
}

// 主页按钮点击处理
FReply SWebBrowserTab::OnHomeClicked()
{
	LoadURL(GetDefault<UEditorBrowserToolSettings>()->Homepage);  // 加载设置中的主页
	return FReply::Handled();
}

// 收藏按钮点击处理
FReply SWebBrowserTab::OnStarClicked()
{
	FString CurrentUrl = GetCurrentUrl();
	if (IsCurrentPageStared())
		RemoveFromFavorite(GetCurrentUrl());  // 已收藏则移除
	else
		AddToFavorite(GetCurrentUrl());  // 未收藏则添加

	return FReply::Handled();
}

// 地址栏文本提交处理
void SWebBrowserTab::OnUrlTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	if (CommitType == ETextCommit::OnEnter)  // 按回车提交
	{
		LoadURL(NewText.ToString());  // 加载输入的URL
	}
}

// 获取视口可见性（控制初始加载动画）
EVisibility SWebBrowserTab::GetViewportVisibility() const
{
	if (!bShowInitialThrobber || BrowserView->IsInitialized())
	{
		return EVisibility::Visible;  // 显示浏览器
	}
	return EVisibility::Hidden;  // 隐藏浏览器（显示加载动画）
}

// 获取加载动画可见性
EVisibility SWebBrowserTab::GetLoadingThrobberVisibility() const
{
	if (bShowInitialThrobber && !BrowserView->IsInitialized())
	{
		return EVisibility::Visible;  // 显示加载动画
	}
	return EVisibility::Hidden;  // 隐藏加载动画
}

// 获取菜单内容
TSharedRef<SWidget> SWebBrowserTab::OnGetMenuContent()
{
	FMenuBuilder SettingsMenu(true, nullptr);  // 创建菜单构建器

	// 收藏夹子菜单
	SettingsMenu.AddWrapperSubMenu
	(
		LOCTEXT("Favorite", "收藏夹"),  // 菜单项文本 - 翻译为中文
		LOCTEXT("Favorite_ToolTip", "收藏的页面"),  // 工具提示 - 翻译为中文
		FOnGetContent::CreateLambda([this]() 
			{  // 创建子菜单内容的Lambda
				FMenuBuilder FavoriteMenu(true, nullptr);

				// 遍历收藏夹中的每个页面
				for (const FString& Page : GetDefault<UEditorBrowserToolSettings>()->Favorite)
				{
					FString PageUrlToDisplay = Page;
					// 截断过长的URL
					if (PageUrlToDisplay.Len() > SWebBrowserTab::MaxPageUrlLength)
						PageUrlToDisplay = PageUrlToDisplay.Left(SWebBrowserTab::MaxPageUrlLength) + TEXT("...");

					// 添加收藏夹菜单项
					FavoriteMenu.AddMenuEntry(FText::FromString(PageUrlToDisplay), TAttribute<FText>(), FSlateIcon(),
						FUIAction(FExecuteAction::CreateLambda([this, Page] {
							LoadURL(Page);  // 点击时加载该页面
							})));
				}
				return FavoriteMenu.MakeWidget();
				}
		),
		FSlateIcon()
	);

	// 历史记录子菜单
	SettingsMenu.AddWrapperSubMenu
	(
		LOCTEXT("History", "历史记录"),  // 菜单名称
		LOCTEXT("History_ToolTip", "最近打开的页面"),  // 工具提示
		FOnGetContent::CreateLambda([this]() 
		{
			FMenuBuilder HistoryMenu(true, nullptr);
			const auto& Settings = *GetDefault<UEditorBrowserToolSettings>();
        
			// 获取历史记录并限制最多显示15条（取最新的15条）
			TArray<FString> DisplayHistory = Settings.History;
			const int32 MaxHistoryCount = 15;
			if (DisplayHistory.Num() > MaxHistoryCount)
			{
				// 从末尾截取最新的15条（删除前面多余的旧记录）
				DisplayHistory.RemoveAt(0, DisplayHistory.Num() - MaxHistoryCount);
			}

			// 遍历处理后的历史记录（最多15条）
			for (const FString& Page : DisplayHistory)
			{
				FString PageUrlToDisplay = Page;
				// 截断过长的URL
				if (PageUrlToDisplay.Len() > SWebBrowserTab::MaxPageUrlLength)
					PageUrlToDisplay = PageUrlToDisplay.Left(SWebBrowserTab::MaxPageUrlLength) + TEXT("...");

				// 添加历史记录菜单项
				HistoryMenu.AddMenuEntry(
					FText::FromString(PageUrlToDisplay), 
					TAttribute<FText>(), 
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateLambda([this, Page] {
						LoadURL(Page);  // 点击时加载该页面
					})));
			}

			// 只有存在历史记录时才显示分隔线和清除按钮
			if (DisplayHistory.Num() > 0)
			{
				HistoryMenu.AddSeparator();  // 添加分隔线
            
				// 添加清除历史记录菜单项
				HistoryMenu.AddMenuEntry(
					LOCTEXT("ClearHistory", "清除历史记录"), 
					LOCTEXT("ClearHistory_ToolTip", "清除所有历史记录"), 
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateLambda([this] {
						ClearHistory();  // 点击时清除历史记录
					})),
					NAME_None, 
					EUserInterfaceActionType::Button);
			}
			return HistoryMenu.MakeWidget();
		}),
		FSlateIcon()
	);

	// 在系统浏览器中打开
	SettingsMenu.AddMenuEntry
	(
		LOCTEXT("SystemBrowser", "在系统浏览器中打开"),  // 翻译为中文
		LOCTEXT("SystemBrowser_ToolTip", "在默认系统浏览器中打开"),  // 翻译为中文
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([this] {
			FPlatformProcess::LaunchURL(*GetCurrentUrl(), NULL, NULL);  // 使用系统默认浏览器打开
			})),
		NAME_None, EUserInterfaceActionType::Button);

		// 设置为首页（复选框类型）
		SettingsMenu.AddMenuEntry
		(
			LOCTEXT("SetHome", "设置为首页"),
			LOCTEXT("SetHome_ToolTip", "将当前页面设置为首页"),
			FSlateIcon(),
			FUIAction
			(
				FExecuteAction::CreateLambda([this] 
				{
					if (!GetCurrentUrl().IsEmpty())
					{
						// 将当前页面设置为首页
						GetMutableDefault<UEditorBrowserToolSettings>()->Homepage = GetCurrentUrl();
						GetMutableDefault<UEditorBrowserToolSettings>()->SaveConfig();
					}
				}
			),
			FCanExecuteAction(),
			FGetActionCheckState::CreateLambda
			([this] {
				// 检查当前页面是否是首页，如果是则显示勾选状态
				return (GetCurrentUrl() == GetDefault<UEditorBrowserToolSettings>()->Homepage && !GetCurrentUrl().IsEmpty())? 
					ECheckBoxState::Checked: ECheckBoxState::Unchecked;})
			),
			NAME_None,
			EUserInterfaceActionType::Check  // 改为复选框类型
		);

	// 捕获编辑器快捷键选项
	SettingsMenu.AddMenuEntry
	(
		LOCTEXT("CaptureShortcut", "捕获编辑器快捷键"),  // 翻译为中文
		LOCTEXT("CaptureShortcut_ToolTip", "捕获所有编辑器快捷键。此选项可防止在使用网页浏览器时触发绑定到快捷键的编辑器操作。"),  // 翻译为中文
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([this] {
			// 切换快捷键捕获设置
			GetMutableDefault<UEditorBrowserToolSettings>()->bCaptureAllShortcuts = !GetDefault<UEditorBrowserToolSettings>()->bCaptureAllShortcuts;
			GetMutableDefault<UEditorBrowserToolSettings>()->SaveConfig();
			}),
			FCanExecuteAction(),
			FGetActionCheckState::CreateLambda([this] {
				// 根据设置返回复选框状态
				return GetDefault<UEditorBrowserToolSettings>()->bCaptureAllShortcuts ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
				})),
		NAME_None, EUserInterfaceActionType::Check
	);

	return SettingsMenu.MakeWidget();  // 生成菜单控件
}

#undef LOCTEXT_NAMESPACE  // 结束文本本地化命名空间