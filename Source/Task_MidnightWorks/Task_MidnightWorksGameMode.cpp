// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task_MidnightWorksGameMode.h"
#include "Task_MidnightWorksCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATask_MidnightWorksGameMode::ATask_MidnightWorksGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
