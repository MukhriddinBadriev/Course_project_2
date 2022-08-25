#pragma once
#include "AirVehicles.h"
#include <iostream>
using namespace std;

#ifdef EAGLEDLL_EXPORTS
#define DINAMICLIBRARY9_API __declspec(dllexport)
#else
#define DINAMICLIBRARY9_API __declspec(dllimport)
#endif
class DINAMICLIBRARY9_API Eagle :
    public AirVehicles
{
};

