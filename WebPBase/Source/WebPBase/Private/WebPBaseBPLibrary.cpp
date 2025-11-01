#include "WebPBaseBPLibrary.h"

#include "decode.h"
#include "demux.h"
#include "mux.h"
#include "encode.h"

#include "Kismet/GameplayStatics.h"

#include "WebPBaseCore.h"
#include "LogWebPBase.h"
#include "WebPBaseMultiShotSubsystem.h"
#include "WebPBaseShowMultiSubsystem.h"
#include "Engine/GameInstance.h"


bool UWebPBaseBPLibrary::bAuth = false;

void UWebPBaseBPLibrary::SetWebPAuth()
{

	bAuth = true;
	UE_LOG(LogWebPBase, Display, TEXT("模拟授权成功"));
}

bool UWebPBaseBPLibrary::GetWebPBaseVersion(FString& OutVersionInfo)
{
	if (!bAuth)
	{

		UE_LOG(LogWebPBase, Error, TEXT("该插件未授权,无法使用,请联系作者"));

		return false;
	}

	int32 DecoderVersion = WebPGetDecoderVersion();
	int32 DemuxVersion = WebPGetDemuxVersion();
	int32 MuxVersion = WebPGetMuxVersion();
	int32 EncoderVersion = WebPGetEncoderVersion();

	OutVersionInfo = FString::Printf(TEXT("DecoderVersion:[%d],DemuxVersion:[%d],MuxVersion:[%d],EncoderVersion:[%d]"),
		DecoderVersion, DemuxVersion, MuxVersion, EncoderVersion);

	UE_LOG(LogWebPBase, Display, TEXT("VersionInfo:[%s]"), *OutVersionInfo);

	return true;

}

void UWebPBaseBPLibrary::BeginRecord(UObject* WorldContextObject,
	FString InGeneratedWebpPicturesPath,
	FWebPBasePictureInformation InWebpPictureInformation,
	bool& bBegin)
{
	bBegin = false;

	if (!WorldContextObject)
	{
		return;
	}
	if (!WorldContextObject->GetWorld())
	{
		return;
	}

	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);

	UWebPBaseMultiShotSubsystem* WebPSubSystem = GameInstance->GetSubsystem<UWebPBaseMultiShotSubsystem>();

	TSharedPtr<FWebPBasePictureInformation> WebPPictureInformationPtr = MakeShareable(new FWebPBasePictureInformation(InWebpPictureInformation));

	bBegin = WebPSubSystem->BeginRecord(InGeneratedWebpPicturesPath, WebPPictureInformationPtr);


}

void UWebPBaseBPLibrary::BeginRecordFullViewport(UObject* WorldContextObject, FString InGeneratedWebpPicturesPath, bool& bBegin)
{
	bBegin = false;

	if (!WorldContextObject)
	{
		return;
	}
	if (!WorldContextObject->GetWorld())
	{
		return;
	}

	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
	UWebPBaseMultiShotSubsystem* WebPSubSystem = GameInstance->GetSubsystem<UWebPBaseMultiShotSubsystem>();

	FVector2D ViewportSize;

	if (FWebPBaseCore::GetViewportSize(WorldContextObject, ViewportSize))
	{

		TSharedPtr<FWebPBasePictureInformation> WebpPictureInformation = MakeShareable(new FWebPBasePictureInformation(0, 0, ViewportSize.X - 1, ViewportSize.Y - 1));

		bBegin = WebPSubSystem->BeginRecord(InGeneratedWebpPicturesPath, WebpPictureInformation);
	}







}

void UWebPBaseBPLibrary::EndRecord(UObject* WorldContextObject, FWebPFinishGenerateMultiWebp InFinishWebpBPDegelete)
{

	if (!WorldContextObject)
	{
		return;
	}
	if (!WorldContextObject->GetWorld())
	{
		return;
	}

	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
	UWebPBaseMultiShotSubsystem* WebPSubSystem = GameInstance->GetSubsystem<UWebPBaseMultiShotSubsystem>();

	WebPSubSystem->EndRecord(InFinishWebpBPDegelete);


}

void UWebPBaseBPLibrary::LoadWebp(UObject* WorldContextObject, FWebPLoadAndShowWebp InLoadAndShowWebpDegelete, FString InWebpFilePath)
{
	if (!WorldContextObject)
	{
		InLoadAndShowWebpDegelete.ExecuteIfBound(false,nullptr,-1,-1);
		return;
	}
	if (!WorldContextObject->GetWorld())
	{
		InLoadAndShowWebpDegelete.ExecuteIfBound(false, nullptr, -1, -1);
		return;
	}
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
	UWebPBaseShowMultiSubsystem* WebPShowSubSystem = GameInstance->GetSubsystem<UWebPBaseShowMultiSubsystem>();

	WebPShowSubSystem->LoadWebp(InLoadAndShowWebpDegelete, InWebpFilePath);
}

void UWebPBaseBPLibrary::ReleaseLoadedWebp(UObject* WorldContextObject)
{
	if (!WorldContextObject)
	{
		return;
	}
	if (!WorldContextObject->GetWorld())
	{
		return;
	}
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
	UWebPBaseShowMultiSubsystem* WebPShowSubSystem = GameInstance->GetSubsystem<UWebPBaseShowMultiSubsystem>();

	WebPShowSubSystem->ReleaseLoadedWebp();

}

