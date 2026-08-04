#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PlayerAttackComponent.generated.h"

class AMyPlayer;
class UCapsuleComponent;
class UPrimitiveComponent;
struct FHitResult;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UPlayerAttackComponent : public USceneComponent
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner")
	TObjectPtr<AMyPlayer> Player;


protected:
	//공격 히트박스 : 위치, 회전은 블루프린트에서 설정
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HitBox")
	TObjectPtr<UCapsuleComponent> HitBox;


public:	//Attack
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StartAttack();
	UFUNCTION(BlueprintCallable)
	void EndAttack();

private:
	UFUNCTION()
	void OnAttackHitBoxOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
