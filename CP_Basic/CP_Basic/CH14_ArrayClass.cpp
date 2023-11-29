#include "IO.h"
#include <array>

/*
	C++ STL(Standard Library : ǥ�� ���̺귯��)
	( ���̺귯��: Ŭ���� ��ü, �Լ��� ��Ƴ�����)
	( ���̺귯��, �����ӿ�ũ, ����: Ư�� ����� ��Ƽ� ��, ������ ������ �� ����� �� �ְ� ���� ��

	Array class, String class

	Array, String Ŭ���� ����
	- �� Ŭ������ ���Ե� ������Ƽ, �޼ҵ带 ���
*/

void ArrayClass()
{
	//array<Ÿ��, ����> �̸� = {����};
	array<int, 3> Number = { 10, 20, 30 };

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.at(1) << endl;

}