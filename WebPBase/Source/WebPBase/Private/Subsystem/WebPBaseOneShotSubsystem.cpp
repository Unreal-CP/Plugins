#include "WebPBaseOneShotSubsystem.h"
#include "WebPBaseCore.h"

#include "Async/Async.h"
#include "Engine/World.h"
#include "RenderingThread.h"
#include "Slate/SceneViewport.h"
#include "Engine/GameViewportClient.h"
#include "Misc/Paths.h"

// 判断是否应该创建该子系统
bool UWebPBaseOneShotSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
    return true; 
}

// 初始化子系统
void UWebPBaseOneShotSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection); // 调用父类初始化

    // 绑定回调函数，当截图处理完成后调用SampleWebPOneShotCallBackMethod
    SampleWebPOneShotCallBack.BindUFunction(this, "SampleWebPOneShotCallBackMethod");
}

// 反初始化子系统
void UWebPBaseOneShotSubsystem::Deinitialize()
{
    // 解绑回调函数
    SampleWebPOneShotCallBack.Unbind();
    Super::Deinitialize(); // 调用父类反初始化
}

// 开始一次性的WebP截图操作
void UWebPBaseOneShotSubsystem::BeginSampleWebPOneShot(FSampleWebPOneShotCallBackBP InSampleWebPOneShotCallBackBP)
{
    // 如果正在处理中，直接返回失败
    if (bWorking)
    {
        InSampleWebPOneShotCallBackBP.ExecuteIfBound(false);
        return;
    }

    bWorking = true; // 标记为处理中
    SampleWebPOneShotCallBackBP = InSampleWebPOneShotCallBackBP; // 保存蓝图回调函数

    // 刷新渲染命令，确保所有渲染命令完成
    FlushRenderingCommands();

    // 注册截图完成回调函数
    ScreenHandle = UGameViewportClient::OnScreenshotCaptured().AddUObject(
        this, &UWebPBaseOneShotSubsystem::ScreenShotCallback);

    // 请求截图（不使用HDR）
    FScreenshotRequest::RequestScreenshot(false);
}

// 截图处理完成的回调方法（供内部使用）
void UWebPBaseOneShotSubsystem::SampleWebPOneShotCallBackMethod(bool bGenerateWebp)
{
    bWorking = false; // 标记处理完成
    // 执行蓝图回调函数，通知处理结果
    SampleWebPOneShotCallBackBP.ExecuteIfBound(bGenerateWebp);
}

// 截图完成的回调函数
void UWebPBaseOneShotSubsystem::ScreenShotCallback(int32 InWidth, int32 InHeight, const TArray<FColor>& InColors)
{
    // 移除截图回调注册
    if (ScreenHandle.IsValid())
    {
        UGameViewportClient::OnScreenshotCaptured().Remove(ScreenHandle);
    }

    // 创建异步任务处理截图数据（在任意线程执行）
    AsyncTask(ENamedThreads::AnyThread, [this, InWidth, InHeight, InColors]()
        {
            // 生成唯一的文件名
            FString FileName = FGuid::NewGuid().ToString() + TEXT("_OneShot.webp");
            // 构建保存路径（在项目Saved目录下）
            FString PictruePath = FPaths::ProjectSavedDir() / FileName;

            // 设置图片尺寸
            FVector2D PSize;
            PSize.X = InWidth;
            PSize.Y = InHeight;

            // 调用核心功能生成WebP图片（质量为100）
            bool bFinishWebp = FWebPBaseCore::GenerateStaticWebpPicture(
                PictruePath, InColors, PSize, 100);

            // 必须切换回游戏线程执行回调（UI操作必须在主线程）
            AsyncTask(ENamedThreads::GameThread, [this, bFinishWebp]()
                {
                    // 执行内部回调，通知处理结果
                    SampleWebPOneShotCallBack.ExecuteIfBound(bFinishWebp);
                });
        });
}