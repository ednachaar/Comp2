#include "stdafx.h"
#include "ParkingMeter.h"


ParkingMeter::ParkingMeter()
{
	minutespurchased = 0;
}
ParkingMeter::ParkingMeter(int aminutespurchased)
{
	minutespurchased = aminutespurchased;
}
ParkingMeter::~ParkingMeter() {}
void ParkingMeter::setparkingmeter(int aminutespurchased)
{
	minutespurchased = aminutespurchased;
}
int ParkingMeter::getparkingmeter() const
{
	return minutespurchased;
}