#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/BaseCharacter.h"
#include "MyPlayer.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;

class UPlayerAnimInstance;

class UPlayerAttackComponent;
class UPlayerGuardComponent;

class UCapsuleComponent;
class UBoxComponent;

UENUM(BlueprintType)
enum class ECharacterActionState : uint8
{
	Default UMETA(DisplayName = "Default"),
	Guard   UMETA(DisplayName = "Guard"),
	Attack  UMETA(DisplayName = "Attack"),
};

UCLASS()
class MYPORTFOLIO_API AMyPlayer : public ABaseCharacter
{
	GENERATED_BODY()

public:
	AMyPlayer();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;


protected://MeshComponent
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Sword;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Shield;
protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> Camera;



protected:	//Action상태 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Action")
	ECharacterActionState CurrentActionState;
public:
	UFUNCTION(BlueprintPure, Category = "Action")
	ECharacterActionState GetActionState() const { return CurrentActionState; }
	void SetActionState(ECharacterActionState _NewActionState) { CurrentActionState = _NewActionState; };


protected:	//HitBox : Player용 가드 추가
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HitBox")
	TObjectPtr<UBoxComponent> GuardHitBox;
public:
	UFUNCTION(BlueprintPure, Category = "HitBox")
	UBoxComponent* GetGuardHitBox() const { return GuardHitBox; }


	/*
	아래는 컴포넌트들을 블루프린트와 C++에 접근할 수 있도록 Getter 함수를 제공
	*/

protected:	//애니메이션 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UPlayerAnimInstance> AnimInstance;
public:
	UFUNCTION(BlueprintPure, Category = "Animation")
	UPlayerAnimInstance* GetAnimInstance() const { return AnimInstance; }


protected:	//공격 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	TObjectPtr<UPlayerAttackComponent> AttackComponent;
public:
	UFUNCTION(BlueprintPure, Category = "Attack")
	UPlayerAttackComponent* GetAttackComponent() const { return AttackComponent; }


protected:	//가드 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Guard")
	TObjectPtr<UPlayerGuardComponent> GuardComponent;
public:
	UFUNCTION(BlueprintPure, Category = "Guard")
	UPlayerGuardComponent* GetGuardComponent() const { return GuardComponent; }
};
