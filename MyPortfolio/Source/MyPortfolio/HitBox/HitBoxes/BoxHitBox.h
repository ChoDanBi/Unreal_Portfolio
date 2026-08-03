#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/HitBox/BaseHitBox.h"
#include "Components/BoxComponent.h"
#include "BoxHitBox.generated.h"

UCLASS()
class MYPORTFOLIO_API ABoxHitBox : public ABaseHitBox
{
	GENERATED_BODY()
	
public:
	ABoxHitBox();

public:	//HitCollision
	UPROPERTY(EditAnywhere)
	TObjectPtr<UBoxComponent> BoxCollision;

public:	//µð¹ö±ë
	virtual void DebugHitBox() override;
};
