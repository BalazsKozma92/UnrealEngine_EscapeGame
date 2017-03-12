#include "EscapeGame.h"
#include "OpenDoor.h"

UOpenDoor::UOpenDoor()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();	
	AActor* Owner = GetOwner();

	FRotator NewRotation = FRotator(0.0f, 75.0f, 0.0f);

	Owner->SetActorRotation(NewRotation);
}

void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

