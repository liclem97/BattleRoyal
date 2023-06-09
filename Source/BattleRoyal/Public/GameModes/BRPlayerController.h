// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BRPlayerController.generated.h"

class UClientMainWidget;
class UResultWidget;
class ABRAirplane;

/**
 *
 */
UCLASS()
class BATTLEROYAL_API ABRPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ABRPlayerController();

	virtual void SetupInputComponent() override;

public:
	virtual void BeginPlay() override;

	void ServerMsg(FString NewMsg);

	void OnCharacterDeath();

	UFUNCTION(Client, reliable, WithValidation)
	void ShowDeathResult(int32 NewRank);

	UFUNCTION(Client, reliable, WithValidation)
	void ShowWinnerResult();

	UFUNCTION(Client, reliable, WithValidation)
	void BackToLobby();

	UFUNCTION(Server, reliable, WithValidation)
	void RideInC130(ABRAirplane *C130);

	UFUNCTION(Server, reliable, WithValidation)
	void WantToDive();

	void WidgetDestroy(UUserWidget *DeleteWidget);

	void WorldmapAction();

	FVector GetPawnPosition();

	FVector GetMapSize();

	bool IsAirPlane();

	FVector GetForward();

	UFUNCTION(Client, reliable, WithValidation)
	void ShowBloodScreenEffect();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayScreenAnim();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UClientMainWidget> MainWidgetClass;

	UPROPERTY(BlueprintReadOnly)
	class UClientMainWidget *MainWidget;

	UFUNCTION()
	void OnRep_NotificationFromServer();

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UResultWidget> ResultWidgetClass;

	UPROPERTY()
	class UResultWidget *ResultWidget;

	UPROPERTY(EditDefaultsOnly, Category = "FlyingViewer")
	TSubclassOf<class APawn> FlyingViewer;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<class ABRCharacter> BP_Player;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UBRWorldMap> WorldMapClass;

	class UBRWorldMap *WorldMapWidget;

	bool bIsMapOpenned;

	FVector WorldMapSize;

	ABRAirplane *C130;

	bool bAirplane;

public:
	UPROPERTY(ReplicatedUsing = OnRep_NotificationFromServer, BlueprintReadOnly)
	FText NotificationFromServer;

	bool bDived;
};
