#pragma once
class Car 
{
public:
	int Year = 10;
};

class UsedCar : public Car
{
private:
	int NewPrice = 30000000;
public:
	void PrintPrice();
};

