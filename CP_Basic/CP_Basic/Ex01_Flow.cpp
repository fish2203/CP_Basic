#include "IO.h"

// 1. if/else를 이용하여 입력받은 정수의 짝수 홀수 여부를 출력
void CheckOddEven() {
	int Num = 0;
	
	cout << "숫자를 입력하세요: ";
	cin >> Num;

	if (Num % 2 == 1) {
		cout << "홀수입니다." << endl;
	}
	else {
		cout << "짝수입니다." << endl;
	}
}

void HomeWork01() {
	int Score = 0;

	cout << "점수를 입력하세요: ";
	cin >> Score;

	switch (Score / 10) {
		case 10:
			cout << 'A' << endl;
			break;
		case 9:
		case 8:
			cout << 'B' << endl;
			break;
		case 7:
		case 6:
		case 5:
			cout << 'C' << endl;
			break;
		case 4:
		case 3:
		case 2:
		case 1:
			cout << 'D' << endl;
			break;
		default:
			cout << 'F' << endl;
	}
}

// 5) for, if, continue 키워드를 사용하여 1부터 100까지 짝수만 출력
void PrintEven() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			continue;
		}
		cout << i << ' ';
		if (i % 10 == 0) {
			cout << endl;
		}
	}
}

// 6) 수능 상위비율을 입력받은 후 등급을 출력하는 프로그램을 if문을 이용하여 작성
void CheckGrade() {
	cout << "성적 상위비율을 입력하세요:";
	float Score;
	int Grade = 0;
	cin >> Score;

	if (Score < 4) {
		Grade = 1;
	}
	else if (Score < 11) {
		Grade = 2;
	}
	else if (Score < 23) {
		Grade = 3;
	}
	else if (Score < 40) {
		Grade = 4;
	}
	else if (Score < 60) {
		Grade = 5;
	}
	else if (Score < 77) {
		Grade = 6;
	}
	else if (Score < 89) {
		Grade = 7;
	}
	else if (Score < 96) {
		Grade = 8;
	}
	else if (Score <= 100) {
		Grade = 9;
	}
	else {
		Grade = 0;
	}
	cout << "당신의 등급은 " << Grade << "등급 입니다." << endl;
}

//6-2) 등급을 입력하면 100명중 평균 몇등인지 출력하는 프로그램
void FindYourNumber() {
	cout << "등급을 입력하세요: ";
	int Grade = 0;
	float Rank = 0.0f;
	cin >> Grade;
	float Standard[] = {0, 4, 11, 23, 40, 60, 77, 89, 96, 100};
	Rank = (Standard[Grade - 1] + Standard[Grade]) / 2;
	cout << "당신은 평균 " << Rank << "등 입니다." << endl;
}