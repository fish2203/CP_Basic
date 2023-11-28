#pragma once

class Airplain {
private:
	int Energy;
	int SpecialBombNumber;

public:
	//Ŭ���� ���� ����� ���� �ѹ� ���� -> �ʱ�ȭ
	// �⺻ ������(Default Constructor)
	Airplain();
	//�Ű����� ���� �޾Ƽ� Ŭ���� �ʱ�ȭ�� �� ���
	Airplain(int EnergyNumber, int BombNumber);
	~Airplain();

	int GetEnergy();
	void SetEnergy(int EnergyNumber);

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};
