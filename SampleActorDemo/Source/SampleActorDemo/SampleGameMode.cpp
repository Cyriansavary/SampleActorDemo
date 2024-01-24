// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleGameMode.h"

ASampleGameMode::ASampleGameMode()
{
	PointToWin = 10;
}

void ASampleGameMode::AddScore()
{
		PlayerScore++;
		OnPointIncrease();
		if (PlayerScore >= PointToWin)
		{
			OnWin();
		}

}
