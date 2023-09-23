// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenWorldTestGameMode.h"
#include "OpenWorldTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOpenWorldTestGameMode::AOpenWorldTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
