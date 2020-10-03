// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ThreeDeePacmanHUD.generated.h"

UCLASS()
class AThreeDeePacmanHUD : public AHUD
{
	GENERATED_BODY()

public:
	AThreeDeePacmanHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

