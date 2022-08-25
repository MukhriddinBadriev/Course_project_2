#pragma once
#include "Vehicles.h"
#include <iostream>
using namespace std;

#ifdef AIRVEHICLESDLL_EXPORTS
#define DINAMICLIBRARY3_API __declspec(dllexport)
#else
#define DINAMICLIBRARY3_API __declspec(dllimport)
#endif

class DINAMICLIBRARY3_API AirVehicles :
    public Vehicles
{

};