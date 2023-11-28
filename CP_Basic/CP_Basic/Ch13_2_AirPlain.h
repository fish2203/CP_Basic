#pragma once

class Airplain {
private:
	int Energy;
	int SpecialBombNumber;

public:
	//클래스 선언 실행시 최초 한번 실행 -> 초기화
	// 기본 생성자(Default Constructor)
	Airplain();
	//매개변수 값을 받아서 클래스 초기화할 때 사용
	Airplain(int EnergyNumber, int BombNumber);
	~Airplain();

	int GetEnergy();
	void SetEnergy(int EnergyNumber);

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};
