#include "IO.h"

#define NUMBER 100


void CPPBasic() {
	std::cout << "Hello World!\n";

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl; // endl : endline
	cout << NUMBER + 50 << endl;


	int Condition1 = 100;

	/*
		if가 포함하는 조건식의 원리
		: 결과값이 bool 데이터
		조건식의 종류
		- 비교연산식
		- bool 데이터
		- true -> 1, false -> 0
		- 산술 연산식
	*/
	if (Condition1 >= 50)
	{
		//참일때 실행 구문
		cout << Condition1 << endl;
	}

	if (true) {}
	if (false) {}
	if (1) {}
	if (0) {}
	if (20) {} // 0:false, 이외의 정수: true
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition1 >= 50 && Condition2 <= 10) {}

	/*
		if(조건식){
			// 조건식이 참일때 실행하는 구문
		}

		if(Condition){Condition is True}
		else{Condition is False}

		if(Condition){Condition is True}
		else if(Condition2) {Condition2 is True, Condition is False}
		else {Condition, Condition2 is False}
	*/

	//A, B 두 수를 입력받아 비교해서 결과 출력
	//출력: A>B: >, A<B: < A=B:==
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

	//점수 입력: 90~100:A, 80~:B, 70~:C, 60~:D, 그외:F
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

	//상점에서 도둑이 들었는데, 목격자가 인상착의를 말했다.
	// 키는 약 180정도, 옷은 검정색 옷을 입고 있었다고 말했다.
	// 범인을 찾는 조건문을 작성하시오.
	// 옷색 입력값: Black = B, White = W, Red = R...

	int TallNumber = 0;
	char ClothColor = NULL; // 문자값이 존재하지 않음

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

	// if 중첩
	/*
		if(Condition1){
			if(Condition2){
			}
		}
	*/
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "범인" << endl;
		}
		else {
			cout << "용의자" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			cout << "용의자" << endl;
		}
		else {
			cout << "시민" << endl;
		}
	}

	//switch~case
	/*
		switch가 포함하는 수식의 결과값
		: 정수, 문자
	*/
	/*
		switch(수식){
			case 결과값1:
				실행구문1
			case 결과값2:
				실행구문2
			default:
				실행구문default
		}
	*/

	//요일 번호를 입력받아 해당 번호의 요일 이름 출력
	int DayNum = 0;
	//cout << "DayNum: ";
	//cin >> DayNum;

	switch (DayNum) {
	case 0:
		cout << "일요일" << endl;
		break;
	case 1:
		cout << "월요일" << endl;
		break;
	case 2:
		cout << "화요일" << endl;
		break;
	case 3:
		cout << "수요일" << endl;
		break;
	case 4:
		cout << "목요일" << endl;
		break;
	case 5:
		cout << "금요일" << endl;
		break;
	case 6:
		cout << "토요일" << endl;
		break;
	}

	//위 코드를 if문으로 바꾸기
	if (DayNum == 0) { cout << "일요일" << endl; }
	else if (DayNum == 1) { cout << "월요일" << endl; }
	else if (DayNum == 2) { cout << "화요일" << endl; }
	else if (DayNum == 3) { cout << "수요일" << endl; }
	else if (DayNum == 4) { cout << "목요일" << endl; }
	else if (DayNum == 5) { cout << "금요일" << endl; }
	else if (DayNum == 6) { cout << "토요일" << endl; }


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
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	// 구구단 2단
	int Dan2 = 2;
	for (int i = 1; i < 10; i++) {
		cout << "2 * " << i << " = ";
		cout << Dan2 * i << endl;
	}

	//구구단
	for (int Dan = 2; Dan < 10; Dan++) {
		cout << Dan << "단 시작======" << endl;
		for (int i = 1; i < 10; i++) {
			cout << Dan << " * " << i << " = " << Dan * i << endl;
		}
		cout << Dan << "단 끝=======" << endl;
	}

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

	int count = 0;
	//cout << "반복 횟수: ";
	//cin >> count;

	//while (count > 0) {
	//	int a, b;
	//	cin >> a;
	//	cin >> b;
	//	cout <<"두 수의 합 = " << a + b << endl;
	//	count--;
	//}

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

// 비트와 바이트에 대한 이해
/*
	bit : 컴퓨터 데이터 저장의 최소단위
	byte : 컴퓨터 정보 저장의 최소단위(8bit)
	1byte = 8bit

	2진수 숫자 데이터 : 0,1
	진법 계산
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

	색 표현, 문자 표현, 아이피주소 표현 : 1byte 기준으로 확장
*/