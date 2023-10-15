#include "Car.h"

Car::Car(string fuelType, double fuelAmount, double tankVolume) : Transport(fuelType, fuelAmount, tankVolume) {};

void Car::SetFuelAmount() {
	cout << "Enter fuel amount: ";
	cin >> fuelAmount;
}

void Car::SetTankVolume() {
	cout << "Enter tank volume: ";
	cin >> tankVolume;
}

double Car::GetFuelAmount() {
	return fuelAmount;
}

double Car::GetTankVolume() {
	return tankVolume;
}

double Car::FuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 9.3 << endl;
	return distance / 100 * 9.3;
}

double Car::Refuel() {
	cout << "Refuel time: " << (tankVolume - fuelAmount) / 100 << " minutes" << endl;
	return tankVolume - fuelAmount * 1.5;
}