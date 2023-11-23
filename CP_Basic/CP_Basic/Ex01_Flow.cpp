#include "IO.h"

// 1. if/else�� �̿��Ͽ� �Է¹��� ������ ¦�� Ȧ�� ���θ� ���
void CheckOddEven() {
	int Num = 0;
	
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> Num;

	if (Num % 2 == 1) {
		cout << "Ȧ���Դϴ�." << endl;
	}
	else {
		cout << "¦���Դϴ�." << endl;
	}
}

void HomeWork01() {
	int Score = 0;

	cout << "������ �Է��ϼ���: ";
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

// 5) for, if, continue Ű���带 ����Ͽ� 1���� 100���� ¦���� ���
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

// 6) ���� ���������� �Է¹��� �� ����� ����ϴ� ���α׷��� if���� �̿��Ͽ� �ۼ�
void CheckGrade() {
	cout << "���� ���������� �Է��ϼ���:";
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
	cout << "����� ����� " << Grade << "��� �Դϴ�." << endl;
}

//6-2) ����� �Է��ϸ� 100���� ��� ������� ����ϴ� ���α׷�
void FindYourNumber() {
	cout << "����� �Է��ϼ���: ";
	int Grade = 0;
	float Rank = 0.0f;
	cin >> Grade;
	float Standard[] = {0, 4, 11, 23, 40, 60, 77, 89, 96, 100};
	Rank = (Standard[Grade - 1] + Standard[Grade]) / 2;
	cout << "����� ��� " << Rank << "�� �Դϴ�." << endl;
}