#pragma once
#include "Transport.h"
class Tram : public Transport
{
	bool isPowered;
public:
	Tram() = default;
	Tram(string fuelType, bool isPowered);

	double FuelConsumption(double distance);

	double Refuel();
	
	void Print() const;
};

