#include "IO.h"
#include "DefineFunction.h"

//함수 원형 : main 함수 위에 선언
void CallFunction();

int main()
{
	//함수 호출
	CallFunction();
}

//함수 정의 : 메인함수 뒤에 정의해야함
void CallFunction() {
	cout << "HI" << endl;
}