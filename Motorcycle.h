#pragma once
#include "Transport.h"
class Motorcycle : public Transport
{
public:
	Motorcycle() = default;
	Motorcycle(string fuelType, double fuelAmount, double tankVolume);

	void SetFuelAmount();
	void SetTankVolume();
	double GetFuelAmount();
	double GetTankVolume();

	double FuelConsumption(double distance);

	double Refuel();

};

