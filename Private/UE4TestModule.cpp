#include "UE4TestModule.h"

#define LOCTEXT_NAMESPACE "FUE4TestModule"

void FUE4TestModule::StartupModule()
{
	UE_LOG(LogTemp, Error, TEXT("Startup UE4TestModule"));
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUE4TestModule::ShutdownModule()
{
	UE_LOG(LogTemp, Error, TEXT("Shutdown UE4TestModule"));

	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE4TestModule, UE4TestModule)
