#include "Simulation.h"

USimulation::USimulation()
{
	for (int i = 0; i < NUM_UNITS; ++i)
	{
		Units[i] = NewObject<UUnit>();
	}

	std::srand(std::time(0));
}

void USimulation::Init()
{
	InitUnitPositions();
}

UUnit* USimulation::GetUnit(int idx)
{
	if (idx >= 0 && idx < NUM_UNITS)
	{
		return Units[idx];
	}
	check(false);
	return Units[0];
}

void USimulation::SimulationTick(TArray<bool>& justAttacked)
{
	TryMoveUnitsCloser();
	TryUnitAttacks(justAttacked);
}

void USimulation::InitUnitPositions()
{
	static const int ALLOWED_POSITIONS_Y = GRID_SIZE * 4 / 10;

	Units[0]->Position.X = std::rand() % GRID_SIZE;
	Units[0]->Position.Y = std::rand() % ALLOWED_POSITIONS_Y;

	Units[1]->Position.X = std::rand() % GRID_SIZE;
	Units[1]->Position.Y = GRID_SIZE - 1 - std::rand() % ALLOWED_POSITIONS_Y;
}

void USimulation::TryMoveUnitsCloser()
{	
	Units[0]->TryMoveTowardsPos(Units[1]->Position);
	Units[1]->TryMoveTowardsPos(Units[0]->Position);
}

void USimulation::TryUnitAttacks(TArray<bool>& justAttacked)
{
	justAttacked.SetNum(NUM_UNITS);
	for (int i = 0; i < NUM_UNITS; ++i)
	{
		const int targetIdx = !i;
		if (Units[i]->TryIfReadyToAttack(*Units[targetIdx]))
		{
			justAttacked[i] = Units[i]->TryAttack(*Units[targetIdx]);
		}
		else
		{
			justAttacked[i] = false;
		}
	}
}
