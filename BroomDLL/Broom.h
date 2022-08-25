#pragma once
#include "AirVehicles.h"
#include <iostream>
using namespace std;

#ifdef BROOMDLL_EXPORTS
#define DINAMICLIBRARY10_API __declspec(dllexport)
#else
#define DINAMICLIBRARY10_API __declspec(dllimport)
#endif
class DINAMICLIBRARY10_API Broom :
    public AirVehicles
{
};

