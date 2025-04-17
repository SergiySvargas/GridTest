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
	static const int HALF_GRID_SIZE = GRID_SIZE / 2;

	Units[0]->Position.X = std::rand() % GRID_SIZE;
	Units[0]->Position.Y = std::rand() % HALF_GRID_SIZE;

	Units[1]->Position.X = std::rand() % GRID_SIZE;
	Units[1]->Position.Y = HALF_GRID_SIZE + std::rand() % HALF_GRID_SIZE;
}

UUnit* USimulation::GetUnit(int idx)
{
	return Units[idx];
}

void USimulation::SimulationTick()
{
	if (TryMoveUnitsCloser() == false)
	{
	}
}

bool USimulation::TryMoveUnitsCloser()
{	
	bool moved0 = Units[0]->MoveStepTowardsPos(Units[1]->Position);
	bool moved1 = Units[1]->MoveStepTowardsPos(Units[0]->Position);
	return moved0 || moved1;
}
