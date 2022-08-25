#pragma once
#include "Vehicles.h"
#include <iostream>
using namespace std;


#ifdef GROUNDVEHICLESDLL_EXPORTS
#define DINAMICLIBRARY2_API __declspec(dllexport)
#else
#define DINAMICLIBRARY2_API __declspec(dllimport)
#endif

class DINAMICLIBRARY2_API GroundVehicles :
    public Vehicles
{
public:
    int ResultRace(int &distance,int, int, int, int) {};
protected:
    int TravelTimeBeforeRest;
    int RestDuration1;
    int RestDuration2;
    int RestDuration3;
};