#include "Simulation.h"

USimulation::USimulation()
{
	for (UUnit* unit : Units)
	{
		unit = NewObject<UUnit>();
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

void USimulation::SimulationTick()
{
	if (TryMoveUnitsCloser() == false)
	{
	}
}

bool USimulation::TryMoveUnitsCloser()
{	
	return false;
}
