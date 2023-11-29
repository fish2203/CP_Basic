#include "IO.h"
#include "Ch17-1_OverloadingClass.h"
#include <string>

Overloading::Overloading(){
	this->Number = 1;
	this->Name = " ";
}
Overloading::~Overloading() {}


void Overloading::Print()
{
	cout << this->Name << " : " << this->Number << endl;
}

void Overloading::Print(int Number) {
	this->Number = Number;
	cout << this->Name << " : " << this->Number << endl;
}

void Overloading::Print(string Name) {
	this->Name = Name;
	cout << this->Name << " : " << this->Number << endl;
}

void Overloading::Print(int Number, string Name) {
	this->Number = Number;
	this->Name = Name;
	cout << this->Name << " : " << this->Number << endl;
}

Overloading Overloading::operator+(Overloading& arg)
{
	Overloading Temp;
	Temp.Value = this->Value + arg.Value;
	return Temp;
}