#pragma once
#include "IO.h"

class CPerson
{
private:
	string Name = {NULL};
	int Age = 0;
	int Gender = 0;

public:
	void Set(string Name, int Age, int Gender);
	string GetName();
	int GetAge();
	int GetGender();

};

class CStudent : public CPerson
{
private:
	int ID = 0;
	string Major = {NULL};
public:
	void Set(string Name, int Age, int Gender, int ID, string Major);
	void Print();
};

