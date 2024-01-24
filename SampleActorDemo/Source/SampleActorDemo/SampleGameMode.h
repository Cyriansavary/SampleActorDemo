// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SampleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLEACTORDEMO_API ASampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

	public:
		ASampleGameMode();

		UFUNCTION(BlueprintCallable)
		void AddScore();

		UPROPERTY(EditAnywhere, Category = "GameMode")
		int32 PointToWin;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameMode")
		int32 PlayerScore;

	protected:

		UFUNCTION(BlueprintImplementableEvent)
		void OnPointIncrease();
		
		UFUNCTION(BlueprintImplementableEvent)
		void OnWin();
	
};
