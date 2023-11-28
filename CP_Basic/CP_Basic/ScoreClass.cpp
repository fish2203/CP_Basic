#include "ScoreClass.h"
#include "IO.h"

void CalculateScore() {
	Student St01('A', 100, 100, 50);
	Student St02('B', 90, 70, 80);
	Student St03('C', 70, 80, 90);
	Student St04('D', 80, 100, 90);

	St01.PrintScore();
	St02.PrintScore();
	St03.PrintScore();
	St04.PrintScore();

	cout << "Student" << St01.GetName() << "'s Grade is " << St01.OperationGrade() << endl;
	cout << "Student" << St02.GetName() << "'s Grade is " << St02.OperationGrade() << endl;
	cout << "Student" << St03.GetName() << "'s Grade is " << St03.OperationGrade() << endl;
	cout << "Student" << St04.GetName() << "'s Grade is " << St04.OperationGrade() << endl;

}