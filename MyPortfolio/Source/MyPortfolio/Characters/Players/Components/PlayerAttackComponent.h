#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/CommonComponents/AttackComponent.h"
#include "PlayerAttackComponent.generated.h"

class AMyPlayer;
class UCapsuleComponent;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UPlayerAttackComponent : public UAttackComponent
{
	GENERATED_BODY()

public:	
	UPlayerAttackComponent();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	//소유자 캐릭터
	TObjectPtr<AMyPlayer> Player;

protected:
	//공격 히트박스
	TObjectPtr<UCapsuleComponent> HitBox;

public:
	virtual void Attack() override;

public:	//Attack
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StartAttack();
	UFUNCTION(BlueprintCallable)
	void EndAttack();
};
