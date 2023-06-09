// Fill out your copyright notice in the Description page of Project Settings.

#include "BRCircle.h"
#include "Components/CanvasPanelSlot.h"
#include "WidgetLayoutLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WidgetBlueprintLibrary.h"

void UBRCircle::NativeConstruct()
{
    Super::NativeConstruct();

    Self = this;
}

// 플레이어의 월드 맵에 안전 지대 원을 그리는 함수.
void UBRCircle::NativePaint(FPaintContext &InContext) const
{
    Super::NativePaint(InContext);

    UCanvasPanelSlot *CanvasSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(Self);
    if (CanvasSlot)
    {
        FVector2D Center = (CanvasSlot->GetSize()) / 2.0f;
        float Radius = (CanvasSlot->GetSize().X) / 2.0f;
        FVector NewVector(0.0f, Radius, 0.0f);
        FVector Axis(0.0f, 0.0f, 1.0f);

        for (int i = 0; i < 36; i++)
        {
            float Angle1 = i * 10;
            float Angle2 = (i + 1) * 10;

            FVector RotatedVector1 = NewVector.RotateAngleAxis(Angle1, Axis);
            FVector RotatedVector2 = NewVector.RotateAngleAxis(Angle2, Axis);

            FVector2D PositionA(RotatedVector1.X, RotatedVector1.Y);
            FVector2D PositionB(RotatedVector2.X, RotatedVector2.Y);

            // 선을 36번 그려 원으로 표시 함.
            UWidgetBlueprintLibrary::DrawLine(InContext, (PositionA + Center), (PositionB + Center), NewColorAndOpacity);
        }
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("BRCircle : CanvasSlot Cast Failed"));
    }
}
