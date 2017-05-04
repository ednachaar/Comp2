#include <iostream>
#include "FeetInches.h"
#include "stdafx.h"

using namespace std;

int main()
{
	// Create three FeetInches objects.
	FeetInches one, two, three;

	// Get a distance for the first object.
	cout << "Enter a distance in feet and inches: ";
	cin >> one;

	// Get a distance for the second object.
	cout << "Enter another distance in feet and inches: ";
	cin >> two;

	// Test the != operator.
	if (one != two)
		cout << "The two are not equal.\n";

	// Test the >= operator.
	if (one >= two)
		cout << one << " is >= " << two << endl;

	// Test the <= operator.
	if (one <= two)
		cout << one << " is <= " << two << endl;

	return 0;
}


