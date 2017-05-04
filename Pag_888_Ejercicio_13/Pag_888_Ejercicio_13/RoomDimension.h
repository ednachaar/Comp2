#pragma once
#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H

#include "FeetInches.h"

class RoomDimension

{
public:

	//constructor 
	RoomDimension();
	~RoomDimension();

	RoomDimension(FeetInches fiLen, FeetInches fiWid)

	{

		length = fiLen.getInches();
		width = fiWid.getinches();

	}

	//return area of the room 

	double getArea()

	{

		return length*width; 
	}


};

#endif ROOMDIMENSION_H

