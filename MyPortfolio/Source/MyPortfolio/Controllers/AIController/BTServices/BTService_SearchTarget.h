// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SearchTarget.generated.h"

class AMyPlayer;

UCLASS()
class MYPORTFOLIO_API UBTService_SearchTarget : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_SearchTarget();

public:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

protected:
	//검색 범위
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search")
	float SearchDistance;

private:
	AMyPlayer* FindTarget(APawn* Pawn) const;
	void UpdateTargetBlackboard(UBehaviorTreeComponent& OwnerComp, AMyPlayer* Target) const;
	void DrawSearchDebug(APawn* Pawn, bool bFoundTarget);
};
