#include "IO.h"

void ForFunctionDesc() {
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
for (int i = 0; i < 10; i++) {
	cout << i << endl;
}
}

void ForFunctionEx01() {
	// ������ 2��
	int Dan2 = 2;
	for (int i = 1; i < 10; i++) {
		cout << "2 * " << i << " = ";
		cout << Dan2 * i << endl;
	}
}

void ForFunctionEx02() {
	//������
	for (int Dan = 2; Dan < 10; Dan++) {
		cout << Dan << "�� ����======" << endl;
		for (int i = 1; i < 10; i++) {
			cout << Dan << " * " << i << " = " << Dan * i << endl;
		}
		cout << Dan << "�� ��=======" << endl;
	}
}

void WhileFunctionDesc() {
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
}

void WhileFunctionEx01() {
	int count = 0;
	cout << "�ݺ� Ƚ��: ";
	cin >> count;

	while (count > 0) {
		int a, b;
		cin >> a;
		cin >> b;
		cout << "�� ���� �� = " << a + b << endl;
		count--;
	}
}

void WhileFunctionEx02() {
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