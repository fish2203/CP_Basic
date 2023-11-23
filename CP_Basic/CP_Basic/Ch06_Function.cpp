#include "IO.h"

void ParameterFunction(int param1, int param2)
{
	cout << param1 + param2 << endl;
}

int ReturnFunction()
{
	int NumberA = 10;
	int NumberB = 20;
	int Sum = 0;

	Sum = NumberA + NumberB;

	return Sum;
}

int ParamReturn(int param1, int param2) {
	return param1 + param2;
}