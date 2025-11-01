// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Engine/Texture2D.h"
#include "WebPBaseType.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FWebPFinishGenerateMultiWebp, bool, bFinishGenerate);

DECLARE_DYNAMIC_DELEGATE_FourParams(FWebPLoadAndShowWebp, bool, bLoad, UTexture2D*, OutWebpPicture, int32, WebpWidth, int32, WebpHeight);

USTRUCT(BlueprintType)
struct WEBPBASE_API FWebPBasePictureInformation
{
	GENERATED_USTRUCT_BODY()

public:
	FWebPBasePictureInformation();
	FWebPBasePictureInformation(int32 InX0, int32 InY0, int32 InX1, int32 InY1);
	FWebPBasePictureInformation(FWebPBasePictureInformation& InWebpPictureInformation);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebP")
	int32 X0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebP")
	int32 Y0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebP")
	int32 X1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebP")
	int32 Y1;

	int32 GetPictureWidth();
	int32 GetPictureHeight();

	void ResetPictureInformation();


};

UENUM()
enum class EWebPBaseProcessType :uint8
{
	None,
	Recording,
	Generating,
	Max
};



UENUM()
enum class EWebPBaseLoadAndShowType :uint8
{
	None,
	Loading,
	Showing,
	Max
};