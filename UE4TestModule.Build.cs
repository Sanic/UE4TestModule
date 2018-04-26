using UnrealBuildTool;

public class UE4TestModule : ModuleRules
{
        public UE4TestModule(ReadOnlyTargetRules Target) : base(Target)
        {
                PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;


                PublicDependencyModuleNames.AddRange(
                        new string[]
                        {
                                "Core",
                                // ... add other public dependencies that you statically link with here ...
                        }
                        );


                PrivateDependencyModuleNames.AddRange(
                        new string[]
                        {
                                "CoreUObject",
                                "Engine",
                                "Slate",
                                "SlateCore",
                                "Core",
                        }
                        );


        }
}