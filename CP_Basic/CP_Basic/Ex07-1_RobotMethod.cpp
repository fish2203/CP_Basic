#include "IO.h"
#include "Exo7-1_RobotClass.h"

void CRobot::Set(string Name, int Height, int Weight, int Hp) {
	this->Name = Name;
	this->Height = Height;
	this->Weight = Weight;
	this->Hp = Hp;
}

void CRobot::Print() {
	cout << Name << ' ' << Height << ' ' << Weight << ' ' << Hp << endl;
}