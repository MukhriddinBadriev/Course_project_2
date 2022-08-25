#pragma once
#include "GroundVehicles.h"
#include <iostream>
using namespace std;

#ifdef CENTAURDLL_EXPORTS
#define DINAMICLIBRARY6_API __declspec(dllexport)
#else
#define DINAMICLIBRARY6_API __declspec(dllimport)
#endif

class DINAMICLIBRARY6_API Centaur :
    public GroundVehicles
{
};

