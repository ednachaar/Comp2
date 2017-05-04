#define _WIN32_WINNT 0x0500
#include "windows.h"
#include "stdafx.h"
#include <iostream>
#include "Rect.h"
#include <stdio.h>
using namespace std;

int main() {
	Rect rectangulo(100, 100, 30, 30, RGB(255, 100, 100));

	rectangulo.fPlot();

	cin.ignore();
	system("pause");
	return 0;
} // end 