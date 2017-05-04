// 11.8_CaseStudy_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// This program demonstrates a function that uses a
2 // pointer to a structure variable as a parameter.
3 #include <iostream>
4 #include <string>
5 #include <iomanip>
6 using namespace std;
7
8 struct Student
9 {
	10 string name; // Student's name
	11 int idNum; // Student ID number
	12 int creditHours; // Credit hours enrolled
	13 double gpa; // Current GPA
	14 };
15
16 void getData(Student *); // Function prototype
17
18 int main()
19 {
	20 Student freshman;
	21
		22 // Get the student data.
		23 cout << "Enter the following student data:\n";
	24 getData(&freshman); // Pass the address of freshman.
	25 cout << "\nHere is the student data you entered:\n";
	26
		27 // Now display the data stored in freshman
		28 cout << setprecision(3);
	29 cout << "Name: " << freshman.name << endl;
	30 cout << "ID Number: " << freshman.idNum << endl;
	31 cout << "Credit Hours: " << freshman.creditHours << endl;
	32 cout << "GPA: " << freshman.gpa << endl;
	33 return 0;
	34 }
35