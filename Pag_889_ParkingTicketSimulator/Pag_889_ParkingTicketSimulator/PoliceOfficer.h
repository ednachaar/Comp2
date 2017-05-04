#pragma once
#include<iostream>
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include<string>
using namespace std;

class PoliceOfficer {

private:
	string name;
	string badge;
	ParkedCar PC;
	ParkingMeter PM;



public:
	ParkedCar getCar();
	ParkingMeter getMeter();
	PoliceOfficer();
	PoliceOfficer(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased);
	~PoliceOfficer();
	void setname(string);
	void setbadge(string);
	void setOfficer(string, string);
	string getname() const;
	string getbadge() const;

	void patrol();
	void displayofficer() const;
};