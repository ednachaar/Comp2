#define _WIN32_WINNT 0x0500
#include "windows.h"
#include "stdafx.h"
#include <iostream>
#include "Rect.h"
#include <stdio.h>
using namespace std;

Rect::Rect() {
	base = altura = 100; //inicializa base y altura con 0
	xInit = yInit = 100; //inicializa los valores iniciales de x y y con 0
	color = RGB(255, 255, 100); //color inicial
} //default constructor

Rect::Rect(double xInit, double yInit, double base, double altura, COLORREF color) {
	this->xInit = xInit;
	this->yInit = yInit;
	this->base = base;
	this->altura = altura;
	this->color = color;
}//contructora #2

void Rect::setBase(double base) {
	this->base = base;
}

void Rect::setAltura(double altura) {
	this->altura = altura;
}

void Rect::fPlot() {
	HWND myConsole = GetConsoleWindow(); //agarra la consola

										 //Hace que la pantalla mida 600x500
										 //SetWindowPos(myConsole, 0, 0, 500, 600, 500, SWP_NOMOVE | SWP_NOZORDER);
	HDC myDC = GetDC(myConsole);

	for (int yCoor = yInit; yCoor < (yInit + ((int)altura)); ++yCoor) { //vertical plot
		for (int xCoor = xInit; xCoor < (xInit + ((int)base)); ++xCoor) //horizontal plot
			SetPixel(myDC, xCoor, yCoor, color); //pixel painter
	}

	ReleaseDC(myConsole, myDC);
}//plotting function

Rect::~Rect() {

}//destructor