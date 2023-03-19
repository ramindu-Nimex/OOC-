#include <iostream>
using namespace std;

int area(int length, int width);

struct Rectangle {

	int length;
	int width;
}yard, house;

int main() {

	cout << "Enter the length of the yard : ";
	cin >> yard.length;
	cout << "Enter the Width of the yard : ";
	cin >> yard.width;

	cout << "Enter the length of the House : ";
	cin >> house.length;
	cout << "Enter the Width of the House : ";
	cin >> house.width;

	int areaHouse = area(house.length, house.width);
	int areaYard = area(yard.length, yard.width);

	int lawnArea = areaYard - areaHouse;

	cout << "Lawn Area : " << lawnArea << endl;

	return 0;
}

int area(int length, int width) {

	return length * width;
}
