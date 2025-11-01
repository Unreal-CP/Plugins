// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WebPBaseType.h"

class WEBPBASE_API FWebPBaseCore
{

public:

	//外部调用,外部必须在其他线程使用该接口,否则会阻塞主线程
	static bool GenerateStaticWebpPicture
	(	const FString& InPicturePath,
		const	TArray<FColor>& InPictureColors,
		const FVector2D& InPictureSize,
		int32           InQualityFactor = 100
	);

	static bool GenerateDynamicWebpPicture
	(
		FString& InPicturePath,
		TSharedPtr<FWebPBasePictureInformation> InWebpPictureInformation,
		TArray<TArray<FColor>>& InPicturesColors,
		TArray<int32>& WebpTimestepMillisecond,
		int32                   InQualityFactor = 100
	);


	static bool LoadDynamicWebpPicture
	(
		FString InWebpFilePath,
		TArray<int32>& OutWebpTimestepMillisecond,
		TArray<TArray<FColor>>& OutPicturesColors,
		int32& OutWebpWidth,
		int32& OutWebpHeight
	);

public:

	//用于检测Webp图片路径是否正确存在
	static	bool CheckWebpPicturePath(const FString& InGeneratedWebpPicturesPath) ;

	static	bool GetViewportSize(UObject* WorldContextObject, FVector2D& OutViewportSize);

	static	bool CheckInWebpPictureSize(UObject* WorldContextObject, TSharedPtr<FWebPBasePictureInformation> InWebpPictureInformation);

};