#include "IO.h"

void ForFunctionDesc() {
	//반복문 for: 반복 획수를 정해서 반복 실행
/*
	for(구문1; 구문2; 구문3 ){}

	구문1
	- for 구문이 처음 실행될 때 최초 한번 실행되는 구문
	- 반복 횟수를 결정하는 변수 선언

	구문2
	- 반복 실행될 때 조건 비교식 구문
	- 조건 비교식의 결과값이 참일대 반복 실행

	구문3
	- 반복 실행되는 코드블럭이 실행된 이후에 실행되는 구문
*/
// 조건식에 사용되는 범위 숫자가 반복 횟수를 나타내도록
for (int i = 0; i < 10; i++) {
	cout << i << endl;
}
}

void ForFunctionEx01() {
	// 구구단 2단
	int Dan2 = 2;
	for (int i = 1; i < 10; i++) {
		cout << "2 * " << i << " = ";
		cout << Dan2 * i << endl;
	}
}

void ForFunctionEx02() {
	//구구단
	for (int Dan = 2; Dan < 10; Dan++) {
		cout << Dan << "단 시작======" << endl;
		for (int i = 1; i < 10; i++) {
			cout << Dan << " * " << i << " = " << Dan * i << endl;
		}
		cout << Dan << "단 끝=======" << endl;
	}
}

void WhileFunctionDesc() {
	/*
	while : 조건식이 참인 경우에 계속 실행

	while(조건비교식){}

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
	cout << "반복 횟수: ";
	cin >> count;

	while (count > 0) {
		int a, b;
		cin >> a;
		cin >> b;
		cout << "두 수의 합 = " << a + b << endl;
		count--;
	}
}

void WhileFunctionEx02() {
	//총금액 입력, 물건 수, 물건의 가격, 물건의 갯수
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