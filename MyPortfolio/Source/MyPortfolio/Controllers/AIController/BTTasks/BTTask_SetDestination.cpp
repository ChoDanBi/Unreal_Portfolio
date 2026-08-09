// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetDestination.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemys/BaseEnemy.h"

UBTTask_SetDestination::UBTTask_SetDestination()
{
	NodeName = TEXT("Set Destination");
}

EBTNodeResult::Type UBTTask_SetDestination::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (SetDestination(OwnerComp)) return EBTNodeResult::Succeeded;
	else if(SetDestinationToHome(OwnerComp)) return EBTNodeResult::Succeeded;

	return EBTNodeResult::Failed;
}

bool UBTTask_SetDestination::SetDestination(UBehaviorTreeComponent& OwnerComp) const
{
	auto AIController = OwnerComp.GetAIOwner();
	if (!AIController) return false;

	auto Pawn = AIController->GetPawn();
	if (!Pawn) return false;

	//만약에 UNavigationSystemV1 없다면
	auto NavSystem = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if (!NavSystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("NavigationSystem not found!"));
		return false;	
	}

	FNavLocation RandomLocation;

	//만약에 도달할 위치 값을 찾았다면
	//GetRandomReachablePointInRadius(중심점, 반지름, OUT 담을 위치)
	if (NavSystem->GetRandomReachablePointInRadius(Pawn->GetActorLocation(), 1000.f, OUT RandomLocation))
	{

		//GetBlackboardComponent()->SetValueAsVector("블랙보드 키 이름", 넣어줄 값)
		auto Blackboard = OwnerComp.GetBlackboardComponent();
		if (!Blackboard)
		{
			UE_LOG(LogTemp, Warning, TEXT("Blackboard not found!"));
			return false;
		}

		Blackboard->SetValueAsVector(TEXT("Destination"), RandomLocation.Location);
		UE_LOG(LogTemp, Warning, TEXT("Destination: %s"), *Blackboard->GetValueAsVector(TEXT("Destination")).ToString());
		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("Failed to find random reachable point!"));
	return false;
}

bool UBTTask_SetDestination::SetDestinationToHome(UBehaviorTreeComponent& OwnerComp) const
{
	auto AIController = OwnerComp.GetAIOwner();
	if (!AIController) return false;

	auto Pawn = AIController->GetPawn();
	if (!Pawn) return false;

	auto Enemy = Cast<ABaseEnemy>(Pawn);
	if (!Enemy) return false;

	auto Blackboard = OwnerComp.GetBlackboardComponent();
	if (!Blackboard) return false;

	//GetBlackboardComponent()->SetValueAsVector("블랙보드 키 이름", 넣어줄 값)
	Blackboard->SetValueAsVector(TEXT("Destination"), Enemy->GetHomeLocation());
	UE_LOG(LogTemp, Warning, TEXT("Destination: %s"), *Blackboard->GetValueAsVector(TEXT("Home Destination")).ToString());
	return true;
}
