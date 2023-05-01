#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance() {
	cout << "Display the distance" << endl;
	feet = 0;
	inches = 0.0;
}

Distance::Distance(int ft, float in) {
	feet = ft;
	inches = in;
}

void Distance::inputDistance() {
	cout << "Enter the feet value : ";
	cin >> feet;

	cout << "Enter the inches value : ";
	cin >> inches;
}

void Distance::printDistance() {
	cout << "Feet = " << feet << "\t" << "inches = " << inches << endl;
}

void Distance::addDistance(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches;
	if (inches >= 12.0)
	{
		inches = inches - 12.0;
		feet++;
	}
	feet = feet + (d2.feet + d3.feet);
}

Distance::~Distance() {
	cout << "Distance deleted" << endl;
}