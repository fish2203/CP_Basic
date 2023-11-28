#include "IO.h"
#include "Ch13_1_ClassHeader.h"
#include "Ch13_2_AirPlain.h"

/*
	���� ����: ������ ������ ��𿡼� ������� ��� ���� ����

	Ŭ���� ���ο����� ��� ����: private
	Ŭ���� �ܺο����� ��� ����: public
	��ӵ� Ŭ�������� ��� ����: protected

	private, public, protected Ű���带 ����ؼ� ���� ����
	Ű���带 ������� ������ �⺻ => private
*/

class Car {
public: 
	char Size = NULL;
	char Color = NULL;
	float Weight = 0.0f;

	void MoveFoward() {
		cout << "Move Forward" << endl;
	}

	void MoveBackward() {
		cout << "Move Backward" << endl;
	}

	void Break() {
		cout << "Break" << endl;
	}
};

void DefineClass() {
	Car Ray;

	Ray.Size = 'S';

	Ray.MoveFoward();
}

void PrintPlayer() {
	Player Pino;

	Pino.SetData();

	Pino.PrintItemNumber();
	Pino.PrintEnergy();
	Pino.PrintWeapon();
	
	Pino.ItemNumber = 8;
}

void PrintAirplain() {
	Airplain F16;

	F16.SetEnergy(100);
	F16.SetBomb(10);

	F16.PrintEnergy();
	F16.PrintBomb();

	F16.SetEnergy(F16.GetEnergy() - 30);
	F16.SetBomb(F16.GetBomb() - 3);

	F16.PrintEnergy();
	F16.PrintBomb();

	Airplain KF21(100, 20);

	KF21.PrintEnergy();
	KF21.PrintBomb();
}

void DynamicAirplain() {
	Airplain Boeing(300, 20);

	Boeing.PrintEnergy();

	//��������
	Airplain* A10 = new Airplain;

	A10->PrintEnergy(); // A10.PrintEnergy();�� ����
}