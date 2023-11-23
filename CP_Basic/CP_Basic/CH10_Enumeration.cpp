#include "IO.h"

void Enumeration() {
	// day 타입은 여기서 저장한 값만 지정해줄 수 있다!
	enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

	//변수 선언
	day DayName = Sun;

	//출력
	cout << DayName << endl;

	// 변수값 변경
	DayName = Wed;
	cout << DayName << endl;

	enum day DayName2 = Fri;
	cout << DayName2 << endl;

	cout << day::Mon << endl;

}