#include "Lab.h"
#include <iostream>
using namespace std;

void Lab::setLabDetails(int lid, int cap) {
	labID = lid;
	capacity = cap;
}

int Lab::getCapacity() {
	return capacity;
}