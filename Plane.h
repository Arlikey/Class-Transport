#pragma once
#include "Transport.h"
class Plane : public Transport
{
public:
	Plane() = default;
	Plane(string fuelType, double fuelAmount, double tankVolume);

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

