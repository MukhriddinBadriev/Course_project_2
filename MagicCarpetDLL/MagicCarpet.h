#pragma once

#include "AirVehicles.h"
#include <iostream>
using namespace std;

#ifdef MAGICCARPETDLL_EXPORTS
#define DINAMICLIBRARY8_API __declspec(dllexport)
#else
#define DINAMICLIBRARY8_API __declspec(dllimport)
#endif
class DINAMICLIBRARY8_API MagicCarpet :
    public AirVehicles
{
};

