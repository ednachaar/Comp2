#include "windows.h"
#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "InventoryBins.h"
#include <stdio.h>

using namespace std;


bins::bins()
{

}

bins::bins(char *xdesc, int xparts)
{
	setdesc(xdesc);
	setparts(xparts);
}

bins::~bins()
{
	delete[] desc;
}

void bins::setdesc(char* xdesc)
{
	size = strlen(xdesc);
	desc = new char[size];
	strcpy(desc, xdesc);
}

void bins::setparts(int xparts)
{
	parts = xparts;
}

void bins::display()
{
	for (int x = 0; x < size; x++)
	{
		cout << desc[x];
	}
}

