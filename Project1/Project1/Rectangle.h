#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
class Rectangle
{
private:
	float width;
	float length;
public:
	Rectangle(float aWidth=1.0, float aLength=1.0); // default constructor
	~Rectangle();
	Rectangle(const Rectangle &aRectangle);
	Rectangle &setLength(float aLength);
	float getWidth() const;
	float getLength() const;
	float getArea() const;
	float getPerimeter() const;
	void display() const;
	Rectangle &operator=(const Rectangle &);
	bool operator >(const Rectangle &tempRectangle);
	bool operator <(const Rectangle &tempRectangle);
	bool operator ==(const Rectangle &);
	friend ostream &operator<<(ostream &, const Rectangle &);
	friend istream &operator<<(istream &, Rectangle &);

};
#endif


