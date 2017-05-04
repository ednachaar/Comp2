
// Header file

#include "stdafx.h"
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include"Instructor.h"

class Instructor
{

private:
	string lastName;
	string firstName;
	string officeNumber;
public:
	Instructor();
	Instructor(string lname, string fname, string office);
	void set(string lname, string fname, string office);
	void print();

};

#endif
