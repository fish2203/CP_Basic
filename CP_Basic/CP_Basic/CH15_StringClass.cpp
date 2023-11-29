#include "IO.h"
#include <string>

void StringClass() {
	string Word = "Hello world welcome!";
	cout << Word << endl;

	string Word2("Word2");
	cout << Word2 << endl;

	cout << Word.size() << endl;
	cout << Word.front() << endl;
	cout << Word.back() << endl;

	cout << Word.substr(5) << endl; // 5번째 문자부터 출력
	cout << Word.substr(5, 9) << endl; // 5번째 문자부터 9개 출력

	Word2.push_back('A');
	cout << Word2 << endl;
	cout << Word2.size() << endl;
}