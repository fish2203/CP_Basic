#include "Ch18_Inheritance.h"
#include "IO.h"

void UsedCar::PrintPrice() {
	Year = 10;
	cout << NewPrice << endl;
	cout << Year << endl;
	cout << NewPrice - (1000000 * Year) << endl;
}