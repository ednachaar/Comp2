
#include <iostream>
using namespace :: std;
#include "Rectangle.h"

using namespace std;

ostream &operator<<(ostream &output, const Rectangle &tempRectangle) {
	output << " Width: " << tempRectangle.getWidth() << endl;
	output << "Length: " << tempRectangle.getLength() << endl;
	output << " Area : " << tempRectangle.getArea() << endl;
	return output;
} //end operator << 

istream &operator >> (istream &input, Rectangle &tempRectangle) {
	cout << " Enter the width: ";
	input >> tempRectangle.getWidth;
	cout << " Enter the lenght: ";
	input >> tempRectangle.getLength;
	return input;
} // en operator >>

bool Rectangle :: operator> (const Rectangle &tempRectangle) {
	
	bool flag = false;
	if (tempRectangle.getArea() == this->getArea())
		flag = true;
	return flag;
} 
bool Rectangle :: operator< (const Rectangle &tempRectangle) {

	bool flag = false;
	if (this->getArea() > tempRectangle.getArea())
		flag = true;
	return flag;
}

float Rectangle::getLength() const
{
	return 0.0f;
}

void Rectangle::display() const
{
}

Rectangle & Rectangle ::operator=( const Rectangle &tempRectangle)
{ 
	this-> width = tempRectanble.getWidth();
	this-> length = temRectangle.getLength();
	return *this; 
}

bool Rectangle :: operator< (const Rectangle &tempRectangle) {

	bool flag = false;
	if (tempRectangle.getArea() == this->getArea())
		flag = true;
	return flag;
}