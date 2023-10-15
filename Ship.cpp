#include "Ship.h"

Ship::Ship(string fuelType, double fuelAmount, double tankVolume) : Transport(fuelType, fuelAmount, tankVolume) {
	this->fuelAmount = fuelAmount;
	this->tankVolume = tankVolume;
};

void Ship::SetFuelAmount() {
	cout << "Enter fuel amount: ";
	cin >> fuelAmount;
}

void Ship::SetTankVolume() {
	cout << "Enter tank volume: ";
	cin >> tankVolume;
}

double Ship::GetFuelAmount() {
	return fuelAmount;
}

double Ship::GetTankVolume() {
	return tankVolume;
}

double Ship::FuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 47 << endl;
	return distance / 100 * 47;
}

double Ship::Refuel() {
	cout << "Refuel time: " << (tankVolume - fuelAmount) / 200 << " minutes" << endl;
	return tankVolume - fuelAmount * 2.5;
}
