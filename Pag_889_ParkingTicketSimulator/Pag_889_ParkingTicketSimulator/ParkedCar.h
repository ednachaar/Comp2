
#pragma once
#include<iostream>
#include<string>
using namespace std;
class ParkedCar
{
private:
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