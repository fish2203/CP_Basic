#include "ScoreClass.h"
#include "IO.h"

Student::Student() {
	this->Name = NULL;
	this->Korean = 0;
	this->English = 0;
	this->Math = 0;
}
Student::Student(char Name, int Korean, int English, int Math) {
	this->Name = Name;
	this->Korean = Korean;
	this->English = English;
	this->Math = Math;
}

Student::~Student() {}

void Student::Set(char Name, int Korean, int English, int Math) {
	this->Name = Name;
	this->Korean = Korean;
	this->English = English;
	this->Math = Math;
}

void Student::SetName(char Name) {
	this->Name = Name;
}

char Student::GetName() {
	return this->Name;
}

void Student::SetKorean(int Score) {
	this->Korean = Score;
}

int Student::GetKorean() {
	return this->Korean;
}

void Student::SetEnglish(int Score) {
	this->English = Score;
}

int Student::GetEnglish() {
	return this->English;
}

void Student::SetMath(int Score) {
	this->Math = Score;
}

int Student::GetMath() {
	return this->Math;
}

int Student::OperationTotal() {
	this->Total = this->Korean + this->English + this->Math;
	return this->Total;
}

float Student::OperationAverage() {
	this->Average = OperationTotal() / 3;
	return this->Average;
}

char Student::OperationGrade() {
	int Score = OperationAverage() / 10;
	switch (Score) {
		case 10:
		case 9:
			this->Grade =  'A';
			break;
		case 8:
			this->Grade = 'B';
			break;
		case 7:
			this->Grade = 'C';
			break;
		case 6:
			this->Grade = 'D';
			break;
		default:
			this->Grade = 'F';
			break;
	}
	return this->Grade;
}

void Student::PrintScore() {
	cout << this->Name <<
		", Korean: " << this->Korean << 
		", English: " << this->English << 
		", Math: " << this->Math << endl;
}