#include "stdafx.h"
#include "OvernightPackage.h" //OvernightPackage class definition

//constructor
OvernightPackage::OvernightPackage( const string &sName,
	const string &sAddress, const string &sCity, const
	string &sState,
		int sZIP, const string &rName, const string &rAddress, 
		const string &rCity, const string &rState, int rZIP,
		double w, double cost, double fee )
{
	setOvernightFeePerOunce(fee);
			//validate and store overnight fee 
} //end OvernightPackage constructor 

//set overnight fee
void OvernightPackage::setOvernightFeePerOunce(double
	overnightFee)

{
	overnightFeePerOunce =
		(overnightFee < 0.0) ? 0.0 : overnightFee;
} //end function setOvernightFeePerOunce

//return overnight fee
double OvernightPackage::getOvernightFeePerOunce() const
{
	return overnightFeePerOunce;
} //end function getOvernightFeePerOunce

//calculate shipping cost for package 
double OvernighPackage::calculateCost() const
{
	return getWeight() * (getCostPerOunce() +
		getOvernightFeePerOunce());
} //end function calculateCost 