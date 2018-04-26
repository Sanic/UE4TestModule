# UE4TestModule
A minimal example for additional modules in UE4 game projects


# How to set this up
- Create a fresh C++ UE4 project
- Clone this repo to the Source/ Folder of your project
- Add the following section to your PROJECTNAME.uproject File in the modules section (please note the comma):
```
,
		{
			"Name": "UE4TestModule",
			"Type": "Runtime",
			"LoadingPhase": "Default"
		}
``` 
- In PROJECTNAME.Build.cs, add "UE4TestModule" to the PublicDependencyModuleNames
