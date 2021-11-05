// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mywork : ModuleRules
{
	public mywork(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
