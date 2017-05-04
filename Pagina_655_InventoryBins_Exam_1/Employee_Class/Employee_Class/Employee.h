// Employee class declaration
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Header files section
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee
{
private:
	// member variables
	string name;
	int idNumber;
	string department;
	string position;

public:
	// constructors
	Employee(string aName, int anIDNumber, string aDepartment, string aPosition);
	Employee(string aName, int anIDNumber);
	Employee();

	// mutator functions
	void setName(string aName);
	void setIdNumber(int anIDNumber);
	void setDepartment(string aDepartment);
	void setPosition(string aPosition);

	// accessor functions
	string getName() const;
	int getIdNumber() const;
	string getDepartment() const;
	string getPosition() const;
};
#endif