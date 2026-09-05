#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RDSkillBaseComp.generated.h"

class ARedDragon;
class URedDragonAttackManagerComp;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API URDSkillBaseComp : public USceneComponent
{
	GENERATED_BODY()

public:	
	URDSkillBaseComp();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected: 
	//Owner
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner")
	TObjectPtr<ARedDragon> OwnerRedDragon;

	//AttackManager
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AttackManager")
	TObjectPtr<URedDragonAttackManagerComp> AttackManager;
};
