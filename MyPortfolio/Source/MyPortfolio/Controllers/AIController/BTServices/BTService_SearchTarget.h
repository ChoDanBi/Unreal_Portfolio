#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SearchTarget.generated.h"

class ABaseCharacter;

UCLASS()
class MYPORTFOLIO_API UBTService_SearchTarget : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_SearchTarget();

public:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
	ABaseCharacter* FindTarget(APawn* Pawn) const;
	void UpdateTargetBlackboard(UBehaviorTreeComponent& OwnerComp, ABaseCharacter* Target) const;
	void DrawSearchDebug(APawn* Pawn, bool bFoundTarget);
};
