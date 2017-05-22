// Deitel_Pag532_12.9.cpp : Defines the entry point for the console application.

#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>

using std::string;

class Package

{
public:
	//constructor initianizes data members.

	Package(const string &, const string &, const string &,
		const string &, int, const string &, const string&,
		const string &,
		const string &, int double, double);

	void setSenderName(const string &); // set sender's name
	string getSenderName() const; // returns senders name
	void setSenderAddress(const string &); // set sender's address
	string getSenderAddress()const; //return sender address
	void setSenderCity(const string &);//set senders city
	string getSenderCity() const; //returns senders city
	void setSenderState(const string &); //set sender's state
	string getSenderState()const; //returns sender's state
	void setSenderZIP(int); //set sender's zip code
	int getSenderZIP() const;//return sender's zip code
	void setRecipientName(const string &) //set recipients name
	string getRecipientName()const; //return recipient name
	void setRecipientAddress(const string &);// set recipient's address
	string getRecipientAddress()const;
	void setRecipientCity(const string &); //set recipient's city
	string getRecipientCity() const; //return's recipient city
	void setRecipientState(const string &); //set recipient's state
	string getRecipientState()const; //return recipient's state
	void setRecipientZIP(int);//set recipient's zip code
	int getRecipientZIP()const; //return recipient's zip code
	void setWeight(double); //validate and store weight
	double getWeight()const;//return weight of package
	void setCostPerOunce(double); //validate and store cost per ounce
	double getCostPerOunce() const; //return cost per ounce
	double calculateCost()const; //calculate shipping cost for package

private: //data members to store sender and recipients address information

	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	int senderZIP;
	string recipientName;
	string recipientAddress;
	string recipientCity;
	string recipientState;
	int recipientZIP;

	double weight; // weight of the package 
	double costPerOunce; //cost per ounce to ship the package

}; //end class package 

#endif