#include "stdafx.h"
#include"ParkedCar.h"

ParkedCar::ParkedCar()
{
	make = " ";
	model = " ";
	color = " ";
	licensenumber = " ";
	parkedminutes = 0;
}
ParkedCar::ParkedCar(string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes)
{
	make = amake;
	model = amodel;
	color = acolor;
	licensenumber = alicensenumber;
	parkedminutes = aparkedminutes;
}
ParkedCar::~ParkedCar() {}
void ParkedCar::setmake(string amake)
{
	make = amake;
}
void ParkedCar::setmodel(string amodel)
{
	model = amodel;

}
void ParkedCar::setcolor(string acolor)
{
	color = acolor;

}
void ParkedCar::setlicensenumber(string alicensenumber)
{
	licensenumber = alicensenumber;

}
void ParkedCar::setparkedminutes(int aparkedminutes)
{
	parkedminutes = aparkedminutes;
}
void ParkedCar::set(string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes)
{
	make = amake;
	model = amodel;
	color = acolor;
	licensenumber = alicensenumber;
	parkedminutes = aparkedminutes;
}

string ParkedCar::getmake() const
{
	return make;
}
string ParkedCar::getmodel()const
{
	return model;
}
string ParkedCar::getcolor()const
{
	return color;
}
string ParkedCar::getlicensenumber()const
{
	return licensenumber;
}
int ParkedCar::getparkedminutes()const
{
	return parkedminutes;
}
void ParkedCar::parkedcardisplay() const
{
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "License Number: " << licensenumber << endl;
}