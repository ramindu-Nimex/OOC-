#include <iostream>
#include "Distance.h"
using namespace std;

int main() {
	Distance obj1; // static memory allocation-static object
	obj1.printDistance(); // default constructor

	Distance obj2(11, 6.25); // static object
	obj2.printDistance(); // overloaded constructor

	Distance* dist1 = new Distance(); // dynamic memory allocation-dist1 = dynamic object
	dist1->printDistance();

	Distance* dist2 = new Distance(11, 6.25); // dynamic object
	dist2->printDistance();

	// create object dist3 & dist4 for default constructor
	Distance dist3;
	Distance dist4;

	// create object dist5 for overloaded constructor
	Distance dist5(11, 6.25);

	dist3.inputDistance();
	dist4.addDistance(dist3, dist5);

	dist3.printDistance();
	dist5.printDistance();
	dist4.printDistance();
}