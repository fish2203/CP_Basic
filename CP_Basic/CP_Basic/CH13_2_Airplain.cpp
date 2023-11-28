#include "Ch13_2_AirPlain.h"
#include "IO.h"

Airplain::Airplain() {
	Energy = 0;
	SpecialBombNumber = 0;

	cout << "Class Construct" << endl;
}

Airplain::Airplain(int EnergyNumber, int BombNumber) {
	Energy = EnergyNumber;
	SpecialBombNumber = BombNumber;

	cout << "Class Parameter Construct" << endl;
}

Airplain:: ~Airplain() {
	cout << "Class Destruct" << endl;
}

void Airplain::SetEnergy(int EnergyNumber) {
	Energy = EnergyNumber;
}

int Airplain::GetEnergy() {
	return Energy;
}

void Airplain::SetBomb(int BombNumber) {
	SpecialBombNumber = BombNumber;
}

int Airplain::GetBomb() {
	return SpecialBombNumber;
}


void Airplain::PrintEnergy() {
	cout << Energy << endl;
}

void Airplain::PrintBomb() {
	cout << SpecialBombNumber << endl;
}