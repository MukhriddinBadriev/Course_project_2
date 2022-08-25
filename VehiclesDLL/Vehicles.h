#pragma once
#include <iostream>
using namespace std;

#ifdef VEHICLESDLL_EXPORTS
#define DINAMICLIBRARY1_API __declspec(dllexport)
#else
#define DINAMICLIBRARY1_API __declspec(dllimport)
#endif

class DINAMICLIBRARY1_API Vehicles
{
public:
	
	
protected:
	int speed;
	string name;
};
