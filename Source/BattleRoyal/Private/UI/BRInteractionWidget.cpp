// Fill out your copyright notice in the Description page of Project Settings.

#include "BRInteractionWidget.h"
#include "Components/TextBlock.h"

void UBRInteractionWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

// 인터렉션 메시지 표시 함수.
void UBRInteractionWidget::SetInteractionText(FText NewInteractionText)
{
    InteractionText = NewInteractionText;
}
