
#include <iostream> 
#include <string>

using namespace ::std;
#include "Rectangle.h"

int main() 

{

	Rectangle R1, R2(2, 4);

	R1.display();
	R2.display();
	cout << " Entre el largo y el ancho del rectangulo #1 " << endl;
	cin >> R1;
		cout << "Entre el largo y el ancho del rectangulo  #2 " << endl;
	cin >> R2;

	if (R1 == R2) {
		cout << " Los rectangulos son iguales en area\n";
	}
	else {

		if (R1 > R2) {
			cout << "El rectangulo #1 es el mayor area\n";
		}
		return 0;
	} //main
}