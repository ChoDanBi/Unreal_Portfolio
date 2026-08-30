#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_ShowDamage.generated.h"

class UTextBlock;

UCLASS()
class MYPORTFOLIO_API UUI_ShowDamage : public UUserWidget
{
	GENERATED_BODY()

public:
    static void SpawnWidget(UWorld* World, TSubclassOf<UUI_ShowDamage> WidgetClass, float Damage, AActor* TargetActor);
    void SetDamage(float _Damage);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TObjectPtr<AActor> Target;

protected:
    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UTextBlock> DamageText;
};
