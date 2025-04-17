#include "Unit.h"

UUnit::UUnit()
{
	HitPoints = MIN_HP + std::rand() % (MAX_HP - MIN_HP);
}

bool UUnit::MoveStepTowardsPos(const FIntVector2& targetPos)
{
	const auto distance = targetPos - Position;

	bool movedX = MoveCoordinateByDistance(Position.X, distance.X);
	bool movedY = MoveCoordinateByDistance(Position.Y, distance.Y);

	return movedX || movedY;
}

FVector2D UUnit::GetBlueprintCompatiblePosition()
{
	return FVector2D(Position.X, Position.Y);
}

bool UUnit::MoveCoordinateByDistance(int& coordinate, const int distanceCoord)
{
	const int absDist = abs(distanceCoord);
	if ( absDist > AttackRange)
	{
		int sign = distanceCoord / absDist;
		coordinate += std::min(MovePerTimeStep, absDist - AttackRange) * sign;
		return true;
	}
	return false;
}