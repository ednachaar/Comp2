
#ifndef INVENTORYBINS_H
#define INVENTORYBINS_H

#include <iostream>
#include <string.h>

#include "stdafx.h"


using namespace std;

class bins
{
private:
	char *desc;
	int size;
	int	parts;

public:
	
	bins(); //constructor 
	bins(char*, int);
	~bins();
	void setsize(int)
	void setdesc(char*);
	void setparts(int);
	void display();
	int getSize()const;
	const char *getDesc() const;

};
#endif                        