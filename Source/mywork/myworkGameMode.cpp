// Copyright Epic Games, Inc. All Rights Reserved.

#include "myworkGameMode.h"
#include "myworkHUD.h"
#include "myworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmyworkGameMode::AmyworkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AmyworkHUD::StaticClass();
}
