#include "Unit.h"

UUnit::UUnit()
{
	HitPoints = MIN_HP + std::rand() % (MAX_HP - MIN_HP);
}

void UUnit::MoveStepTowardsPos(const FIntVector2& targetPos)
{
	const auto distance = targetPos - Position;
	
	MoveCoordinateByDistance(Position.X, distance.X);
	MoveCoordinateByDistance(Position.Y, distance.Y);
}

void UUnit::MoveCoordinateByDistance(int& coordinate, const int distanceCoord)
{
	const int absDist = abs(distanceCoord);
	if ( absDist > AttackRange)
	{
		int sign = distanceCoord / absDist;
		coordinate += std::min(MovePerTimeStep, absDist - AttackRange) * sign;
	}
}