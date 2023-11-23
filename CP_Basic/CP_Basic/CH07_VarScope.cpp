#include "IO.h"

int GlobalNumber = 10;

void Sum()
{
	int FunctionLocalNumber = 20;

	for (int i = 0; i < 3; i++) {
		cout << "Global: " << GlobalNumber + i << endl;
		cout << "FunctionLocal: " << FunctionLocalNumber + i << endl;
	}

	cout << "Global: " << GlobalNumber << endl;
	cout << "FunctionLocal: " << FunctionLocalNumber << endl;

}