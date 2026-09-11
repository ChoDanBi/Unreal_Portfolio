#include "BaseEnemy.h"
#include "UI/UI_ShowDamage.h"

#include "AIController.h"
#include "UObject/ConstructorHelpers.h"

ABaseEnemy::ABaseEnemy()
{
	//받은 데미지 표시하기 위한 위젯
	static ConstructorHelpers::FClassFinder<UUI_ShowDamage> DW(TEXT("/Game/BluePrints/Effect/UI_ShowDamaged.UI_ShowDamaged_C"));
	if (DW.Succeeded())DamageWidgetClass = DW.Class;	
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	HomeLocation = GetActorLocation();
}

float ABaseEnemy::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	//GetActorLocation() + FVector(0.f, 0.f, 100.f)
	UUI_ShowDamage::SpawnWidget(GetWorld(), DamageWidgetClass, Damage, this);

	return ABaseCharacter::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
}
