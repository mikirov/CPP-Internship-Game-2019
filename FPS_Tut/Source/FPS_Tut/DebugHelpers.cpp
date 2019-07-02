// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugHelpers.h"
#include "Engine.h"

DebugHelpers::DebugHelpers()
{

}

DebugHelpers::~DebugHelpers()
{

}



void DebugHelpers::ScreenDebug(FString Message) {
	if (GEngine)
	{
		// Display a debug message for five seconds. 
		// The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Yellow, Message, true);
	}
}
