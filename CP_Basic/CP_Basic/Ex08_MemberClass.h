#pragma once
#include "IO.h"

class Member {
	string Id;
	string Name;
	int Point;

public:
	void SetName(string Name);
	string GetName();
	void SetPoint(int Point);
	int GetPoint();
	void SetId(string Id);
	string GetId();
	void PrintMember();
};