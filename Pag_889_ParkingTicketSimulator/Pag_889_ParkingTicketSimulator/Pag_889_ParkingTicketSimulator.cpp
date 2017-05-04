// Pag_889_ParkingTicketSimulator.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include<string>
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"PoliceOfficer.h"
#include<iostream>

using namespace std;

int main()
{
	int option;
	ParkedCar car;
	ParkingMeter meter;


	do {
		string aname, abadge, amake, amodel, alicensenumber, acolor;
		int aminutespurchased, aparkedminutes;

		cout << "--------------------------------" << endl;
		cout << " ~Parking Ticket Simulator~" << endl;
		cout << "--------------------------------" << endl;
		cout << endl;
		cout << "Vehicle Information:" << endl;
		cout << "Make: ";
		cin >> amake;

		cout << "Model: ";
		cin >> amodel;

		cout << "Color: ";

		cin >> acolor;
		cout << "License Number: ";

		cin >> alicensenumber;
		cout << "Parked Minutes: ";
		cin >> aparkedminutes;
		car.set(amake, amodel, acolor, alicensenumber, aparkedminutes);
		cout << "Minutes Purchased: ";
		cin >> aminutespurchased;
		meter.setparkingmeter(aminutespurchased);

		cout << endl;
		cout << "Officer Information:" << endl;
		cout << "Name: ";
		cin >> aname;
		cout << "Badge ID: ";
		cin >> abadge;
		PoliceOfficer officer(aname, abadge, amake, amodel, acolor, alicensenumber, aparkedminutes, aminutespurchased);
		system("cls");
		officer.patrol();
		cout << endl;
		cout << "Enter 0 to exit or any number to restart: ";
		cin >> option;
	} while (option != 0);
	system("pause");
	return 0;
}

ParkedCar

#pragma once
#include<iostream>
#include<string>



 class ParkedCar	
{	private:
		string make;
		string model;
		string color;
		string licensenumber;
		int parkedminutes;

	public:
		ParkedCar();
		ParkedCar(string, string, string, string, int);
		~ParkedCar();
		void setmake(string);
		void setmodel(string);
		void setcolor(string);
		void setlicensenumber(string);
		void setparkedminutes(int);
		void set(string, string, string, string, int);

		string getmake() const;
		string getmodel()const;
		string getcolor()const;
		string getlicensenumber()const;
		int getparkedminutes()const;
		void parkedcardisplay() const;
	
};