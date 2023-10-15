#include "Tram.h"

Tram::Tram(string fuelType, bool isPowered) {
	this->fuelType = fuelType;
	this->isPowered = isPowered;
};

void Tram::SetFuelType() {
	cout << "Enter fuel type: ";
	cin >> fuelType;
}

string Tram::GetFuelType() {
	return fuelType;
}

void Tram::SetFuelAmount() {
	cout << "Enter fuel amount: ";
	cin >> fuelAmount;
}

void Tram::SetTankVolume() {
	cout << "Enter tank volume: ";
	cin >> tankVolume;
}

double Tram::GetFuelAmount() {
	return fuelAmount;
}

double Tram::GetTankVolume() {
	return tankVolume;
}

double Tram::FuelConsumption(double distance) {
	cout << "Energy consumption: " << distance / 100 * 3.2 << endl;
	return 3.2 * distance;
}

void Tram::Print() const {
	cout << "Fuel type: " << fuelType << endl;
	cout << "Fuel amount: " << isPowered << endl;
	cout << "Tank volume: - " << endl;
}

double Tram::Refuel() {
	if (isPowered) {
		cout << "Tram energized" << endl;
		return 1;
	}
	else {
		cout << "Tram isn't energized. It can't move." << endl;
		return 0;
	}
}

