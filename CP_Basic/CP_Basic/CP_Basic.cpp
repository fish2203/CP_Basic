// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream

#define NUMBER 100

using namespace std;
// std::cout => cout

void CallFunction();

int main()
{
	//std::cout << "Hello World!\n";

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl; // endl : endline
	cout << NUMBER + 50 << endl;

	// Ű����, ����� : ����, ��ɹ�
	// Ű���� : ���� Ÿ�� ����

	int Number1; // ���� ����
	Number1 = 10; // �ʱⰪ ����

	int Number2 = 10; // ���� ���� �� �ʱ�ȭ

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// �ɺ��� ���(Constant)
	const int Number5 = 10;

	// Number5 = 30; // ���� ������ �� ����

	// ������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ���

	// ������ Ÿ��(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	// �Ǽ��� Ÿ��(float)
	float Num10 = 1.234f;
	double Num11 = 1.234;

	// ���� ������ : ����(1��), ���ڿ�(2���̻�)
	// char : character
	// char Ÿ�� ���� ǥ�� : '' ���
	// ���ڿ� : "" ���
	char Letter = 'a';

	// bool Ÿ�� ������
	// ��/���� ���� : True/False, Yes/No, On/Off
	bool Condition = true;

	// auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// ���� ���꿡�� �ݺ� ������ ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1;
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;

	cout << "=============================" << endl;

	/*
		�� ����
		ũ����� ����� ��/�������� ���´�.
		���� ��¿����� 1/0���� ���´�.

		true = �� = 1
		false = ���� = 0
	*/

	int Compare1 = 10;
	int Compare2 = 20;

	// >: ũ��, <: �۴� => ���� ����
	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 10 ) << endl;
	cout << (10 >= Compare1) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;

	//������ : bool ������ ����
	/*
		AND : && (&: ampersand)

		true && true : true
		true && false : false
		=> bool �����Ͱ� ��� true�϶� ����� true

		OR : ||  (|: pipe)

		true || true : true
		true || false : true
		false || false : false
		=> bool �������� �ϳ��� true�̸� ����� true

		NOT : !

		!true : false
		!false : true
		=>bool �������� ������� �ݴ�� ����
	*/
	cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
	cout << !(Compare1 > Compare2) << endl;

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
	if(1){}
	if(0){}
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
	//cout << "NumA: ";
	//cin >> NumA;
	//cout << "NumB: ";
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

	//���� �Է�: 90~100:A, 80~:B, 70~:C, 60~:D, �׿�:F
	int Score = 0;
	//cout << "Score: ";
	//cin >> Score;

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

	//�������� ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�.
	// Ű�� �� 180����, ���� ������ ���� �԰� �־��ٰ� ���ߴ�.
	// ������ ã�� ���ǹ��� �ۼ��Ͻÿ�.
	// �ʻ� �Է°�: Black = B, White = W, Red = R...

	int TallNumber = 0;
	char ClothColor = NULL; // ���ڰ��� �������� ����

	//cout << "TallNumber: ";
	//cin >> TallNumber;
	//cout << "ClothColor: ";
	//cin >> ClothColor;

	//if (TallNumber >= 180 && ClothColor == 'B') {
	//	cout << "she(he) is Thief" << endl;
	//}
	//else {
	//	cout << "she(he) is not Thief" << endl;
	//}

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
	//cout << "DayNum: ";
	//cin >> DayNum;

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

	//�� �ڵ带 if������ �ٲٱ�
	if (DayNum == 0) {cout << "�Ͽ���" << endl;}
	else if (DayNum == 1) {cout << "������" << endl;}
	else if (DayNum == 2) {cout << "ȭ����" << endl;}
	else if (DayNum == 3) {cout << "������" << endl;}
	else if (DayNum == 4) {cout << "�����" << endl;}
	else if (DayNum == 5) {cout << "�ݿ���" << endl;}
	else if (DayNum == 6) {cout << "�����" << endl;}


	//�ݺ��� for: �ݺ� ȹ���� ���ؼ� �ݺ� ����
	/*
		for(����1; ����2; ����3 ){}

		����1
		- for ������ ó�� ����� �� ���� �ѹ� ����Ǵ� ����
		- �ݺ� Ƚ���� �����ϴ� ���� ����

		����2
		- �ݺ� ����� �� ���� �񱳽� ����
		- ���� �񱳽��� ������� ���ϴ� �ݺ� ����

		����3
		- �ݺ� ����Ǵ� �ڵ���� ����� ���Ŀ� ����Ǵ� ����
	*/
	// ���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	// ������ 2��
	int Dan2 = 2;
	for (int i = 1; i < 10; i++) {
		cout << "2 * " << i << " = ";
		cout << Dan2 * i << endl;
	}

	//������
	for (int Dan = 2; Dan < 10; Dan++) {
		cout << Dan << "�� ����======" << endl;
		for (int i = 1; i < 10; i++) {
			cout << Dan << " * " << i << " = " << Dan * i << endl;
		}
		cout << Dan << "�� ��=======" << endl;
	}

	/*
		while : ���ǽ��� ���� ��쿡 ��� ����

		while(���Ǻ񱳽�){}

		while(Total > 100){}
		while(True){}
		while(1){}
	*/

	int iter = 0;
	while (iter < 10) {
		cout << iter << endl;
		iter++;
	}

	int count = 0;
	//cout << "�ݺ� Ƚ��: ";
	//cin >> count;

	//while (count > 0) {
	//	int a, b;
	//	cin >> a;
	//	cin >> b;
	//	cout <<"�� ���� �� = " << a + b << endl;
	//	count--;
	//}

	//�ѱݾ� �Է�, ���� ��, ������ ����, ������ ����
	int Total = 0;
	cout << "Total: ";
	cin >> Total;
	int Count1 = 0;
	cout << "How Many?: ";
	cin >> Count1;
	for (int i = 0; i < Count1; i++) {
		cout << "Please input item's price and number: ";
		int a, b;
		cin >> a >> b;
		Total -= a * b;
	}
	if (Total == 0) {
		cout << "Correct!" << endl;
	}
	else {
		if (Total > 0) {
			cout << "over priced" << endl;
		}
		else {
			cout << "lower priced" << endl;
		}
	}
}

void CallFunction() {
	cout << "HI" << endl;
}

// ��Ʈ�� ����Ʈ�� ���� ����
/*
	bit : ��ǻ�� ������ ������ �ּҴ���
	byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte = 8bit

	2���� ���� ������ : 0,1
	���� ���
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

	�� ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ��
*/