
#pragma once
#include<iostream>
#include"PoliceOfficer.h"
#include<string>
using namespace std;
class ParkingTicket 

{
private:
	int fine;
	ParkedCar PC;
	ParkingMeter PM;
	PoliceOfficer PO;

public:
	ParkingTicket();
	ParkingTicket(PoliceOfficer PO);
	ParkingTicket(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased);
	~ParkingTicket();
	int getfine() const;
	void generateticket();
	void reportCarInfo();
	void reportfine();
	void reportOfficer();

};