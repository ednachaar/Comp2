
// Instructor.cpp


#include "stdafx.h"
#include "Instructor.h"
#include<iostream>
#include<string>

Instructor::Instructor()
{
	set("", "", "");
}
Instructor::Instructor(string lname, string fname, string office)
{
	set(lname, fname, office);
}

void Instructor::set(string lname, string fname, string office)
{
	lastName = lname;
	firstName = fname;
	officeNumber = office;
}
void Instructor::print()
{
	cout << "Last Name: " << lastName << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Office Number: " << officeNumber << endl;
}