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
{/*
	const int posDiff = Units[1]->Position - Units[0]->Position;

	if (abs(posDiff.X) > Units[0]->GetAttackRange())
	{
		int n
		Units[0]->Position.X += Units[0]->GetWalkPerTimeStep() * 
	}
	*/
	return false;
}

void USimulation::MovePosCloser(int posDiff, int requiredRange, int moveRange, int& posToMove)
{/*
	if (abs(posDiff) > requiredRange)
	{
		const int maxPosChange = posDiff
		posToMove = std::max()
	}*/
}
