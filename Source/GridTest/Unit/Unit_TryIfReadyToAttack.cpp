#include "Unit.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUnit_TryIfReadyToAttack_UT, "_Tests.Unit", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)
bool FUnit_TryIfReadyToAttack_UT::RunTest(const FString& Parameters)
{
	auto* attacker = NewObject<UUnit>();
	auto* target = NewObject<UUnit>();
	
	attacker->Position = FIntVector2(10, 10);
	bool ready = false;
	
	target->Position = FIntVector2(0, 0);
	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == false);

	target->Position = FIntVector2(7, 7);
	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == true);

	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == false);

	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == false);

	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == true);

	attacker = NewObject<UUnit>();
	target = NewObject<UUnit>();
	attacker->Position = FIntVector2(10, 10);
	target->Position = FIntVector2(7, 7);

	attacker->HitPoints = 0;
	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == false);

	attacker = NewObject<UUnit>();
	target = NewObject<UUnit>();
	attacker->Position = FIntVector2(10, 10);
	target->Position = FIntVector2(7, 7);

	target->HitPoints = 0;
	ready = attacker->TryIfReadyToAttack(*target);
	check(ready == false);

	return true;
}