#include "Motorcycle.h"

Motorcycle::Motorcycle(string fuelType, double fuelAmount, double tankVolume) : Transport(fuelType, fuelAmount, tankVolume) {
	this->fuelAmount = fuelAmount;
	this->tankVolume = tankVolume;
};

void Motorcycle::SetFuelAmount() {
	cout << "Enter fuel amount: ";
	cin >> fuelAmount;
}

void Motorcycle::SetTankVolume() {
	cout << "Enter tank volume: ";
	cin >> tankVolume;
}

double Motorcycle::GetFuelAmount() {
	return fuelAmount;
}

double Motorcycle::GetTankVolume() {
	return tankVolume;
}

double Motorcycle::FuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 3 << endl;
	return distance / 100 * 3;
}

double Motorcycle::Refuel() {
	cout << "Refuel time: " << (tankVolume - fuelAmount) / 100 << " minutes" << endl;
	return tankVolume - fuelAmount;
}
