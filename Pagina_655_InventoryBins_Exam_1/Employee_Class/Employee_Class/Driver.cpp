// Header files section
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Header files section
#include "Employee.h"

// start main function
int main()
{
	// create the first object for Employee class
	Employee empObj1("Susan Meyers", 47899, "Accounting", "Vice President");

	// create the second object for Employee class
	Employee empObj2("Mark Jones", 39119);
	empObj2.setDepartment("IT");
	empObj2.setPosition("Programmer");

	// create the third object for Employee class
	Employee empObj3;
	empObj3.setName("Joy Rogers");
	empObj3.setIdNumber(81774);
	empObj3.setDepartment("Manufacturing");
	empObj3.setPosition("Engineer");


	// display the details of three employees
	cout << "--------------------------------------------------------" << endl;
	cout << left << setw(15) << "Name"
		<< setw(12) << "ID Number"
		<< setw(15) << "Department"
		<< setw(15) << "Position" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << setw(15) << empObj1.getName()
		<< setw(12) << empObj1.getIdNumber()
		<< setw(15) << empObj1.getDepartment() << setw(15) << empObj1.getPosition()
		<< endl;
	cout << setw(15) << empObj2.getName()
		<< setw(12) << empObj2.getIdNumber()
		<< setw(15) << empObj2.getDepartment() << setw(15) << empObj2.getPosition()
		<< endl;
	cout << setw(15) << empObj3.getName()
		<< setw(12) << empObj3.getIdNumber()
		<< setw(15) << empObj3.getDepartment() << setw(15) << empObj3.getPosition()
		<< endl;
	cout << "--------------------------------------------------------" << endl;

	// pause the system for a while
	system("pause");
	return 0;
} // end of main function