#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Tram.h"
#include "Motorcycle.h"
#include "Plane.h"
#include "Ship.h"
using namespace std;

int main() {

	int userChoice;
	cout << "1. Car\n2. Ship\n3. Plane\n4. Tram\n5. Motorcycle\n";
	cout << "-> ";
	cin >> userChoice;

	Transport* ptr = nullptr;

	switch (userChoice)
	{
	case 1:
		ptr = new Car("Gas", 50, 100);
		break;
	case 2:
		ptr = new Ship("Diesel", 2500, 3000);
		break;
	case 3:
		ptr = new Plane("AF", 375000, 380000);
		break;
	case 4:
		ptr = new Tram("Electricity", true);
		break;
	case 5:
		ptr = new Motorcycle("Diesel", 30, 100);
		break;
	default:
		break;
	}

	ptr->Print();

	ptr->Refuel();

	ptr->FuelConsumption(200);

	delete ptr;

	return 0;
}