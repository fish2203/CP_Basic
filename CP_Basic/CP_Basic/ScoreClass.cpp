#include "ScoreClass.h"
#include "IO.h"

void CalculateScore() {
	Student St01('A', 100, 100, 50);
	Student St02('B', 90, 70, 80);
	Student St03('C', 70, 80, 90);
	Student St04('D', 80, 100, 90);

	/*
		데이터 입력 방법
		- 키보드 직접 입력
		- 파일, 데이터베이스 불러오기 -> 변수에 저장
	*/

	char Name[4] = {'A', 'B', 'C', 'D'};

	int Score[4][3] = {
		{100, 100, 50},
		{90, 70, 80},
		{70, 80, 90},
		{80, 100, 90}
	};

	Student st[4];
	for (int i = 0; i < 4; i++) {
		st[i].Set(Name[i], Score[i][0], Score[i][1], Score[i][2]);
	}

	for (int i = 0; i < 4; i++) {
		st[i].PrintScore();
	}

	cout << "Student" << St01.GetName() << "'s Grade is " << St01.OperationGrade() << endl;
	cout << "Student" << St02.GetName() << "'s Grade is " << St02.OperationGrade() << endl;
	cout << "Student" << St03.GetName() << "'s Grade is " << St03.OperationGrade() << endl;
	cout << "Student" << St04.GetName() << "'s Grade is " << St04.OperationGrade() << endl;

}