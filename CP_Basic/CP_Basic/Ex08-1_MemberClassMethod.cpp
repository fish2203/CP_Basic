#include "IO.h"
#include "Ex08_MemberClass.h"

void Member::SetName(string Name) {
	this->Name = Name;
}
string Member::GetName() {
	return this->Name;
}
void Member::SetPoint(int Point) {
	this->Point = Point;
}
int Member::GetPoint() {
	return this->Point;
}
void Member::SetId(string Id) {
	this->Id = Id;
}
string Member::GetId() {
	return this->Id;
}
void Member::PrintMember() {
	cout << this->Id << ' ' << this->Name << ' ' << this->Point << endl;
}