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
	
	void SetFuelType();
	string GetFuelType();

	void SetFuelAmount();

	void SetTankVolume();

	double GetFuelAmount();

	double GetTankVolume();

	virtual void Print() const;

	virtual double FuelConsumption(double distance);

	virtual double Refuel();
};

