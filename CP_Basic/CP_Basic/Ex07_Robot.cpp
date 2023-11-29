#include "IO.h"
#include "Exo7-1_RobotClass.h"
#include <vector>

void CRObotClass() {
	string Name[4] = { "Qwerty", "Asda", "Uiop", "Mcji" };
	int Data[4][3] = {
		{18, 80, 3000},
		{17, 70, 2500},
		{20, 90, 3500},
		{22, 100, 5000}
	};

	CRobot Robot[4];

	for (int i = 0; i < 4; i++) {
		Robot[i].Set(Name[i], Data[i][0], Data[i][1], Data[i][2]);
	}

	for (int i = 0; i < 4; i++) {
		Robot[i].Print();
	}
}