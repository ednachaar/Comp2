#include "stdafx.h"
#include "ParkingTicket.h"


ParkingTicket::ParkingTicket()
{
	fine = 0;
}
ParkingTicket::ParkingTicket(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased)
{
	PC.set(amake, amodel, acolor, alicensenumber, aparkedminutes);
	PM.setparkingmeter(aminutespurchased);
	//PO.setOfficer(aname, abadge);
}

ParkingTicket::ParkingTicket(PoliceOfficer PO)
{
	PC.set(PO.getCar().getmake(), PO.getCar().getmodel(), PO.getCar().getcolor(), PO.getCar().getlicensenumber(), PO.getCar().getparkedminutes());
	PM.setparkingmeter(PO.getMeter().getparkingmeter());
	//PO.setOfficer(PO.getname(),PO.getbadge());
}
ParkingTicket::~ParkingTicket()
{
}
void ParkingTicket::reportCarInfo()
{
	PC.parkedcardisplay();
}
void ParkingTicket::reportfine()
{
	int illegaltime = PC.getparkedminutes() - PM.getparkingmeter();
	if (illegaltime> 0 && illegaltime <= 60) {
		fine = 25;
	}
	else {
		if (illegaltime > 60)
		{
			int temp = illegaltime;
			fine = 25;
			while (temp > 0 || temp > 60)
			{
				fine += 10;
				temp -= 60;
			}
		}
	}
	cout << "Fine: $" << getfine() << endl;
}
void ParkingTicket::reportOfficer()
{
	//PO.displayofficer();
}
int ParkingTicket::getfine() const
{
	return fine;
}

void ParkingTicket::generateticket()
{
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << " ~ILLEGAL PARKING TICKET~" << endl;
	cout << "-----------------------------" << endl;
	reportCarInfo();
	reportfine();
	//reportOfficer();
	cout << endl;
}