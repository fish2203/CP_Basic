#include "IO.h"

int arr[] = {1, 6, 9, 7, 3, 2, 0, 4, 8, 5};

void ArraySum() {
	int Sum = 0;
	for (int i = 0; i < size(arr); i++) {
		Sum += arr[i];
	}
	cout << Sum << endl;
}

void PrintArr() {
	for (int i = 0; i < size(arr); i++) {
		cout << arr[i] << ' ';
	}
}

void FindArrayMinMax() {
	int Temp = 0;
	for (int i = size(arr) - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				Temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = Temp;
			}
		}
	}
	cout << "�ּҰ�: " << arr[0] << endl;
	cout << "�ִ�: " << arr[size(arr)-1] << endl;
}

void ReverseArray() {
	int Temp = 0;

	for (int i = 0; i < size(arr); i++) {
		if (i < size(arr) - i) {
			Temp = arr[i];
			arr[i] = arr[size(arr) - 1 - i];
			arr[size(arr) - 1 - i] = Temp;
		}
		else {
			break;
		}
	}

	PrintArr();
}

void SortArray() {
	int Temp = 0;
	for (int i = size(arr) - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				Temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = Temp;
			}
		}
	}

	PrintArr();
}

void Average() {
	float Grade[4][3] = {
		{100, 100, 50},
		{90, 70, 80},
		{70, 80, 90},
		{80, 100, 90}
	};

	for (int i = 0; i < 4; i++) {
		cout << i + 1 << "�� �л��� ���: ";
		float Sum = 0;
		for (int j = 0; j < 3; j++) {
			Sum += Grade[i][j];
		}
		cout << Sum / 3 << "��" << endl;
	}
	
	float GradeSum = 0;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			GradeSum += Grade[i][j];
		}
		cout << j + 1 << "��° ���� ���: " << GradeSum / 4 << "��" << endl;
		GradeSum = 0;
	}
}