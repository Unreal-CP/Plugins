#include "WebPBaseMultiShotSubsystem.h"
#include "WebPBaseCore.h"

#include "Async/Async.h"
#include "Engine/World.h"
#include "RenderingThread.h"
#include "Slate/SceneViewport.h"
#include "Engine/GameViewportClient.h"


bool UWebPBaseMultiShotSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return true;
}

void UWebPBaseMultiShotSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	SampleWebPMultiCallBack.BindUFunction(this, "SampleWebPOneMultiCallBackMethod");
	WebpPictureInformation = MakeShareable(new FWebPBasePictureInformation);


}

void UWebPBaseMultiShotSubsystem::Deinitialize()
{
	Super::Deinitialize();
	SampleWebPMultiCallBack.Unbind();
	ResetRecord();


}

void UWebPBaseMultiShotSubsystem::Tick(float DeltaTime)
{
	if (ProcessType == EWebPBaseProcessType::Recording)
	{
		RecordOneFrame(DeltaTime);
	}


}

bool UWebPBaseMultiShotSubsystem::IsTickable() const
{
	return !IsTemplate();
}

TStatId UWebPBaseMultiShotSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UWebPBaseMultiShotSubsystem, STATGROUP_Tickables);
}

bool UWebPBaseMultiShotSubsystem::BeginRecord(FString& InGeneratedWebpPicturesPath, TSharedPtr<FWebPBasePictureInformation> InWebpPictureInformation)
{
	if (!GetWorld())
	{
		return false;
	}

	if (ProcessType != EWebPBaseProcessType::None)
	{
		return false;
	}

	if (!FWebPBaseCore::CheckInWebpPictureSize(GetWorld(), InWebpPictureInformation))
	{
		return false;
	}
	ResetRecord();
	ProcessType = EWebPBaseProcessType::Recording;
	GeneratedWebpPicturesPath = InGeneratedWebpPicturesPath;
	WebpPictureInformation = InWebpPictureInformation;
	FlushRenderingCommands();



	ScreenHandle = UGameViewportClient::OnScreenshotCaptured().AddUObject(this,
		&UWebPBaseMultiShotSubsystem::ScreenShotCallback);

	return true;
}

void UWebPBaseMultiShotSubsystem::RecordOneFrame(float DeltaTime)
{
	FScreenshotRequest::RequestScreenshot(false);

	//可能有潜在的问题
	if (WebpTimestepMillisecond.Num() == 0)
	{
		WebpTimestepMillisecond.Add(0);
	}
	else
	{
		WebpTimestepMillisecond.Add(DeltaTime * 1000);
	}



}

void UWebPBaseMultiShotSubsystem::EndRecord(FWebPFinishGenerateMultiWebp& InFinshWebpBPDelegate)
{
	if (ProcessType != EWebPBaseProcessType::Recording)
	{
		InFinshWebpBPDelegate.ExecuteIfBound(false);
		return;
	}
	ProcessType = EWebPBaseProcessType::Generating;

	FinshWebpBPDelegate = InFinshWebpBPDelegate;

	AsyncTask(ENamedThreads::AnyThread, [&]()
		{
			FPlatformProcess::Sleep(0.2);
			FScopeLock XGLock(&WebPMutex);

			bool GenerateWebp = FWebPBaseCore::GenerateDynamicWebpPicture(
				GeneratedWebpPicturesPath,
				WebpPictureInformation,
				WebPColor,
				WebpTimestepMillisecond
			);

			AsyncTask(ENamedThreads::GameThread, [&, GenerateWebp]() {

				SampleWebPMultiCallBack.ExecuteIfBound(GenerateWebp);

				});

		});


}

void UWebPBaseMultiShotSubsystem::ResetRecord()
{
	ProcessType = EWebPBaseProcessType::None;
	if (ScreenHandle.IsValid())
	{
		UGameViewportClient::OnScreenshotCaptured().Remove(ScreenHandle);
	}

	GeneratedWebpPicturesPath = TEXT("");
	WebpPictureInformation->ResetPictureInformation();
	WebPColor.Empty();
	WebpTimestepMillisecond.Empty();


}

void UWebPBaseMultiShotSubsystem::ScreenShotCallback(int32 InWidth, int32 InHeight, const TArray<FColor>& InColors)
{

	AsyncTask(ENamedThreads::AnyThread, [&, InWidth, InHeight, InColors]()
		{
			FScopeLock XGLock(&WebPMutex);
			TArray<FColor> OutColors;


			//截取特定像素
			for (int32 IndexY = 1; IndexY <= InHeight; IndexY++)
			{
				for (int32 IndexX = 1; IndexX <= InWidth; IndexX++)
				{
					int32 IndexXY = (IndexY - 1) * InWidth + IndexX;

					int32 IndexArray = IndexXY - 1;

					bool  bIndexX = (IndexX >= WebpPictureInformation->X0 + 1) && (IndexX <= WebpPictureInformation->X1 + 1);
					bool  bIndexY = (IndexY >= WebpPictureInformation->Y0 + 1) && (IndexY <= WebpPictureInformation->Y1 + 1);
					if (bIndexX && bIndexY)
					{
						OutColors.Add(InColors[IndexArray]);
					}
				}
			}

			//添加截取之后的该图片数据
			if (OutColors.Num() == (WebpPictureInformation->X1 - WebpPictureInformation->X0 + 1) * (WebpPictureInformation->Y1 - WebpPictureInformation->Y0 + 1))
			{
				WebPColor.Add(OutColors);
				return;
			}


		});




}

void UWebPBaseMultiShotSubsystem::SampleWebPOneMultiCallBackMethod(bool bGenerateWebp)
{
	if (ScreenHandle.IsValid())
	{
		UGameViewportClient::OnScreenshotCaptured().Remove(ScreenHandle);
	}


	ResetRecord();

	FinshWebpBPDelegate.ExecuteIfBound(bGenerateWebp);




}

