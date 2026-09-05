#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CommonAIController.generated.h"

class UBlackboardData;
class UBehaviorTree;
class UBlackboardComponent;

UCLASS()
class MYPORTFOLIO_API ACommonAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ACommonAIController();
protected:
	virtual void BeginPlay() override;


protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	TObjectPtr<UBlackboardData> BlackboardAsset;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTreeAsset;
};
