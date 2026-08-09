// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/AIController/BTTasks/BTTask_Attack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/CombatCharacter.h"

UBTTask_Attack::UBTTask_Attack()
{
	NodeName = TEXT("Attack");
}

EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (Attack(OwnerComp)) return EBTNodeResult::Succeeded;
	return EBTNodeResult::Failed;
}

bool UBTTask_Attack::Attack(UBehaviorTreeComponent& OwnerComp) const
{
	auto AIController = OwnerComp.GetAIOwner();
	if (!AIController) return false;

	auto Pawn = AIController->GetPawn();
	if (!Pawn) return false;

	auto CombatCharacter = Cast<ACombatCharacter>(Pawn);
	if (!CombatCharacter) return false;

	CombatCharacter->Attack();

	return true;
}
