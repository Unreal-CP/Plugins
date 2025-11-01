// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WebPBase : ModuleRules
{
	public WebPBase(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {

             "$(ModuleDir)/Public/Core",
             "$(ModuleDir)/Public/Subsystem",
             "$(ModuleDir)/Public/Type",


            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {

             "WebPBase/Public/Core",
             "WebPBase/Public/Log",
             "WebPBase/Public/Subsystem",
             "WebPBase/Public/Type",

            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"WebPBaseLibrary",
				"Projects",
				"Engine"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "RenderCore",
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
