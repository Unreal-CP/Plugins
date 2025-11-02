#include "EditorBrowserTool.h"
#include "EditorBrowserToolStyle.h"
#include "EditorBrowserToolCommands.h"
#include "SEditorBrowserTool.h"

#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"

#include "IWebBrowserSingleton.h"
#include "WebBrowserModule.h"
#include "WorkspaceMenuStructureModule.h"
#include "WorkspaceMenuStructure.h"

// 定义四个浏览器标签页的名称
static const FName EditorBrowserTool1TabName("EditorBrowserTool1");
static const FName EditorBrowserTool2TabName("EditorBrowserTool2");
static const FName EditorBrowserTool3TabName("EditorBrowserTool3");
static const FName EditorBrowserTool4TabName("EditorBrowserTool4");

#define LOCTEXT_NAMESPACE "FEditorBrowserToolModule"

// 模块启动函数
void FEditorBrowserToolModule::StartupModule()
{
	// 初始化样式系统
	FEditorBrowserToolStyle::Initialize();
	FEditorBrowserToolStyle::ReloadTextures();

	// 注册命令系统
	FEditorBrowserToolCommands::Register();

	// 创建命令列表
	PluginCommands = MakeShareable(new FUICommandList);

	// 映射命令到对应的处理函数
	PluginCommands->MapAction(
		FEditorBrowserToolCommands::Get().OpenWebBrowser1,
		FExecuteAction::CreateRaw(this, &FEditorBrowserToolModule::OpenWebBrowser1Clicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FEditorBrowserToolCommands::Get().OpenWebBrowser2,
		FExecuteAction::CreateRaw(this, &FEditorBrowserToolModule::OpenWebBrowser2Clicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FEditorBrowserToolCommands::Get().OpenWebBrowser3,
		FExecuteAction::CreateRaw(this, &FEditorBrowserToolModule::OpenWebBrowser3Clicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FEditorBrowserToolCommands::Get().OpenWebBrowser4,
		FExecuteAction::CreateRaw(this, &FEditorBrowserToolModule::OpenWebBrowser4Clicked),
		FCanExecuteAction());

	// 获取LevelEditor模块
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	// 创建工具栏扩展器
	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);

	// 在工具栏的"Play"组之后添加扩展
	ToolbarExtender->AddToolBarExtension(
		"Play", // 扩展点，放置在播放按钮组
		EExtensionHook::After, // 在播放按钮之后插入
		PluginCommands,
		FToolBarExtensionDelegate::CreateRaw(this, &FEditorBrowserToolModule::AddToolbarButtons)
	);

	// 将扩展器添加到LevelEditor工具栏
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);

	// 创建浏览器图标
	const FSlateIcon WebBrowserIcon(FEditorBrowserToolStyle::GetStyleSetName(), "EditorBrowserTool.Icon.Tab", "EditorBrowserTool.Icon.Tab");

	// 获取工作区菜单结构并添加浏览器分组
	const IWorkspaceMenuStructure& MenuStructure = WorkspaceMenu::GetMenuStructure();
	TSharedRef<FWorkspaceItem> WebBrowserGroup = MenuStructure.GetToolsCategory()->AddGroup(
		LOCTEXT("WorkspaceMenu_WebBrowserCategory", "网页浏览器"),
		LOCTEXT("WebBrowserCategoryTooltipText", "打开网页浏览器标签页。"),
		WebBrowserIcon,
		true);

	// 注册四个浏览器标签页生成器
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(EditorBrowserTool1TabName, FOnSpawnTab::CreateRaw(this, &FEditorBrowserToolModule::OnSpawnPluginTab))
		.SetDisplayName(GetWebBrowserLabelWithIndex(0))
		.SetGroup(WebBrowserGroup)
		.SetIcon(WebBrowserIcon);

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(EditorBrowserTool2TabName, FOnSpawnTab::CreateRaw(this, &FEditorBrowserToolModule::OnSpawnPluginTab))
		.SetDisplayName(GetWebBrowserLabelWithIndex(1))
		.SetGroup(WebBrowserGroup)
		.SetIcon(WebBrowserIcon);

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(EditorBrowserTool3TabName, FOnSpawnTab::CreateRaw(this, &FEditorBrowserToolModule::OnSpawnPluginTab))
		.SetDisplayName(GetWebBrowserLabelWithIndex(2))
		.SetGroup(WebBrowserGroup)
		.SetIcon(WebBrowserIcon);

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(EditorBrowserTool4TabName, FOnSpawnTab::CreateRaw(this, &FEditorBrowserToolModule::OnSpawnPluginTab))
		.SetDisplayName(GetWebBrowserLabelWithIndex(3))
		.SetGroup(WebBrowserGroup)
		.SetIcon(WebBrowserIcon);

	// 初始化浏览器上下文设置
	if (!BrowserContextSettings)
	{
		IWebBrowserSingleton* WebBrowserSingleton = IWebBrowserModule::Get().GetSingleton();

		// 创建浏览器上下文设置
		BrowserContextSettings = MakeShared<FBrowserContextSettings>(TEXT("EditorBrowserTool"));
		BrowserContextSettings->bPersistSessionCookies = true;
		BrowserContextSettings->bEnableNetSecurityExpiration = false;

		// 设置缓存路径
		FString CachePath(FPaths::Combine(WebBrowserSingleton->ApplicationCacheDir(), TEXT("webcache")));
		CachePath = FPaths::ConvertRelativePathToFull(CachePath);
		BrowserContextSettings->CookieStorageLocation = CachePath;

		// 注册浏览器上下文
		WebBrowserSingleton->RegisterContext(*BrowserContextSettings);
	}
}

// 添加工具栏按钮
void FEditorBrowserToolModule::AddToolbarButtons(FToolBarBuilder& Builder)
{
	// 添加分隔符（可选，用于与前面的按钮分开）
	Builder.AddSeparator();

	// 添加网页浏览器下拉菜单
	Builder.AddComboButton(
		FUIAction(), // 不需要主按钮动作
		FOnGetContent::CreateRaw(this, &FEditorBrowserToolModule::GenerateWebBrowserMenu),
		LOCTEXT("WebBrowserButton", "网页浏览器"),
		LOCTEXT("WebBrowserButtonTooltip", "打开网页浏览器"),
		FSlateIcon(FEditorBrowserToolStyle::GetStyleSetName(), "EditorBrowserTool.Icon.Tab")
	);
}

// 生成网页浏览器下拉菜单
TSharedRef<SWidget> FEditorBrowserToolModule::GenerateWebBrowserMenu()
{
	FMenuBuilder MenuBuilder(true, PluginCommands);

	// 添加菜单项
	MenuBuilder.AddMenuEntry(FEditorBrowserToolCommands::Get().OpenWebBrowser1);
	MenuBuilder.AddMenuEntry(FEditorBrowserToolCommands::Get().OpenWebBrowser2);
	MenuBuilder.AddMenuEntry(FEditorBrowserToolCommands::Get().OpenWebBrowser3);
	MenuBuilder.AddMenuEntry(FEditorBrowserToolCommands::Get().OpenWebBrowser4);

	return MenuBuilder.MakeWidget();
}

// 模块关闭函数
void FEditorBrowserToolModule::ShutdownModule()
{
	// 此函数在关闭期间调用以清理模块。对于支持动态重新加载的模块，
	// 我们在卸载模块之前调用此函数。

	// 关闭样式系统
	FEditorBrowserToolStyle::Shutdown();

	// 注销命令系统
	FEditorBrowserToolCommands::Unregister();

	// 注销标签页生成器
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EditorBrowserTool1TabName);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EditorBrowserTool2TabName);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EditorBrowserTool3TabName);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EditorBrowserTool4TabName);

	// 注销浏览器上下文
	IWebBrowserSingleton* WebBrowserSingleton = IWebBrowserModule::Get().GetSingleton();
	WebBrowserSingleton->UnregisterContext(TEXT("EditorBrowserTool"));
}

