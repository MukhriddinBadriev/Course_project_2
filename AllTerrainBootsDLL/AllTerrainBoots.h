#pragma once

#include "GroundVehicles.h"
#include <iostream>
using namespace std;

#ifdef ALLTERRAINBOOTSDLL_EXPORTS
#define DINAMICLIBRARY7_API __declspec(dllexport)
#else
#define DINAMICLIBRARY7_API __declspec(dllimport)
#endif

class DINAMICLIBRARY7_API AllTerrainBoots :
    public GroundVehicles
{
};

