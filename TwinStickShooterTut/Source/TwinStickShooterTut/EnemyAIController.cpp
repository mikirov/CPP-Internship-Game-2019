// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


AEnemyAIController::AEnemyAIController() {
	PrimaryActorTick.bCanEverTick = true;
}


void AEnemyAIController::BeginPlay() {
	Super::BeginPlay();

	ActorToFollow = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!ActorToFollow) {
		UE_LOG(LogTemp, Error, TEXT("AI could not find a player!"));
	}
	else
	{
		MoveToActor(ActorToFollow);
		UE_LOG(LogTemp, Warning, TEXT("AI Following %s"), *ActorToFollow->GetName());
	}
}

