#include <iostream>
#include "Moon.h"

using namespace std;

Moon::Moon() {

	this->moonWeight = 0.0;
	this->earthWeight = 0.0;
}

Moon::~Moon() {

	cout << "Moon object removed." << endl;
}

double Moon::getMoonWeight() const {

	return moonWeight;

}

double Moon::getEarthWeight() const {

	return earthWeight;
}

void Moon::setMoonWeight(double ew) {

	earthWeight = ew;
	moonWeight = earthWeight / 6;
}

void Moon::DisplayMoon() const {

	cout << "Moon is being calculated with \n" << "Earth Weight: " << getEarthWeight() << endl;
	cout << "Moon Weight: " << getMoonWeight() << endl;

}