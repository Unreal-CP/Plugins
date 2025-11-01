#define _CRT_SECURE_NO_WARNINGS

#include "WebPBaseLib.h"

#if PLATFORM_WINDOWS
#include "mux.h"
#include "encode.h"
#include "decode.h"
#include "demux.h"
#endif


bool FWebPBaseLib::GenerateWebpByRGBA(const char* InWebpSavePath,
	const unsigned char* InRGBAData,
	int InWidth,
	int InHeight,
	float InQualityFactor)
{
	//此处没使用日志是因为此处为原生C++代码，没有使用UE的日志系统
#if PLATFORM_WINDOWS

	if (InQualityFactor < 0)
	{
		InQualityFactor = 0;
	}
	if (InQualityFactor > 100)
	{
		InQualityFactor = 100;
	}

	uint8_t* Output = nullptr;

	size_t   Size = WebPEncodeRGBA(InRGBAData, InWidth, InHeight, InWidth * 4, InQualityFactor, &Output);

	if (Size == 0)
	{
		return false;
	}

	FILE* FDes = fopen(InWebpSavePath, "wb");

	if (FDes)
	{
		fwrite(Output, Size, 1, FDes);
		fclose(FDes);

	}
	else
	{
		WebPFree(Output);
		return false;
	}

	WebPFree(Output);
	return true;


#else
	return false;
#endif
}

/**
 * 生成动态WebP动画文件（Windows平台实现）
 * @param InWebpSavePath 输出的WebP文件保存路径
 * @param InRGBADatas RGBA帧数据指针数组（每个元素指向一帧的RGBA数据）
 * @param InTimestamps_ms 每帧的时间戳（毫秒），决定帧的显示时机
 * @param InWidth 图像宽度（像素）
 * @param InHeight 图像高度（像素）
 * @param InQualityFactor 输出质量（0-100，0最低质量，100最高质量）
 * @return 成功返回true，失败返回false
 */
bool FWebPBaseLib::GenerateDymaicWebpByRGBA(
    const char* InWebpSavePath,
    std::vector<const unsigned char*>& InRGBADatas,
    std::vector<int> InTimestamps_ms,
    int InWidth,
    int InHeight,
    float InQualityFactor)
{
#if PLATFORM_WINDOWS  // 仅在Windows平台编译

    // 1. 参数校验
    // 确保质量参数在有效范围内
    if (InQualityFactor < 0) InQualityFactor = 0;
    if (InQualityFactor > 100) InQualityFactor = 100;

    // 检查时间戳数量和帧数据数量是否匹配
    if (InTimestamps_ms.size() != InRGBADatas.size())
    {
        return false;
    }

    // 2. 初始化WebP配置
    WebPConfig WebpPictureConfig;
    if (!WebPConfigInit(&WebpPictureConfig))  // 初始化配置
    {
        return false;
    }

    // 3. 设置动画编码选项
    WebPAnimEncoderOptions EncodeOptions;
    if (!WebPAnimEncoderOptionsInit(&EncodeOptions))  // 初始化动画选项
    {
        return false;
    }

    // 设置关键帧策略（kmin/kmax控制关键帧生成频率）
    EncodeOptions.kmin = 0;  // 最小关键帧间隔
    EncodeOptions.kmax = 1;  // 最大关键帧间隔

    // 设置编码参数
    WebpPictureConfig.lossless = 0;  // 0=有损压缩，1=无损压缩
    WebpPictureConfig.method = 4;    // 压缩方法（0-6，值越大质量越好但越慢）
    WebpPictureConfig.quality = InQualityFactor;  // 设置质量因子

    // 4. 创建动画编码器
    WebPAnimEncoder* Encoder = WebPAnimEncoderNew(InWidth, InHeight, &EncodeOptions);
    if (!Encoder)
    {
        return false;
    }

    // 5. 逐帧编码
    float TimePoint = 0.f;  // 累计时间戳（决定每帧显示时机）

    // 使用迭代器同时遍历帧数据和时间戳
    auto DataItem = InRGBADatas.begin();
    auto TimeStepItem = InTimestamps_ms.begin();

    for (; DataItem != InRGBADatas.end(); ++DataItem, ++TimeStepItem)
    {
        // 初始化单帧图片结构
        WebPPicture WebpOneFramePicture;
        WebPPictureInit(&WebpOneFramePicture);

        // 设置帧参数
        WebpOneFramePicture.use_argb = 1;       // 使用ARGB格式（实际是RGBA）
        WebpOneFramePicture.width = InWidth;    // 帧宽度
        WebpOneFramePicture.height = InHeight;  // 帧高度
        WebpOneFramePicture.argb_stride = InWidth * 4;  // 每行字节数（RGBA各1字节）

        // 导入RGBA数据到WebP帧结构
        if (!WebPPictureImportRGBA(&WebpOneFramePicture, *DataItem, InWidth * 4))
        {
            WebPPictureFree(&WebpOneFramePicture);
            continue;  // 导入失败则跳过该帧
        }

        // 累加时间戳（转换为毫秒）
        TimePoint += *TimeStepItem;

        // 添加帧到编码器
        WebPAnimEncoderAdd(Encoder, &WebpOneFramePicture, TimePoint, &WebpPictureConfig);

        // 释放单帧资源
        WebPPictureFree(&WebpOneFramePicture);
    }

    // 添加结束帧（NULL表示动画结束）
    WebPAnimEncoderAdd(Encoder, NULL, TimePoint, NULL);

    // 6. 组装最终动画
    WebPData WebpPictureData;
    if (!WebPAnimEncoderAssemble(Encoder, &WebpPictureData))
    {
        WebPAnimEncoderDelete(Encoder);
        return false;
    }

    // 7. 写入文件
    FILE* FDes = fopen(InWebpSavePath, "wb");
    if (FDes)
    {
        // 写入WebP数据
        fwrite(WebpPictureData.bytes, WebpPictureData.size, 1, FDes);
        fclose(FDes);

        // 清理WebP数据
        WebPDataClear(&WebpPictureData);

        // 删除编码器
        WebPAnimEncoderDelete(Encoder);

        return true;  // 成功
    }
    else
    {
        // 文件打开失败，清理资源
        WebPDataClear(&WebpPictureData);
        WebPAnimEncoderDelete(Encoder);
        return false;
    }

#else
    // 非Windows平台返回失败
    return false;
#endif
}

