#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsTargetInRange.generated.h"


UCLASS()
class MYPORTFOLIO_API UBTDecorator_IsTargetInRange : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UBTDecorator_IsTargetInRange();
public:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

private:
	bool IsTargetInRange(UBehaviorTreeComponent& OwnerComp) const;
};
