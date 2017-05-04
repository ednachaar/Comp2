
#include "stdafx.h"

#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	Rational c(1, 3), d(7, 8), x;

	c.printRational();
	cout << " + ";
	d.printRational();
	x = c.addition(d);
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\n\n";

	c.printRational();
	cout << " - ";
	d.printRational();
	x = c.subtraction(d);
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\n\n";

	c.printRational();
	cout << " x ";
	d.printRational();
	x = c.multiplication(d);
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\n\n";

	c.printRational();
	cout << " / ";
	d.printRational();
	x = c.division(d);
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << endl;

	return 0;
}