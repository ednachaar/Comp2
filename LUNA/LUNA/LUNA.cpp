#include <iostream>
#include <cmath>
#include "Moon.h"

using namespace std;

int main() {

	double const ew = 5.972 * pow(10, 24); 
	Moon myMoon;

	
	myMoon.DisplayMoon();

	//Set actual moon weight

	myMoon.setMoonWeight(ew);

	myMoon.DisplayMoon();


	return 0;
}