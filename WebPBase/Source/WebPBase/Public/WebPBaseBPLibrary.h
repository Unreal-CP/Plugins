#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebPBaseType.h"
#include "WebPBaseBPLibrary.generated.h"


UCLASS()
class WEBPBASE_API UWebPBaseBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetAuth", Keywords = "Set Webp Auth"), Category = "WebPBase")
	static void SetWebPAuth();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetWebPBaseVersion", Keywords = "Get Webp Version"), Category = "WebPBase")
	static bool GetWebPBaseVersion(FString& OutVersionInfo);

public:

	UFUNCTION(BlueprintCallable, Category = "WebPBase", meta = (WorldContext = "WorldContextObject", DisplayName = "BeginRecord"))
	static	void BeginRecord(
		UObject* WorldContextObject,
		FString InGeneratedWebpPicturesPath,
		FWebPBasePictureInformation InWebpPictureInformation,
		bool& bBegin);

	// 全屏录制
	UFUNCTION(BlueprintCallable, Category = "WebPBase", meta = (WorldContext = "WorldContextObject", DisplayName = "BeginRecordFullViewport"))
	static	void BeginRecordFullViewport(
		UObject* WorldContextObject,
		FString InGeneratedWebpPicturesPath,
		bool& bBegin);


	UFUNCTION(BlueprintCallable, Category = "WebPBase", meta = (WorldContext = "WorldContextObject", DisplayName = "EndRecord"))
	static	void EndRecord(UObject* WorldContextObject, FWebPFinishGenerateMultiWebp InFinishWebpBPDegelete);


	UFUNCTION(BlueprintCallable, Category = "WebPBase", meta = (WorldContext = "WorldContextObject", DisplayName = "LoadWebp"))
	static	void LoadWebp(UObject* WorldContextObject, FWebPLoadAndShowWebp InLoadAndShowWebpDegelete, FString InWebpFilePath);

	UFUNCTION(BlueprintCallable, Category = "WebP", meta = (WorldContext = "WorldContextObject", DisplayName = "ReleaseLoadedWebp"))
	static void ReleaseLoadedWebp(UObject* WorldContextObject);

protected:
	//是否授权
	static bool bAuth;
};
