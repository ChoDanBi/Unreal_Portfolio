#include "Entity/Bosses/RedDragon/Components/RedDragonAttackManagerComp.h"
#include "Entity/Bosses/RedDragon/RedDragon.h"
#include "Entity/Bosses/RedDragon/Components/Skills/RDSkillBaseComp.h"
#include "Components/BoxComponent.h"

URedDragonAttackManagerComp::URedDragonAttackManagerComp()
{
	
}

void URedDragonAttackManagerComp::BeginPlay()
{
	Super::BeginPlay();
}

void URedDragonAttackManagerComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
