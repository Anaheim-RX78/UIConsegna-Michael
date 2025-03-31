// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UIConsegna : ModuleRules
{
	public UIConsegna(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
