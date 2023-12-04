#include "Ex09_Person.h"

void CPerson::Set(string Name, int Age, int Gender)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;
}

string CPerson::GetName()
{
	return Name;
}

int CPerson::GetAge()
{
	return Age;
}

int CPerson::GetGender()
{
	return Gender;
}

void CStudent::Set(string Name, int Age, int Gender, int ID, string Major)
{
	CPerson::Set(Name, Age, Gender);
	this->ID = ID;
	this->Major = Major;
}

void CStudent::Print()
{
	cout << "======================================" << endl;
	cout << "�̸�: " << GetName() << endl;
	cout << "����: " << GetAge() << endl;
	cout << "����: ";
	if (GetGender() == 1)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
	cout << "ID: " << this->ID << endl;
	cout << "����: " << this->Major << endl;
}