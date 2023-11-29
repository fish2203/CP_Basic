#pragma once
/*
	1) CRobot 클래스, Set, Print
	로봇 명세를 모두 출력
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