#pragma once
class Distance
{
private:
	int feet;
	float inches;

public:
	Distance(); // default constructor
	Distance(int ft, float in); // overload constructor

	void inputDistance(); // process
	void printDistance(); // process
	void addDistance(Distance d2, Distance d3);

	~Distance(); // destructor

};

