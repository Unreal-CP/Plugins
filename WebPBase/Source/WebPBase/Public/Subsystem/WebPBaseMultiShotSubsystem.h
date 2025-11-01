
#pragma once

#include "CoreMinimal.h"
#include "WebPBaseType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "WebPBaseMultiShotSubsystem.generated.h"

//Webp的结果生成回调
DECLARE_DELEGATE_OneParam(FSampleWebPMultiCallBack, bool)

UCLASS()
class  UWebPBaseMultiShotSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

	friend class UWebPBaseBPLibrary;


public:

	virtual bool ShouldCreateSubsystem(UObject* Outer) const  override;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;



public:

	virtual void Tick(float DeltaTime) override;

	virtual bool IsTickable() const override;

	virtual TStatId GetStatId() const override;

protected:
	//自定义窗口大小进行录制
	bool BeginRecord(FString& InGeneratedWebpPicturesPath, TSharedPtr<FWebPBasePictureInformation> InWebpPictureInformation);

	void RecordOneFrame(float DeltaTime);

	void EndRecord(FWebPFinishGenerateMultiWebp& InFinshWebpBPDelegate);

	void ResetRecord();

protected:
	UFUNCTION()
	void ScreenShotCallback(int32 InWidth, int32 InHeight, const TArray<FColor>& InColors);


	UFUNCTION()
	void SampleWebPOneMultiCallBackMethod(bool bGenerateWebp);


protected:

	EWebPBaseProcessType ProcessType = EWebPBaseProcessType::None;
	FString GeneratedWebpPicturesPath =TEXT("");
	TSharedPtr< FWebPBasePictureInformation>  WebpPictureInformation;


	FDelegateHandle ScreenHandle;

	TArray<TArray<FColor>> WebPColor;
	TArray<int32> WebpTimestepMillisecond;

	FWebPFinishGenerateMultiWebp FinshWebpBPDelegate;

	FSampleWebPMultiCallBack SampleWebPMultiCallBack;

	FCriticalSection WebPMutex;

};