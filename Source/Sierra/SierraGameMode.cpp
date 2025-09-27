// Copyright Epic Games, Inc. All Rights Reserved.

#include "SierraGameMode.h"
#include "SierraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASierraGameMode::ASierraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/_Blueprints/BP_Lobo_ThirdPerson"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
