// Fill out your copyright notice in the Description page of Project Settings.



#include "FPS_TutGameModeBase.h"
#include "Runtime/Engine/Public/EngineGlobals.h"
#include "GameFramework/GameModeBase.h"

#include "DebugHelpers.h"

void AFPS_TutGameModeBase::StartPlay()
{
	Super::StartPlay();

	DebugHelpers::ScreenDebug(TEXT("Hello Debug"));
}