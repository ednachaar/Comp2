
// Header files section
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Employee class implementation
#include "Employee.h"

// four arguments constructor
Employee::Employee(string aName, int anIDNumber, string aDepartment, string aPosition)
{
	name = aName;
	idNumber = anIDNumber;
	department = aDepartment;
	position = aPosition;
} // end of constructor

  // two arguments constructor
Employee::Employee(string aName, int anIDNumber)
{
	name = aName;
	idNumber = anIDNumber;
	department = "";
	position = "";
} // end of constructor

  // default constructor
Employee::Employee()
{
	name = "";
	idNumber = 0;
	department = "";
	position = "";
} // end of constructor

  // setName function implementation
void Employee::setName(string aName)
{
	name = aName;
}

// setIdNumber function implementation
void Employee::setIdNumber(int anIDNumber)
{
	idNumber = anIDNumber;
}

// setDepartment function implementation
void Employee::setDepartment(string aDepartment)
{
	department = aDepartment;
}

// setPosition function implementation
void Employee::setPosition(string aPosition)
{
	position = aPosition;
}

// getName function implementation
string Employee::getName() const
{
	return this-> name;
}

// getIdNumber function implementation
int Employee::getIdNumber() const
{
	return this-> idNumber;
}

// getDepartment function implementation
string Employee::getDepartment() const
{
	return this-> department;
}

// getPosition function implementation
string Employee::getPosition() const
{
	return this-> position;
}
