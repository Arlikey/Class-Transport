#pragma once
#include "Transport.h"
class Tram : public Transport
{
	bool isPowered;
public:
	Tram() = default;
	Tram(string fuelType, bool isPowered);

	void SetFuelType();
	string GetFuelType();

	void SetFuelAmount();
	void SetTankVolume();

	double GetFuelAmount();
	double GetTankVolume();

	double FuelConsumption(double distance);

	double Refuel();
	
	void Print() const;
};

