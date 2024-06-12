// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class vDUNE_Inventory : ModuleRules
{
	public vDUNE_Inventory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
