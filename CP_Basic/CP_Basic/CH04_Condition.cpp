#include "IO.h"

void IfFunction01() {
	int Condition1 = 100;

	/*
		if�� �����ϴ� ���ǽ��� ����
		: ������� bool ������
		���ǽ��� ����
		- �񱳿����
		- bool ������
		- true -> 1, false -> 0
		- ��� �����
	*/
	if (Condition1 >= 50)
	{
		//���϶� ���� ����
		cout << Condition1 << endl;
	}

	if (true) {}
	if (false) {}
	if (1) {}
	if (0) {}
	if (20) {} // 0:false, �̿��� ����: true
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition1 >= 50 && Condition2 <= 10) {}

	/*
		if(���ǽ�){
			// ���ǽ��� ���϶� �����ϴ� ����
		}

		if(Condition){Condition is True}
		else{Condition is False}

		if(Condition){Condition is True}
		else if(Condition2) {Condition2 is True, Condition is False}
		else {Condition, Condition2 is False}
	*/

	//A, B �� ���� �Է¹޾� ���ؼ� ��� ���
	//���: A>B: >, A<B: < A=B:==
	int NumA = 0;
	int NumB = 0;
	cout << "NumA: ";
	cin >> NumA;
	cout << "NumB: ";
	cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}
}

void IfFunctionEx02() {
	//���� �Է�: 90~100:A, 80~:B, 70~:C, 60~:D, �׿�:F
	int Score = 0;
	cout << "Score: ";
	cin >> Score;

	if (Score >= 90) {
		cout << "A" << endl;
	}
	else if (Score >= 80) {
		cout << "B" << endl;
	}
	else if (Score >= 70) {
		cout << "C" << endl;
	}
	else if (Score >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}
}

void IfFunctionEx03() {
	//�������� ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�.
	// Ű�� �� 180����, ���� ������ ���� �԰� �־��ٰ� ���ߴ�.
	// ������ ã�� ���ǹ��� �ۼ��Ͻÿ�.
	// �ʻ� �Է°�: Black = B, White = W, Red = R...

	int TallNumber = 0;
	char ClothColor = NULL; // ���ڰ��� �������� ����

	cout << "TallNumber: ";
	cin >> TallNumber;
	cout << "ClothColor: ";
	cin >> ClothColor;

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "she(he) is Thief" << endl;
	}
	else {
		cout << "she(he) is not Thief" << endl;
	}
}

void IfFunctionEx04() {

	int TallNumber = 0;
	char ClothColor = NULL; // ���ڰ��� �������� ����

	cout << "TallNumber: ";
	cin >> TallNumber;
	cout << "ClothColor: ";
	cin >> ClothColor;
	// if ��ø
	/*
	if(Condition1){
		if(Condition2){
		}
	}
	*/
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			cout << "������" << endl;
		}
		else {
			cout << "�ù�" << endl;
		}
	}
}

void SwitchEx() {
	//switch~case
	/*
		switch�� �����ϴ� ������ �����
		: ����, ����
	*/
	/*
		switch(����){
			case �����1:
				���౸��1
			case �����2:
				���౸��2
			default:
				���౸��default
		}
	*/

	//���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸� ���
	int DayNum = 0;
	cout << "DayNum: ";
	cin >> DayNum;

	switch (DayNum) {
	case 0:
		cout << "�Ͽ���" << endl;
		break;
	case 1:
		cout << "������" << endl;
		break;
	case 2:
		cout << "ȭ����" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
		cout << "�ݿ���" << endl;
		break;
	case 6:
		cout << "�����" << endl;
		break;
	}
}

void SwitchToIf() {

	int DayNum = 0;
	cout << "DayNum: ";
	cin >> DayNum;
	//�� �ڵ带 if������ �ٲٱ�
	if (DayNum == 0) { cout << "�Ͽ���" << endl; }
	else if (DayNum == 1) { cout << "������" << endl; }
	else if (DayNum == 2) { cout << "ȭ����" << endl; }
	else if (DayNum == 3) { cout << "������" << endl; }
	else if (DayNum == 4) { cout << "�����" << endl; }
	else if (DayNum == 5) { cout << "�ݿ���" << endl; }
	else if (DayNum == 6) { cout << "�����" << endl; }
}