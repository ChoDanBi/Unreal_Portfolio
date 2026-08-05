// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_SearchTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyPortfolio/Characters/Players/MyPlayer.h"
#include "DrawDebugHelpers.h"
#include "AIController.h"

#include "Engine/OverlapResult.h"

UBTService_SearchTarget::UBTService_SearchTarget()
{
	NodeName = TEXT("Search Target");
	//interval : 서비스가 TickNode를 호출하는 시간 간격을 설정합니다. 0.5초로 설정되어 있습니다.
	Interval = 0.5f;

	//초기값
	SearchDistance = 500.f;
}

void UBTService_SearchTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController) return;
	APawn* Pawn = AIController->GetPawn();
	if (!Pawn) return;

	AMyPlayer* Target = FindTarget(Pawn);

	UpdateTargetBlackboard(OwnerComp, Target);
	DrawSearchDebug(Pawn, Target != nullptr);
}

AMyPlayer* UBTService_SearchTarget::FindTarget(APawn* Pawn) const
{
	//검색 범위 내의 모든 오버랩 결과를 저장할 배열
	TArray<FOverlapResult> OverlapResults;

	//검색 범위의 중심 위치를 Pawn의 현재 위치로 설정
	const FVector Center = Pawn->GetActorLocation();

	//검색 범위 내의 모든 오버랩 결과를 가져오기 위해 FCollisionQueryParams를 생성, Pawn를 제외하고 검색하도록 설정
	FCollisionQueryParams QueryParams(NAME_None, false, Pawn);

	//검색 범위 내의 모든 오버랩 결과를 가져오기 위해 OverlapMultiByChannel 함수를 호출, 검색 범위 내에 있는 모든 오브젝트를 검색
	const bool bResult = GetWorld()->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,	// 회전 없음
		ECC_GameTraceChannel1,	//Custom Trace Channel 1
		FCollisionShape::MakeSphere(SearchDistance),	//검색 범위를 구체로 설정
		QueryParams
	);

	if (!bResult) return nullptr;

	//검색 범위 내의 모든 오버랩 결과를 순회하며, AMyPlayer 클래스의 인스턴스를 찾음
	for (const FOverlapResult& OverlapResult : OverlapResults)
	{
		AMyPlayer* Player = Cast<AMyPlayer>(OverlapResult.GetActor());
		if (Player) return Player;
	}

	return nullptr;
}

void UBTService_SearchTarget::UpdateTargetBlackboard(UBehaviorTreeComponent& OwnerComp, AMyPlayer* Target) const
{
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if (!Blackboard) return;

	Blackboard->SetValueAsObject(TEXT("Target"), Target);
}

void UBTService_SearchTarget::DrawSearchDebug(APawn* Pawn, bool bFoundTarget)
{
	if (!Pawn) return;

	DrawDebugSphere(
		GetWorld(),					//검색 범위 시각화
		Pawn->GetActorLocation(),	//검색 범위 중심 위치
		SearchDistance,				//검색 범위 반지름
		10,							//검색 범위를 시각화할 구체의 세그먼트 수
		bFoundTarget ? FColor::Green : FColor::Red,
		false,						//검색 범위를 시각화할 구체를 지속적으로 표시할지 여부
		Interval					//검색 범위를 시각화할 구체를 표시할 시간
	);
}
