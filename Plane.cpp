#include "Plane.h"

Plane::Plane(string fuelType, double fuelAmount, double tankVolume) : Transport(fuelType, fuelAmount, tankVolume) {
	this->fuelAmount = fuelAmount;
	this->tankVolume = tankVolume;
};

void Plane::SetFuelAmount() {
	cout << "Enter fuel amount: ";
	cin >> fuelAmount;
}

void Plane::SetTankVolume() {
	cout << "Enter tank volume: ";
	cin >> tankVolume;
}

double Plane::GetFuelAmount() {
	return fuelAmount;
}

double Plane::GetTankVolume() {
	return tankVolume;
}

double Plane::FuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 2.28 << endl;
	return distance / 100 * 2.28;
}

double Plane::Refuel() {
	cout << "Refuel time: " << (tankVolume - fuelAmount) / 200 << " minutes" << endl;
	return tankVolume - fuelAmount * 3;
}
