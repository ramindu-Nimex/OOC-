#include <iostream>
using namespace std;

float area(int length, int width);

// create the structure
struct Rectangle {

	int length;
	int width;
};

int main() {
	
	// declare the structure variable
	struct Rectangle yard;
	struct Rectangle house;
	
	// input the data
	cout << "Enter the length of the yard : ";
	cin >> yard.length;
	cout << "Enter the Width of the yard : ";
	cin >> yard.width;

	cout << "Enter the length of the House : ";
	cin >> house.length;
	cout << "Enter the Width of the House : ";
	cin >> house.width;
	
	// call the function
	float areaHouse = area(house.length, house.width);
	float areaYard = area(yard.length, yard.width);
	
	// calculation
	float lawnArea = areaYard - areaHouse;

	cout << "Lawn Area : " << lawnArea << endl;

	return 0;
}

// implementation function
float area(int length, int width) {

	return length * width;
}
