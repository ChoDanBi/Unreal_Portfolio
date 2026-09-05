#include "Entity/Bosses/RedDragon/Components/Skills/RDSkillBaseComp.h"
#include "Entity/Bosses/RedDragon/RedDragon.h"
#include "Entity/Bosses/RedDragon/Components/RedDragonAttackManagerComp.h"


URDSkillBaseComp::URDSkillBaseComp()
{
	PrimaryComponentTick.bCanEverTick = false;

}


void URDSkillBaseComp::BeginPlay()
{
	Super::BeginPlay();

	OwnerRedDragon = Cast<ARedDragon>(GetOwner());
	
}


void URDSkillBaseComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

