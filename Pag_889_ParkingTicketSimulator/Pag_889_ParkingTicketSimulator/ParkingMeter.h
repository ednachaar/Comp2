
#pragma once
#include<iostream>
using namespace std;
class ParkingMeter {
private:
	int minutespurchased;
public:
	ParkingMeter();
	ParkingMeter(int);
	~ParkingMeter();
	void setparkingmeter(int);
	int getparkingmeter() const;
};