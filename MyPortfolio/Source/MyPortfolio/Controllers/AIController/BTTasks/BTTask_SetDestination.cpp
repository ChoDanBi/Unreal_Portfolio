// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetDestination.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_SetDestination::UBTTask_SetDestination()
{
	NodeName = TEXT("Set Destination");
}

EBTNodeResult::Type UBTTask_SetDestination::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (SetDestination(OwnerComp)) return EBTNodeResult::Succeeded;
	return EBTNodeResult::Failed;
}

bool UBTTask_SetDestination::SetDestination(UBehaviorTreeComponent& OwnerComp) const
{
	auto AIController = OwnerComp.GetAIOwner();
	if (!AIController) return false;

	auto Pawn = AIController->GetPawn();
	if (!Pawn) return false;

	auto NavSystem = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if (!NavSystem) return false;	//만약에 UNavigationSystemV1 있다면

	FNavLocation RandomLocation;

	//만약에 도달할 위치 값을 찾았다면
	//GetRandomReachablePointInRadius(중심점, 반지름, OUT 담을 위치)
	if (NavSystem->GetRandomReachablePointInRadius(Pawn->GetActorLocation(), 1000.f, OUT RandomLocation))
	{
		//GetBlackboardComponent()->SetValueAsVector("블랙보드 키 이름", 넣어줄 값)
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("Destination"), RandomLocation);

		return EBTNodeResult::Succeeded;
	}

	return false;
}