#include "MyPortfolio/Characters/Enemys/Mushroom/EnemyMushroom.h"
#include "Characters/Enemys/Mushroom/Components/MushroomAttackComponent.h"
#include "MyPortfolio/Animations/EnemysAnim/MushroomAnim/MushroomAnimInstance.h"

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

AEnemyMushroom::AEnemyMushroom()
{
	MaxHp = 50.f;

	//MeshComponent 설정
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("/Game/Resources/MonsterForSurvivalGame/Mesh/PBR/Mushroom_SK.Mushroom_SK"));
	if (SM.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0.0, 0.0, -85.0), FRotator(0.0, -90.0, 0.0));
	}

	//애니메이션
	static ConstructorHelpers::FClassFinder<UMushroomAnimInstance> AI(TEXT("/Script/Engine.AnimBlueprint'/Game/BluePrints/Animations/Enemys/Mushroom/ABP_Mushroom.ABP_Mushroom_C'"));
	if (AI.Succeeded()) GetMesh()->SetAnimInstanceClass(AI.Class);

	CombatAttackComponent = CreateDefaultSubobject<UMushroomAttackComponent>(TEXT("AttackComponent"));
	CombatAttackComponent->GetAttackHitBox()->SetupAttachment(RootComponent);
}

void AEnemyMushroom::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = Cast<UMushroomAnimInstance>(BaseAnimInstance);	
}

void AEnemyMushroom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

