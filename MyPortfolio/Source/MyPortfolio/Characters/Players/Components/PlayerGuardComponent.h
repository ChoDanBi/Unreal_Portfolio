#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PlayerGuardComponent.generated.h"

class AMyPlayer;
class UBoxComponent;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UPlayerGuardComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPlayerGuardComponent();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	//소유자 캐릭터
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner")
	TObjectPtr<AMyPlayer> Player;

protected:
	//가드 히트박스
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitBox")
	TObjectPtr<UBoxComponent> HitBox;


private:
	//디버깅용
	UFUNCTION(BlueprintCallable, Category = "Debug")
	void DrawDebugGuardHitBox(float DeltaTime, FColor Color);
};