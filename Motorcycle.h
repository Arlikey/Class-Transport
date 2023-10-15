#pragma once
#include "Transport.h"
class Motorcycle : public Transport
{
public:
	Motorcycle() = default;
	Motorcycle(string fuelType, double fuelAmount, double tankVolume);

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

