#include "IO.h"
#include <math.h>
#include <algorithm>
void PrintArray(int Arr[], int Size);


//구름이의 다이어트
void HomeWorkMore01() {
	int StartWeightW = 0;
	int TermN = 0;

	cin >> StartWeightW;
	cin >> TermN;

	int CaloriC = 0;
	int WalkingE = 0;
	for (int i = 0; i < TermN; i++) {
		cin >> CaloriC;
		cin >> WalkingE;

		if (CaloriC > WalkingE && StartWeightW < 80) {
			StartWeightW++;
		}
		else if (CaloriC < WalkingE && StartWeightW >10) {
			StartWeightW--;
		}
	}

	cout << StartWeightW << endl;
}

//숫자 차례대로 배열에 담아 출력
void HomeWorkMore02() {
	int StartNum = 0;
	int EndNum = 0;
	
	cin >> StartNum;
	cin >> EndNum;

	int Length = EndNum - StartNum + 1;
	int* NumArray = new int[Length];

	for (int i = 0; i < Length; i++) {
		NumArray[i] = StartNum;
		StartNum++;
	}

	PrintArray(NumArray, Length);
}

//입력수가 홀수면 홀수합, 짝수면 짝수의 제곱합 리턴
int HomeWorkMore03() {
	int Num = 0;

	cin >> Num;
	int Result = 0;
	if (Num % 2 == 1) {
		for (int i = 1; i <= Num; i += 2) {
			Result += i;
		}
	}
	else {
		for (int i = 2; i <= Num; i += 2) {
			Result += i*i;
		}
	}
	return Result;
}

// 7게임
void HomeWorkMore04() {
	int NumArray[7];
	int Answer[5];
	int A = 0;
	int Num = 0;

	for (int j = 0; j < 5; j++) {
		cin >> Num;
		for (int i = 6; i >= 0; i--) {
			NumArray[i] = Num % 10;
			Num /= 10;
		}
		for (int i = 0; i < 7; i += 2) {
			A += NumArray[i];
		}
		for (int i = 1; i < 7; i += 2) {
			if (NumArray[i] != 0) {
				A *= NumArray[i];
			}
		}
		Answer[j] = A % 10;
		A = 0;
	}

	PrintArray(Answer, 5);
}

//(a||b)&&(c||d)
bool HomeWorkMore05() {
	bool a, b, c, d;
	cin >> a >> b >> c >> d;
	return (a || b) && (c || d);
}

//주사위 4개 굴려 값 얻는 게임
int HomeWorkMore06() {
	int a, b, c, d;
	int Result = 1;
	cin >> a >> b >> c >> d;
	int Arr[4] = { a, b, c, d };
	sort(Arr, Arr + 4);

	if (Arr[0] == Arr[3]) {
		Result = 1111 * a;
	}
	else if ((Arr[0] == Arr[2]) || (Arr[1] == Arr[3])) {
		Result = pow((Arr[1] * 10) + (Arr[0]==Arr[1]?Arr[3]:Arr[0]), 2);
	}
	else if ((Arr[0] == Arr[1]) && (Arr[2] == Arr[3])) {
		Result = (Arr[0] + Arr[3]) * (Arr[3] - Arr[1]);
	}
	else if ((Arr[0] == Arr[1]) || (Arr[1] == Arr[2]) || (Arr[2] == Arr[3])) {
		for (int i = 0; i < 3; i++) {
			if (Arr[i] == Arr[i + 1]) {
				Arr[i] = 1;
				Arr[i + 1] = 1;
				break;
			}
		}
		for (int i = 0; i < 4; i++) {
			Result *= Arr[i];
		}
	}
	else {
		Result = Arr[0];
	}

	return Result;
}