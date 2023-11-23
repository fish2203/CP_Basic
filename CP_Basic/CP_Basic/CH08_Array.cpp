#include "IO.h"

//배열 출력 예제
void PrintArray()
{
	int ArrayNumber[3] = { 1, 2, 3 };

	for (int i = 0; i < 3; i++) {
		cout << ArrayNumber[i] << ' ';
	}
	cout << endl;

	int ArrayInit[5];
	for (int i = 0; i < 5; i++) {
		ArrayInit[i] = i + 1;
		cout << ArrayInit[i] << ' ';
	}

	cout << endl;

	char Word[] = { 'q','w','e','r','t','y' };

	for (int i = 0; i < 6; i++) {
		cout << Word[i];

	}
}

//두 수의 합을 배열에 저장
void SumArray() {
	int IterNumber = 5;
	int IterA = 0;
	int IterB = 0;
	int IterArray[5];

	//cin >> IterNumber;
	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		IterArray[i] = IterA + IterB;
	}
	for (int i = 0; i < IterNumber; i++) {
		cout << IterArray[i] << ' ';
	}
}

//성적 산출 함수
char GradeCalculate(int Score) {
	//점수 입력: 90~100:A, 80~:B, 70~:C, 60~:D, 그외:F

	switch (Score / 10) {
		case 10:
		case 9:
				return 'A';
		case 8:
			return 'B';
		case 7:
			return 'C';
		case 6:
			return 'D';
		default:
			return 'F';
	}
}

//성적 처리 함수
void ProcessGrade() {
	int Grade[6] = { 100, 99, 88, 77, 66, 55 };

	for (int i = 0; i < size(Grade); i++) {
		cout << GradeCalculate(Grade[i]) << " , ";
	}
}

//문자열 함수
void StringArray()
{
	char Word1[6] = "Hello";
	char Word2[] = "Bubble";
}

//1차원 배열 출력
void PrintArray(int Arr[], int Size) {
	for (int i = 0; i < Size; i++) {
		cout << Arr[i] << ' ';
	}
	cout << endl;
}

//버블 정렬
void BubbleSort() {
	//숫자 개수 10개
	int Number[10] = {4, 7, 1, 2, 9, 8, 3, 5, 10, 6};
	int Temp = 0;
	
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (Number[j] > Number[j + 1]) {
				Temp = Number[j];
				Number[j] = Number[j + 1];
				Number[j + 1] = Temp;
			}
		}
	}

	int Size = size(Number);
	PrintArray(Number, Size);

	cout << endl;
	
}

//2차원 배열
void MultiArray()
{
	int Number[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Number[i][j] << ' ';
		}
		cout << endl;
	}

}