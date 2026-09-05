#pragma once

#include "CoreMinimal.h"
#include "Characters/Enemys/BaseEnemy.h"
#include "RedDragon.generated.h"

class URedDragonAnim;
class URedDragonAttackManagerComp;
class UCapsuleComponent;

UCLASS()
class MYPORTFOLIO_API ARedDragon : public ABaseEnemy
{
	GENERATED_BODY()
	
public:
	ARedDragon();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

protected:	//Animation
	TObjectPtr<URedDragonAnim> AnimInstance;

protected:	//HitBox
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UCapsuleComponent> HeadHitbox;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UCapsuleComponent> BodyHitbox;
};
