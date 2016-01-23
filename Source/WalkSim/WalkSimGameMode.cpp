// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "WalkSim.h"
#include "WalkSimGameMode.h"
#include "WalkSimHUD.h"
#include "WalkSimCharacter.h"

AWalkSimGameMode::AWalkSimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWalkSimHUD::StaticClass();
}
