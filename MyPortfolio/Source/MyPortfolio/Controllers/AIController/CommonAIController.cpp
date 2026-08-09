#include "Controllers/AIController/CommonAIController.h"
#include "UObject/ConstructorHelpers.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"


ACommonAIController::ACommonAIController()
{
    static ConstructorHelpers::FObjectFinder<UBlackboardData> BB(
        TEXT("/Game/BluePrints/Controllors/AI/BB_AIEnemy.BB_AIEnemy"));
    if(BB.Succeeded()) BlackboardAsset = BB.Object;
    

    static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(
        TEXT("/Game/BluePrints/Controllors/AI/BT_AIEnemy.BT_AIEnemy")
    );
    if(BT.Succeeded()) BehaviorTreeAsset = BT.Object;
}

void ACommonAIController::BeginPlay()
{
    Super::BeginPlay();

    UBlackboardComponent* BlackboardComponent = GetBlackboardComponent();

    if(BlackboardAsset) UseBlackboard(BlackboardAsset, BlackboardComponent);
    if(BehaviorTreeAsset) RunBehaviorTree(BehaviorTreeAsset);
}
