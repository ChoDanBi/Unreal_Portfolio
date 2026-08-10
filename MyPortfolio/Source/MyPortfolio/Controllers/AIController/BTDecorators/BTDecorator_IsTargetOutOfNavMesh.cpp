// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/AIController/BTDecorators/BTDecorator_IsTargetOutOfNavMesh.h"
#include "BTDecorator_IsTargetOutOfNavMesh.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"


UBTDecorator_IsTargetOutOfNavMesh::UBTDecorator_IsTargetOutOfNavMesh()
{
	NodeName = TEXT("Is Target Out Of NavMesh");
}


bool UBTDecorator_IsTargetOutOfNavMesh::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	return IsTargetOutOfNavMesh(OwnerComp);
}


bool UBTDecorator_IsTargetOutOfNavMesh::IsTargetOutOfNavMesh(UBehaviorTreeComponent& OwnerComp) const
{
    const auto AIController = OwnerComp.GetAIOwner();
    if (!AIController) return false;

    const auto Blackboard = OwnerComp.GetBlackboardComponent();
    if (!Blackboard) return false;

    AActor* Target = Cast<AActor>(Blackboard->GetValueAsObject(TEXT("Target")));

    if (!Target) return false;

    const auto NavSystem =
        UNavigationSystemV1::GetNavigationSystem(OwnerComp.GetWorld());

    if (!NavSystem) return false;

    FNavLocation NavLocation;

    const bool bOnNavMesh =
        NavSystem->ProjectPointToNavigation(
            Target->GetActorLocation(),
            NavLocation
        );

    return !bOnNavMesh;
}
