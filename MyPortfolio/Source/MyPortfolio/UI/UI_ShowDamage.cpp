// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UI_ShowDamage.h"
#include "Components/TextBlock.h"

#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "GameFramework/PlayerController.h"


void UUI_ShowDamage::SpawnWidget(UWorld* World, TSubclassOf<UUI_ShowDamage> WidgetClass, float Damage, AActor* TargetActor)
{
	if (!World || !WidgetClass || !TargetActor) return;

	APlayerController* PC = World->GetFirstPlayerController();
	if (!PC) return;

	//위젯 인스턴스 생성 및 데미지 세팅
	UUI_ShowDamage* DamageWidget = CreateWidget<UUI_ShowDamage>(PC, WidgetClass);
	if (!DamageWidget) return;

	DamageWidget->SetDamage(Damage);

	//위젯 정중앙 정렬을 위해 피벗 세팅
	DamageWidget->SetAlignmentInViewport(FVector2D(0.5f, 0.5f));

	//추적 대상 저장
	DamageWidget->Target = TargetActor;

	//화면에 표시
	DamageWidget->AddToViewport();

	/*
	FVector2D ScreenPosition;
	if (UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(PC,WorldLocation,ScreenPosition,false))
		DamageWidget->SetPositionInViewport(ScreenPosition,false);
	*/
}

void UUI_ShowDamage::SetDamage(float _Damage)
{
	if (DamageText)
		DamageText->SetText(FText::AsNumber(_Damage));
}