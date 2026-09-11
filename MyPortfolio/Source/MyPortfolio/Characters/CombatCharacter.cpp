#include "CombatCharacter.h"
#include "Components/CapsuleComponent.h"
#include "MyPortfolio/CommonComponents/AttackComponent.h"

ACombatCharacter::ACombatCharacter()
{
	AttackPower = 10.f;
	AttackRange = 300.f;
	DefensePower = 5.f;

	CombatAttackComponent = nullptr;
}

void ACombatCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ACombatCharacter::Attack()
{
	if(CombatAttackComponent) CombatAttackComponent->Attack();
}