// Copyright Epic Games, Inc. All Rights Reserved.

#include "UIConsegnaGameMode.h"
#include "UIConsegnaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUIConsegnaGameMode::AUIConsegnaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