// 生成插件标签页的回调函数
TSharedRef<SDockTab> FEditorBrowserToolModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	// 根据标签页ID确定浏览器索引
	int BrowserId = 0;
	if (SpawnTabArgs.GetTabId().TabType == EditorBrowserTool1TabName)
		BrowserId = 0;
	if (SpawnTabArgs.GetTabId().TabType == EditorBrowserTool2TabName)
		BrowserId = 1;
	if (SpawnTabArgs.GetTabId().TabType == EditorBrowserTool3TabName)
		BrowserId = 2;
	if (SpawnTabArgs.GetTabId().TabType == EditorBrowserTool4TabName)
		BrowserId = 3;

	// 创建标签页标题属性
	TAttribute<FText> Label = TAttribute<FText>::Create(TAttribute<FText>::FGetter::CreateRaw(this, &FEditorBrowserToolModule::GetWebBrowserTabLabel, BrowserId));

	// 创建停靠标签页
	const TSharedRef<SDockTab> DockTab = SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		.Label(Label)
		.OnTabClosed_Lambda([BrowserId, this](TSharedRef<SDockTab> Tab) {
		// 标签页关闭时重置对应的浏览器控件
		WebBrowserWidget[BrowserId].Reset();
			});

	// 设置标签页内容为浏览器控件
	DockTab->SetContent(SAssignNew(WebBrowserWidget[BrowserId], SEditorBrowserTool, BrowserContextSettings));

	return DockTab;
}

// 获取带索引的浏览器标签名称
FText FEditorBrowserToolModule::GetWebBrowserLabelWithIndex(uint32 Idx)
{
	return FText::Format(LOCTEXT("WebBrowserTabNameWithIndex", "网页浏览器 {0}"), FText::AsNumber(Idx + 1));
}

// 获取浏览器标签页标题
FText FEditorBrowserToolModule::GetWebBrowserTabLabel(int32 BrowserIdx)
{
	// 计算当前打开的浏览器数量
	int32 NumOpenWebBrowsers = 0;
	for (int32 Idx = 0; Idx < 4; ++Idx)
	{
		if (WebBrowserWidget[Idx].IsValid())
			NumOpenWebBrowsers++;
	}

	// 如果打开多个浏览器，显示带索引的标题
	if (NumOpenWebBrowsers > 1)
	{
		return GetWebBrowserLabelWithIndex(BrowserIdx);
	}
	else
	{
		// 如果只打开一个浏览器，显示简单标题
		return LOCTEXT("WebBrowserTabName", "网页浏览器");
	}
}

// 打开第一个浏览器的点击处理函数
void FEditorBrowserToolModule::OpenWebBrowser1Clicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(EditorBrowserTool1TabName);
}

// 打开第二个浏览器的点击处理函数
void FEditorBrowserToolModule::OpenWebBrowser2Clicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(EditorBrowserTool2TabName);
}

// 打开第三个浏览器的点击处理函数
void FEditorBrowserToolModule::OpenWebBrowser3Clicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(EditorBrowserTool3TabName);
}

// 打开第四个浏览器的点击处理函数
void FEditorBrowserToolModule::OpenWebBrowser4Clicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(EditorBrowserTool4TabName);
}

#undef LOCTEXT_NAMESPACE

// 实现模块
IMPLEMENT_MODULE(FEditorBrowserToolModule, EditorBrowserTool)