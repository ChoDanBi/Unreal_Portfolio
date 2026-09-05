#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsTargetOutOfNavMesh.generated.h"

UCLASS()
class MYPORTFOLIO_API UBTDecorator_IsTargetOutOfNavMesh : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTDecorator_IsTargetOutOfNavMesh();
public:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
private:
	bool IsTargetOutOfNavMesh(UBehaviorTreeComponent& OwnerComp) const;
};
