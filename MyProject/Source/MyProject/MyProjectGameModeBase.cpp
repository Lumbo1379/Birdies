// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProjectGameModeBase.h"

void AMyProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is BirdiesGameMode!"));
}