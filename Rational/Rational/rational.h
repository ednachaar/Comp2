
#include "stdafx.h"
#ifndef rational_H
#define rational_H
#include <iostream>

class Rational {
public:
	Rational(int = 0, int = 1);// constructor
	Rational addition(const Rational &);
	Rational subtraction(const Rational &);
	Rational multiplication(const Rational &);
	Rational division(Rational &);
	void printRational(void);
	void printRationalAsFloating(void);
	bool operator >(const Rational &tempRectangle);
	bool operator <(const Rational &tempRectangle);
	bool operator ==(const Rational &);
private:
	int numerator;
	int denominator;
	void reduction(void);
};

#endif