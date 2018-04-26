#include "MyModuleActor.h"


// Sets default values
AMyModuleActor::AMyModuleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyModuleActor::BeginPlay()
{
	Super::BeginPlay();


	UE_LOG(LogTemp, Error, TEXT("This is MyModuleActor1"));

	
}

// Called every frame
void AMyModuleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

