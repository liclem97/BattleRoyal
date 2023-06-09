// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BRFlyingViewer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UUserWidget;

UCLASS()
class BATTLEROYAL_API ABRFlyingViewer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABRFlyingViewer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void InteractionFunc();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	UFUNCTION(Client, reliable, WithValidation)
	void DestroyWidget();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent *CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent *SpringArmComp;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> WidgetClass;

	FTimerHandle TimerHandle_WidgetDestroy;

	bool bWidgetDestroyed;

public:
	UUserWidget *Widget;
};
