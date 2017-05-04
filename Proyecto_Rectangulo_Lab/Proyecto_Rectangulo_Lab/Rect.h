#ifndef RECT_H_
#define RECT_H_
#include "windows.h"

class Rect {
private:
	double base, altura, xInit, yInit;
	COLORREF color;
public:
	Rect();
	Rect(double, double, double, double, COLORREF);
	~Rect();
	void setBase(double);
	void setAltura(double);
	double getBase() const;
	double getAltura() const;
	void setColor(COLORREF);
	void setCoords(double, double);
	void moveCoords(double, double);
	void fPlot();
	void fErase();
};
#endif