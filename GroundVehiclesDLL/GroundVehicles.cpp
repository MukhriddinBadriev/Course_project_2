#include "GroundVehicles.h"
int GroundVehicles::ResultRace(int& distance,int TravelTimeBeforeRest, int RestDuration1, int RestDuration2, int RestDuration3) {
	int NumberRest = distance/ TravelTimeBeforeRest;
	int result = (distance / speed) + RestDuration1 + RestDuration2 + RestDuration3 * (NumberRest - 2);
	return result;
}