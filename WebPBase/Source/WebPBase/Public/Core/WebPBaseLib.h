#pragma once
#include "vector"
#include "CoreMinimal.h"

//此处为C++的API、请使用UE的C++API来调用
struct FWebPBaseLib
{
	
	friend class FWebPBaseCore;

protected:

	//生成静态的Webp图片
	static bool GenerateWebpByRGBA(
		const char* InWebpSavePath,		//保存路径
		const unsigned char* InRGBAData,
		int                  InWidth,
		int                  InHeight,
		float                InQualityFactor = 100);

	//生成动态的Webp图片
	static bool GenerateDymaicWebpByRGBA(
		const char* InWebpSavePath,
		std::vector<const unsigned char*>& InRGBADatas,
		std::vector<int>                   InTimestamps_ms,
		int                                InWidth,
		int                                InHeight,
		float                              InQualityFactor = 100);

	static bool LoadDynamicWebpPictureByRGBA(
		const char* InWebpFilePath,
		std::vector<const unsigned char*>& OutRGBADatas,
		std::vector<int>& OutTimestamps_ms,
		int& OutWidth,
		int& OutHeight);

};