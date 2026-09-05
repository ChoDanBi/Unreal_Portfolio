#pragma once

#include "CoreMinimal.h"
#include "CommonComponents/AttackComponent.h"
#include "RedDragonAttackManagerComp.generated.h"

class ARedDragon;
class URDSkillBaseComp;
class UBoxComponent;

UCLASS()
class MYPORTFOLIO_API URedDragonAttackManagerComp : public UAttackComponent
{
	GENERATED_BODY()
	
public:
	URedDragonAttackManagerComp();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
