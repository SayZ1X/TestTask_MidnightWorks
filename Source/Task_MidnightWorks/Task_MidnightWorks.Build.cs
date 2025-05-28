// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Task_MidnightWorks : ModuleRules
{
	public Task_MidnightWorks(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
