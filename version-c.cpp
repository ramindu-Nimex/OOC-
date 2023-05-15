#include <iostream>
#include "Lab.h"
using namespace std;

int main() {
	Lab L1, L2, L3;

	L1.setLabDetails(401, 60);
	L2.setLabDetails(402, 40);
	L3.setLabDetails(403, 30);

	int capac;

	cout << "Enter capacity : ";
	cin >> capac;

	if (capac <= L1.getCapacity()) {
		cout << "Lab 401 " << endl;
	}
	else if (capac <= L2.getCapacity()) {
		cout << "Lab 402 " << endl;
	}
	else if (capac <= L3.getCapacity()) {
		cout << "Lab 403 " << endl;
	}
	else {
		cout << "Invalid";
	}
}