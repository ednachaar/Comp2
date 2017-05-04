#pragma once
#ifndef ROOMCARPET_H
#define ROOMCARPET_H

//include RoomDimension header file .
#include "RoomDimension.h"

class RoomCarpet
{

	double cost;
	RoomDimension rDimension;

public:
	
	//constructor 
	RoomCarpet(RoomDimension rm, double cost)

	{
		this->cost = cost
			rDimension = rm;
	}

	double totalCost()
		
	{
		return rDimension.getArea()*cost;

	}
	
};

#endif ROOMCARPET_H

//END OF ROOMCARPET HEADER FILE 
