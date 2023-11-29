#pragma once
#include <string>
class Overloading {
	string Name;
	int Number;

public:
	int Value = 0;
	Overloading();
	~Overloading();
	void Print();
	void Print(int Number);
	void Print(string Name);
	void Print(int Number, string Name);
	Overloading operator+(Overloading& arg);
};