bool FWebPBaseLib::LoadDynamicWebpPictureByRGBA(const char* InWebpFilePath,
	std::vector<const unsigned char*>& OutRGBADatas,
	std::vector<int>& OutTimestamps_ms,
	int& OutWidth,
	int& OutHeight)
{
#if PLATFORM_WINDOWS
	bool bSucceed = true;

	FILE* FFileSource = fopen(InWebpFilePath, "rb");

	if (!FFileSource)
	{
		bSucceed = false;
		return bSucceed;
	}

	//简而言之就是在内存准备一段长度的空间,把磁盘上的文件写到这块空间
	unsigned char* FileOriginalData;
	unsigned int   FileLength;
	fseek(FFileSource, 0, SEEK_END);
	FileLength = ftell(FFileSource);
	FileOriginalData = (unsigned char*)WebPMalloc(FileLength);
	memset(FileOriginalData, 0, FileLength);
	fseek(FFileSource, 0, SEEK_SET);
	fread(FileOriginalData, FileLength, 1, FFileSource);
	fclose(FFileSource);


	WebPData               OriginWebpData = { FileOriginalData, (size_t)FileLength };

	WebPAnimDecoderOptions DecOptions;
	WebPAnimDecoderOptionsInit(&DecOptions);

	WebPAnimDecoder* Decoder = WebPAnimDecoderNew(&OriginWebpData, &DecOptions);
	WebPAnimInfo     AnimInfo;
	WebPAnimDecoderGetInfo(Decoder, &AnimInfo);

	OutWidth = AnimInfo.canvas_width;
	OutHeight = AnimInfo.canvas_height;

	OutRGBADatas.clear();
	OutTimestamps_ms.clear();

	int framNum = 0;
	int Timestamp = 0;

	while (WebPAnimDecoderHasMoreFrames(Decoder))
	{
		uint8_t* buf;

		WebPAnimDecoderGetNext(Decoder, &buf, &Timestamp);
		framNum++;

		unsigned char* oneWebpColorData = (unsigned char*)malloc(OutWidth * OutHeight * 4);

		memset(oneWebpColorData, 0, OutWidth * OutHeight * 4);
		memcpy(oneWebpColorData, buf, OutWidth * OutHeight * 4);

		OutRGBADatas.push_back(oneWebpColorData);
		OutTimestamps_ms.push_back(Timestamp);


	}
	WebPAnimDecoderReset(Decoder);
	WebPAnimDecoderDelete(Decoder);
	WebPDataClear(&OriginWebpData);

	return bSucceed;
#else
	return false;
#endif
}
