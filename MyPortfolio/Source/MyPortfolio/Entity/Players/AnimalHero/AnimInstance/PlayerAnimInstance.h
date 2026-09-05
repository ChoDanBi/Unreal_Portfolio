#pragma once

#include "CoreMinimal.h"
#include "Animations/BaseAnimInstance.h"
#include "PlayerAnimInstance.generated.h"


UCLASS()
class MYPORTFOLIO_API UPlayerAnimInstance : public UBaseAnimInstance
{
	GENERATED_BODY()

public:
	UPlayerAnimInstance();

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsGuarding;

private:
	void UpdateIsGuarding();
};
