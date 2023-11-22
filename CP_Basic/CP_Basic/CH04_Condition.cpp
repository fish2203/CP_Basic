#include "IO.h"

void IfFunction01() {
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
	//점수 입력: 90~100:A, 80~:B, 70~:C, 60~:D, 그외:F
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
	//상점에서 도둑이 들었는데, 목격자가 인상착의를 말했다.
	// 키는 약 180정도, 옷은 검정색 옷을 입고 있었다고 말했다.
	// 범인을 찾는 조건문을 작성하시오.
	// 옷색 입력값: Black = B, White = W, Red = R...

	int TallNumber = 0;
	char ClothColor = NULL; // 문자값이 존재하지 않음

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
	char ClothColor = NULL; // 문자값이 존재하지 않음

	cout << "TallNumber: ";
	cin >> TallNumber;
	cout << "ClothColor: ";
	cin >> ClothColor;
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
}

void SwitchEx() {
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
	cout << "DayNum: ";
	cin >> DayNum;

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
}

void SwitchToIf() {

	int DayNum = 0;
	cout << "DayNum: ";
	cin >> DayNum;
	//위 코드를 if문으로 바꾸기
	if (DayNum == 0) { cout << "일요일" << endl; }
	else if (DayNum == 1) { cout << "월요일" << endl; }
	else if (DayNum == 2) { cout << "화요일" << endl; }
	else if (DayNum == 3) { cout << "수요일" << endl; }
	else if (DayNum == 4) { cout << "목요일" << endl; }
	else if (DayNum == 5) { cout << "금요일" << endl; }
	else if (DayNum == 6) { cout << "토요일" << endl; }
}