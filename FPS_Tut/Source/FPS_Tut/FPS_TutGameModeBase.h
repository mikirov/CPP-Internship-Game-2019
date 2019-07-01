// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPS_TutGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPS_TUT_API AFPS_TutGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
	
};
