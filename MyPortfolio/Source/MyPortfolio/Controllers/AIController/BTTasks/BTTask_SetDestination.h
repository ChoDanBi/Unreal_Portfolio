// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetDestination.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API UBTTask_SetDestination : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_SetDestination();
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
private:
	bool SetDestination(UBehaviorTreeComponent& OwnerComp) const;
};
