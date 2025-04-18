#include "Unit.h"

UUnit::UUnit()
{
	static const int MIN_HP = 2;
	static const int MAX_HP = 5;

	HitPoints = MIN_HP + std::rand() % (MAX_HP - MIN_HP);
}

bool UUnit::Attack(UUnit& target)
{
	const auto distance = target.Position - Position;
	
	if (abs(distance.X) <= AttackRange && abs(distance.Y) <= AttackRange)
	{
		target.HitPoints -= 1;
		return true;
	}

	return false;
}

bool UUnit::MoveStepTowardsPos(const FIntVector2& targetPos)
{
	const auto distance = targetPos - Position;

	bool movedX = MoveCoordinateByDistance(Position.X, distance.X);
	bool movedY = MoveCoordinateByDistance(Position.Y, distance.Y);

	return movedX || movedY;
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