#include "IO.h"
#include "Ch17-1_OverloadingClass.h"
#include <string>

/*
	�ߺ� ����: �����ε�
	- �Լ�(�޼ҵ�) �����ε�
	- ������ �����ε�

	: ������ �̸��� �Լ��� �������� �Ű�����(������ Ÿ��, ����)�� 
	������ �� �ֵ��� ����

	Ex)
	void Print(){}
	void Print(int a){}
	void Print(float b){}

	: ������ �����ڸ� �������� ������ Ÿ��, ������ ������ �� �ֵ���
	����
*/

void OverloadingFunction()
{
	Overloading Over;

	Over.Print();
	Over.Print(100);
	Over.Print("��Ŀ����");
	Over.Print(300, "Hilton");

	// ����: People1(Ŭ����) + People(Ŭ����)
	// ������ �����ε�: Ŭ���� ���� ���� �� ����

	// ù ��° Ŭ���� ��ü ����
	Overloading t1;
	t1.Value = 1;

	// �ι�° Ŭ���� ��ü ����
	Overloading t2;
	t2.Value = 2;

	// �ΰ��� Ŭ���� ��ü ����
	Overloading Result = t1 + t2; // Ŭ�������� ���ϴ°ɷ� ����� ������ �����ε� ������ ������
	cout << Result.Value << endl;
}