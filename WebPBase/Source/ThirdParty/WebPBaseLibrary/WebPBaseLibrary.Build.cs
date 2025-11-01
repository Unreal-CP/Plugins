// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class WebPBaseLibrary : ModuleRules
{
    public WebPBaseLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
        PublicSystemIncludePaths.Add("$(ModuleDir)/Public");

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {

            //ModuleDirectory表示当前路径下的文件夹
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "libwebp.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "libwebpdemux.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "libwebpmux.lib"));



        }
    }
}