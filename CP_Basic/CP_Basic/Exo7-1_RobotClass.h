#pragma once
/*
	1) CRobot Ŭ����, Set, Print
	�κ� ���� ��� ���
*/
#include <string>
using namespace std;

class CRobot {
private:
	string Name;
	int Height;
	int Weight;
	int Hp;
public:
	void Set(string Name, int Height, int Weight, int Hp);
	void Print();
};