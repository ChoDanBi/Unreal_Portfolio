#include "BTService_SearchTarget.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "Characters/Enemys/BaseEnemy.h"

#include "DrawDebugHelpers.h"
#include "AIController.h"

#include "Engine/OverlapResult.h"

UBTService_SearchTarget::UBTService_SearchTarget()
{
	NodeName = TEXT("Search Target");
	//interval : 서비스가 TickNode를 호출하는 시간 간격을 설정합니다. 0.5초로 설정되어 있습니다.
	Interval = 0.5f;
}

void UBTService_SearchTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController) return;
	APawn* Pawn = AIController->GetPawn();
	if (!Pawn) return;

	ABaseCharacter* Target = FindTarget(Pawn);

	UpdateTargetBlackboard(OwnerComp, Target);
	DrawSearchDebug(Pawn, Target != nullptr);
}

ABaseCharacter* UBTService_SearchTarget::FindTarget(APawn* Pawn) const
{
	ABaseEnemy* Enemy = Cast<ABaseEnemy>(Pawn);
	if (!Enemy) return nullptr;

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
		FCollisionShape::MakeSphere(Enemy->GetSearchDistance()),	//검색 범위를 구체로 설정
		QueryParams
	);

	if (!bResult) return nullptr;

	//검색 범위 내의 모든 오버랩 결과를 순회
	for (const FOverlapResult& OverlapResult : OverlapResults)
	{
		//캐릭터가 target 대상이 아닌 경우 continue
		auto Target = Cast<ABaseCharacter>(OverlapResult.GetActor());
		if (!Target || !Target->CanBeTargeted()) continue;
		//캐릭터가 Enemy(동족)인 경우 continue
		auto EnemyCharacter = Cast<ABaseEnemy>(Target);
		if (EnemyCharacter) continue;

		return Target;
	}

	return nullptr;
}

void UBTService_SearchTarget::UpdateTargetBlackboard(UBehaviorTreeComponent& OwnerComp, ABaseCharacter* Target) const
{
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if (!Blackboard) return;

	Blackboard->SetValueAsObject(TEXT("Target"), Target);
}

void UBTService_SearchTarget::DrawSearchDebug(APawn* Pawn, bool bFoundTarget)
{
	if (!Pawn) return;

	ABaseEnemy* Enemy = Cast<ABaseEnemy>(Pawn);
	if (!Enemy) return;

	DrawDebugSphere(
		GetWorld(),					//검색 범위 시각화
		Pawn->GetActorLocation(),	//검색 범위 중심 위치
		Enemy->GetSearchDistance(),	//검색 범위 반지름
		10,							//검색 범위를 시각화할 구체의 세그먼트 수
		bFoundTarget ? FColor::Green : FColor::Red,
		false,						//검색 범위를 시각화할 구체를 지속적으로 표시할지 여부
		Interval					//검색 범위를 시각화할 구체를 표시할 시간
	);
}
