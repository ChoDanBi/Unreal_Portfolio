#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AttackComponent.generated.h"

class ACombatCharacter;
class UShapeComponent;
class UPrimitiveComponent;
struct FHitResult;

//델리게이트 선언
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackEventDelegate);

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UAttackComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	UAttackComponent();
protected:
	virtual void BeginPlay() override;


protected:
	//컴포넌트 소유주
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner")
	TObjectPtr<ACombatCharacter> DefaultOwner;

	//공격 히트박스
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HitBox")
	TObjectPtr<UShapeComponent> DefaultHitBox;

	//공격 중 담긴 상대들 : 여러번 공격이 들어올 수 있으므로 TSet으로 중복 방지
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	TSet<AActor*> HitActors;

	//공격이름들 : 몽타주 호출용도로 사용
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TArray<FName> AttackNames;


public:	//Getter
	//Owner와 HitBox를 외부에서 접근할 수 있도록 Getter함수 제공
	UFUNCTION(BlueprintPure, Category = "Owner")
	ACombatCharacter* GetComponentOwner() const { return DefaultOwner; }

	//공격 히트박스 Getter
	UFUNCTION(BlueprintPure, Category = "HitBox")
	UShapeComponent* GetAttackHitBox() const { return DefaultHitBox; }

	//공격 받은 상대들 Getter
	UFUNCTION(BlueprintPure, Category = "HitBox")
	TSet<AActor*>& GetHitActors() { return HitActors; }


public:	//공격 관련 함수
	//공격 몽타주 실행 및 몽타주 끝나고 EndAttack()를 호출 시킴
	UPROPERTY(BlueprintAssignable, Category = "Attack")
	FAttackEventDelegate OnAttackStarted;

	//외부에서 쓰는 공격 호출 함수
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Attack")
	bool Attack();
	virtual bool Attack_Implementation();


protected:
	//공격 종료 시 호출 : Montage 끝나고 호출되도록 애니메이션 Notify에 연결
	UFUNCTION(BlueprintCallable, Category = "Attack")
	virtual void EndAttack();

	//공격 중 캔슬 : 이후 EndAttack() 호출됨
	UFUNCTION(BlueprintCallable, Category = "Attack")
	virtual void CancelAttack();


protected:
	//공격 히트박스 충돌 이벤트 처리
	UFUNCTION()
	virtual void OnAttackHitBoxOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

protected:	//디버깅
	void DebugHitBox(float Duration, FColor Color);

protected:	//공격 이름 관련, 현재는 콤보 역할, 나중에 뺄수도 있음
	bool bIsAttacking;
	int CurrentAttackIndex;

	const FName GetCurrentAttackName() const { return AttackNames[CurrentAttackIndex]; }
	const FName SetNextAttackIndex()
	{
		CurrentAttackIndex = CurrentAttackIndex + 1 < AttackNames.Num() ? CurrentAttackIndex + 1 : 0;
		return AttackNames[CurrentAttackIndex];
	}
};
