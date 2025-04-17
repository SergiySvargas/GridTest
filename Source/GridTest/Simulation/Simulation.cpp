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
	static const int ALLOWED_POSITIONS_Y = GRID_SIZE * 4 / 10;

	Units[0]->Position.X = std::rand() % GRID_SIZE;
	Units[0]->Position.Y = std::rand() % ALLOWED_POSITIONS_Y;

	Units[1]->Position.X = std::rand() % GRID_SIZE;
	Units[1]->Position.Y = GRID_SIZE - 1 - std::rand() % ALLOWED_POSITIONS_Y;
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
