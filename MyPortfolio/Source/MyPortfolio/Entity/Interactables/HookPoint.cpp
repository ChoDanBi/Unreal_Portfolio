#include "Entity/Interactables/HookPoint.h"
#include "Components/SphereComponent.h"

AHookPoint::AHookPoint()
{
	PrimaryActorTick.bCanEverTick = false;
	bCanBeHooked = true;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->InitSphereRadius(80.0f);
	Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Collision->SetCollisionResponseToAllChannels(ECR_Ignore);
	Collision->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	RootComponent = Collision;
}

void AHookPoint::BeginPlay()
{
	Super::BeginPlay();
	
}