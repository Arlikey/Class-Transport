#pragma once
#include "Transport.h"
class Ship : public Transport
{
public:
	Ship() = default;
	Ship(string fuelType, double fuelAmount, double tankVolume);

	void SetFuelAmount();
	void SetTankVolume();
	double GetFuelAmount();
	double GetTankVolume();

	double FuelConsumption(double distance);

	double Refuel();

};

