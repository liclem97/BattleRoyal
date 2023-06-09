// Fill out your copyright notice in the Description page of Project Settings.

#include "BRWorldMap.h"
#include "BRPlayerController.h"
#include "BRGameStateBase.h"
#include "BRCircle.h"
#include "Components/Image.h"
#include "Components/CanvasPanelSlot.h"
#include "WidgetLayoutLibrary.h"

void UBRWorldMap::SetPROPERTY(ABRPlayerController *NewPC, ABRGameStateBase *NewGS)
{
    PC = NewPC;
    GS = NewGS;
}

void UBRWorldMap::NativeTick(const FGeometry &MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    if (PC)
    {
        // 플레이어 아이콘의 위치, 맵 크기, 비행기에 탑승 중인지, 보고있는 방향이 어딘지 저장하는 변수.
        PawnPosition = PC->GetPawnPosition();
        MapSize = PC->GetMapSize();
        bAirplane = PC->IsAirPlane();
        Forward = PC->GetForward();

        float NewDot = FVector::DotProduct(FVector(0.0f, -1.0f, 0.0f), Forward);
        float Rad = FMath::Acos(NewDot);
        float ACOSd = FMath::RadiansToDegrees(Rad);

        FVector NewCross = FVector::CrossProduct(FVector(0.0f, -1.0f, 0.0f), Forward);
        float NewAngle = (NewCross.Z / FMath::Abs(NewCross.Z) * ACOSd);

        if (bAirplane)
        {
            if (C130Icon)
            {
                // 비행기 탑승 중인 경우 C130 아이콘으로 대체.
                MyIcon->SetBrushFromTexture(C130Icon, true);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("C130Icon is nullptr!"));
            }
        }
        else
        {
            if (DefaultIcon)
            {
                MyIcon->SetBrushFromTexture(DefaultIcon, true);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("DefaultIcon is nullptr!"));
            }
        }

        UCanvasPanelSlot *IconSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(MyIcon);
        if (IconSlot)
        {
            // 플레이어의 위치에 맞게 아이콘을 그림.
            FVector2D IconPos = WorldPosToWidgetPos(PawnPosition, MapSize);
            IconSlot->SetPosition(IconPos);
            MyIcon->SetRenderAngle(NewAngle);
        }

        if (GS)
        {
            // GS의 원 상태에 따라 원 그림의 위치 및 표시 지정.
            FVector CurrentCirclePos = GS->CurrentCirclePosition;
            float CurrentCircleRad = GS->CurrentCircleRadius;

            FVector TargetCirclePos = GS->TargetCirclePosition;
            float TargetCircleRad = GS->TargetCircleRadius;

            if (GS->bVisibleCurrentCircle)
            {
                CurrentCircle->SetVisibility(ESlateVisibility::Visible);
            }
            else
            {
                CurrentCircle->SetVisibility(ESlateVisibility::Collapsed);
            }

            if (GS->bVisibleTargetCircle)
            {
                TargetCircle->SetVisibility(ESlateVisibility::Visible);
            }
            else
            {
                TargetCircle->SetVisibility(ESlateVisibility::Collapsed);
            }

            UCanvasPanelSlot *CurrentCircleSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(CurrentCircle);
            if (CurrentCircleSlot)
            {
                FVector2D NewPos = WorldPosToWidgetPos(CurrentCirclePos, MapSize);
                float NewScale = (WorldScaleToWidgetScale(CurrentCircleRad, MapSize)) * 2.0f;

                CurrentCircleSlot->SetPosition(NewPos);
                CurrentCircleSlot->SetSize(FVector2D(NewScale, NewScale));
            }

            UCanvasPanelSlot *TargetCircleSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(TargetCircle);
            if (TargetCircleSlot)
            {
                FVector2D NewPos = WorldPosToWidgetPos(TargetCirclePos, MapSize);
                float NewScale = (WorldScaleToWidgetScale(TargetCircleRad, MapSize)) * 2.0f;

                TargetCircleSlot->SetPosition(NewPos);
                TargetCircleSlot->SetSize(FVector2D(NewScale, NewScale));
            }
        }
    }
}

// 월드 좌표를 위젯 좌표로 변환하는 함수.
FVector2D UBRWorldMap::WorldPosToWidgetPos(FVector WorldPos, FVector MapSize)
{
    FVector2D NewVector2D;
    NewVector2D.X = ((WorldPos + (MapSize / 2.0f)).X / MapSize.X) * 1000.0f;
    NewVector2D.Y = ((WorldPos + (MapSize / 2.0f)).Y / MapSize.Y) * 1000.0f;

    return NewVector2D;
}

// 월드 스케일을 위젯 스케일로 변환하는 함수.
float UBRWorldMap::WorldScaleToWidgetScale(float WorldLength, FVector MapSize)
{
    return WorldLength * (1000.0f / MapSize.X);
}