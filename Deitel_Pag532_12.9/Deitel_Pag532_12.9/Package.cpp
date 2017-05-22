#include "stdafx.h"
#include "Package.h" // package class definition 

//constructor initializee data member 
Package::Package(const string &sName,
	const string &sAddress, const string &sCity,
	const string &sState, int sZIP, const string &rName,
	const string &rAddress, const string, &rCity, const
	string &rState, int rZIP, double w, double cost)
	: senderName(sName), senderAddress(sAddress),
	senderCity(sCity),
	senderState(sState), senderZIP(sZIP),
	recipientName(rName),
		recipientAddress ( rAddress ), recipientCity ( rCity ),
		recipientState ( rState ), recipientZIP ( rZIP )
{

	setWeight(w); //validate and store weight
	setCostPerOunce(cost); //validate and store cost per ounce
} // end package constructor 

//set sender's name 

void Package::setSenderName (const string &name )
{
	senderName = name;
} //end function sender name 

//return senders name 
string Package::getSenderName() const
{
	return senderName;
} //end funtion getSenderName

//set sender's address
void Package::setSenderAddress(const string &address)
{
	senderAddress = address ;
}// end funtion setSenderAddres

//return sender's address 
string Package::getSenderAddress()const
{
	return senderAddress;
} //end function getSender Address 
//set sender's city
void Package::setSenderCity(const string&city)
{
	senderCity = city;
} //end function setSenderCity
//return senders city
string Package::getSenderCity()const
{
	return senderCity;
} //end function getSenderCity
//set sender's state
void Package::setSenderState(const string &state)
{
	senderState = state;
}// end function setSenderState
//returns sender state
string Package::getSenderState() const
{
	return senderState;
} //end function getsenderState
//set sender's zip code 
void Package::setSenderZIP(int zip)
{
	senderZIP = zip;
} // end function setSenderZIP
//return sender's zip code
int Package::getSenderZIP() const
{
	return senderZIP;
}//end function getSenderZIP
//set recipients name
void Package::setRecipientName(const string &name)
{
	recipientName = name;
}// end function setRecipientName
//return recipients name

string Package::getRecipientName() const
{
	return recipientName;

}// end function return getrecipientName
//set recipients address
void Package::setRecipientAddress(const string &address)
{
	recipientAddress = address;
}//end function setRecipientAddress
//return recipients address
string Package::getRecipientAddress() const
{
	return recipientAddress;
}//end function getRecipientAddress
//set recipient's city
void Package::setRecipientCity(const string &city)
{
	recipientCity = city;
}//end function setRecipientCity
//return recipients city
string Package::getRecipientCity() const
{
	return recipientCity;
}//end function getRecipientCity
//set recipient state
void Package::setRecipientState(const string &state)
{
	recipientState = state;
}

//edn function  setRecipientState
//return' recipient state
string Package::getRecipientState() const
{
	return RecipientState;
}// end function getRecipientState
//Set recipient's ZIP code
void Package::setRecipientZIP(int zip)
{
	recipientZIP = zip;
}// end function setRecipientZIP
//return recipient's ZIP code
int Package::getRecipientZIP() const
{
	return recipientZIP;
}//end function getRecipientZIP
//validate and store weight
void Package::setWeight(double w)
{
	weight = (w < 0.0) ? 0.0 : w;
}// end function setWeight
//return weight of package
double Package::getWeight() const
{
	return weight;
}//end function getWeight
//validate and store cost per ounce
void Package::setCostPerOunce(double cost)
{
	costPerOunce = (cost < 0.0) ? 0.0 : cost; 
} // end function setCostPerOunce
//return cost per ounce
double Package::getCostPerOunce() const
{
	return costPerOunce;
}//end function getCostPerOunce
//calculate shipping cost for package 
double Package::calculateCost() const
{
	return getWeight() * getCostPerOunce();
}//end function calculateCost


















