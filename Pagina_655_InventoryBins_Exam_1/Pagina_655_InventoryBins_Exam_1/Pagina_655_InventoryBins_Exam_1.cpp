// Pagina_655_InventoryBins_Exam_1.cpp : Defines the entry point for the console application.
//
#include "windows.h"
#include "stdafx.h"
#include <iostream>
#include "inventorybins.h"
#include "inventorybins.cpp"


using namespace std;

int main()
{
	char desc[100];
	int parts, objects;

	cout << "Enter the amount of bins you have:" << endl;
	cin >> objects;

	/*while (objects > 10)
	
	*/

	bins bin[objects];
	for (int x = 0; x < objects; x++)
	{
		cout << "Enter the name of the part: " << endl;

		cin >> desc;

		cout << "Enter the amount of parts there are in the bin: " << endl;
	
		cin >> parts;
		bin[x].setdesc(desc); //set dess array
		bin[x].setparts(parts);// cantidad de partes
	}


	for (int x = 0; x < objects; x++)
	{
		bin[x].display();
	}
}