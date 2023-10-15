#pragma once

#include <iostream>
using namespace std;

class Transport
{
protected:
	string fuelType;
	double fuelAmount;
	double tankVolume;
public:
	Transport() = default;
	Transport(string fuelType, double fuelAmount, double tankVolume);
	
	virtual void SetFuelType() = 0;
	virtual string GetFuelType() = 0;

	virtual void SetFuelAmount() = 0;

	virtual void SetTankVolume() = 0;

	virtual double GetFuelAmount() = 0;

	virtual double GetTankVolume() = 0;

	virtual void Print() const = 0;

	virtual double FuelConsumption(double distance) = 0;

	virtual double Refuel() = 0;
};

