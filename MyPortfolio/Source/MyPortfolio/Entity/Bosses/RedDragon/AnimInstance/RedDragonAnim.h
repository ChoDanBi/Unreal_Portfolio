#pragma once

#include "CoreMinimal.h"
#include "Animations/BaseAnimInstance.h"
#include "RedDragonAnim.generated.h"


UCLASS()
class MYPORTFOLIO_API URedDragonAnim : public UBaseAnimInstance
{
	GENERATED_BODY()
	
public:
	URedDragonAnim();
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsFlying;
};
