#include "Transport.h"

Transport::Transport(string fuelType, double fuelAmount, double tankVolume) {
	this->fuelType = fuelType;
	this->fuelAmount = fuelAmount;
	this->tankVolume = tankVolume;
}

void Transport::SetFuelType() {
	cout << "Enter fuel type: ";
	cin >> fuelType;
}

string Transport::GetFuelType() {
	return fuelType;
}

void Transport::SetFuelAmount() {
	cout << "Enter fuel amount: ";
	cin >> fuelAmount;
}

void Transport::SetTankVolume() {
	cout << "Enter tank volume: ";
	cin >> tankVolume;
}

double Transport::GetFuelAmount() {
	return fuelAmount;
}

double Transport::GetTankVolume() {
	return tankVolume;
}

double Transport::FuelConsumption(double distance) {
	cout << "Isn't accessible" << endl;
	return 0;
}

double Transport::Refuel() {
	cout << "Isn't accessible" << endl;
	return 0;
}

void Transport::Print() const {
	cout << "Fuel type: " << fuelType << endl;
	cout << "Fuel amount: " << fuelAmount << endl;
	cout << "Tank volume: " << tankVolume << endl;
}