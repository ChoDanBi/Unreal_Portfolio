#include "Entity/Interactables/HookPoint.h"


AHookPoint::AHookPoint()
{
	PrimaryActorTick.bCanEverTick = false;
	bCanBeHooked = true;
}

void AHookPoint::BeginPlay()
{
	Super::BeginPlay();
	
}