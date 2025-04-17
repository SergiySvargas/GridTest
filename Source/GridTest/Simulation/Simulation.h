// Copyright: Ievtushenko Sergii V., DOB 31.12.1980, since March 2025. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "../Unit/Unit.h"
#include "Simulation.generated.h"

UCLASS(BlueprintType)
class GRIDTEST_API USimulation : public UObject
{
	GENERATED_BODY()

	static const int NUM_UNITS = 2;
	UPROPERTY() TObjectPtr<UUnit> Units[NUM_UNITS];

	static const int GRID_SIZE = 100;

public:

	USimulation();

	UFUNCTION(BlueprintCallable) void Init();
	UFUNCTION(BlueprintCallable) void SimulationTick();

private:
	
	bool TryMoveUnitsCloser();
};