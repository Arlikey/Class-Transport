#pragma once
#include "Transport.h"

class Car : public Transport
{
public:
	Car() = default;
	Car(string fuelType, double fuelAmount, double tankVolume);

	void SetFuelAmount();
	void SetTankVolume();
	double GetFuelAmount();
	double GetTankVolume();
	
	double FuelConsumption(double distance);

	double Refuel();

};

