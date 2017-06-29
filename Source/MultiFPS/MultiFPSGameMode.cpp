// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MultiFPSGameMode.h"
#include "MultiFPSHUD.h"
#include "MultiFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiFPSGameMode::AMultiFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Gunslinger/Gunslinger_BP"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMultiFPSHUD::StaticClass();
}
