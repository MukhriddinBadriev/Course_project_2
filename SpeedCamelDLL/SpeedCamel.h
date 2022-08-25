#pragma once
#include "GroundVehicles.h"
#include <iostream>
using namespace std;

#ifdef SPEEDCAMELDLL_EXPORTS
#define DINAMICLIBRARY5_API __declspec(dllexport)
#else
#define DINAMICLIBRARY5_API __declspec(dllimport)
#endif

class DINAMICLIBRARY5_API SpeedCamel :
    public GroundVehicles
{

};

