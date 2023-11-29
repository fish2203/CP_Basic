#pragma once
class Student {
private:
	char Name;
	int Korean;
	int English;
	int Math;
	int Total;
	float Average;
	char Grade;
public:
	Student();
	Student(char Name, int Korean, int English, int Math);
	~Student();
	void Set(char Name, int Korean, int English, int Math);
	void SetName(char Name);
	char GetName();
	void SetKorean(int Score);
	int GetKorean();
	void SetEnglish(int Score);
	int GetEnglish();
	void SetMath(int Score);
	int GetMath();
	int OperationTotal();
	float OperationAverage();
	char OperationGrade();
	void PrintScore();
};