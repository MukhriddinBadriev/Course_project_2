#pragma once

#include "GroundVehicles.h"
#include <iostream>
using namespace std;

#ifdef CAMELDLL_EXPORTS
#define DINAMICLIBRARY4_API __declspec(dllexport)
#else
#define DINAMICLIBRARY4_API __declspec(dllimport)
#endif

class DINAMICLIBRARY4_API Camel :
    public GroundVehicles
{
public:


};

