

using UnrealBuildTool;

public class VictoryUMG : ModuleRules
{
	public VictoryUMG(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicIncludePaths.AddRange(
		new string[] {
			"VictoryUMG/Public"
			
			// ... add public include paths required here ...
		}
		);
		
		PrivateIncludePaths.AddRange(
		new string[] {
			"VictoryUMG/Private",
			
			// ... add other private include paths required here ...
		}
		);
        PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core"
		
			}
		);
		
		PrivateDependencyModuleNames.AddRange(
		new string[]
		{
			"CoreUObject", 
			"Engine", 
			"InputCore",
			
			"RHI",
			"RenderCore",
			 
			"UMG", "Slate", "SlateCore", 
			
			"APPFRAMEWORK" //for color picker! -Rama
		}
		);
		
		DynamicallyLoadedModuleNames.AddRange(
		new string[]
		{
			// ... add any modules that your module loads dynamically here ...
		}
		);
		//Private Paths
		/*
        PrivateIncludePaths.AddRange(new string[] { 
			"VictoryUMG/Public",
			"VictoryUMG/Private"
		});
		*/
	}
}
