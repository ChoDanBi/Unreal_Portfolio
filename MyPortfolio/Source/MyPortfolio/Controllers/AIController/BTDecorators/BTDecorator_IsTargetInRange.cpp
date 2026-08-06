// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsTargetInRange.h"
#include "AIController.h"
#include "MyPortfolio/Characters/CombatCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsTargetInRange::UBTDecorator_IsTargetInRange()
{
	NodeName = TEXT("Is Target In Range");
}

bool UBTDecorator_IsTargetInRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool Result = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	if (!IsTargetInRange(OwnerComp)) return false;

	return Result;
}

bool UBTDecorator_IsTargetInRange::IsTargetInRange(UBehaviorTreeComponent& OwnerComp) const
{
	auto AIController = OwnerComp.GetAIOwner();
	if (AIController == nullptr) return false;

	auto Pawn = AIController->GetPawn();
	if (Pawn == nullptr) return false;

	auto OwnerCharacter = Cast<ACombatCharacter>(Pawn);
	if (OwnerCharacter == nullptr) return false;

	auto Target = Cast<APawn>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	if (Target == nullptr) return false;

	if (Pawn->GetDistanceTo(Target) > OwnerCharacter->GetAttackRange()) return false;

	return true;
}
