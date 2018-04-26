# UE4TestModule
A minimal example for additional modules in UE4 game projects


# How to set this up
- Create a fresh C++ UE4 project. 
- Close the Editor.
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
- Start the Editor and let the code compile
- Optional: Search for "My Module Actor" and add it to the world.
- Change something in UE4TestModule\Private\MyModuleActor.cpp or the corresponding .h file
- Compile in VS

Now you should be able to see that VS compiles the new code and generates a hot-reload dll  (with a random suffix number). However, the UE4Editor doesn't pick up the changes and doesn't trigger the hot-reload.
You can also play around with the BeginPlay method in MyModuleActor to check that changes are not getting loaded
