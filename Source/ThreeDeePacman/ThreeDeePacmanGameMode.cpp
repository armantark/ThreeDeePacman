// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThreeDeePacmanGameMode.h"
#include "ThreeDeePacmanHUD.h"
#include "ThreeDeePacmanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThreeDeePacmanGameMode::AThreeDeePacmanGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AThreeDeePacmanHUD::StaticClass();
}
