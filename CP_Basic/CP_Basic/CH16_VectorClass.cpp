#include "IO.h"
#include <vector>

void VectorClass() {
	vector<int> VextorNumber;
	cout << VextorNumber.size() << endl;
	VextorNumber.push_back(10);
	cout << VextorNumber.size() << endl;
	VextorNumber.push_back(20);
	cout << VextorNumber.size() << endl;
	
	VextorNumber.pop_back();
	cout << VextorNumber.size() << endl;

	vector<int> Number(3); // 개수 지정
	vector<int> Number2(3, 2); // 개수 지정, 원소내용 지정
	
}