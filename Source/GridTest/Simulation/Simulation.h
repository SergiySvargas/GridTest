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
	
	UFUNCTION(BlueprintPure) UUnit* GetUnit(int idx);
	
	UFUNCTION(BlueprintCallable) void SimulationTick(UPARAM(ref) TArray<bool>& justAttacked);

private:
	
	void TryMoveUnitsCloser();
	void TryUnitAttacks(TArray<bool>& justAttacked);
};