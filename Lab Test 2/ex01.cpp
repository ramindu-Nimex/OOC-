#include <iostream>
#include <iomanip>
using namespace std;

// create structure for circle
struct circle {
	float radius;
};

// create structure for square
struct square {
	float length;
};

// create structure for rectangle
struct rectangle {
	float length;
	float width;
};

// function declare
float circleArea(circle r);
float squareArea(square s);
float rectangleArea(rectangle r);

int main() {
	// declare the struct variable
	struct circle c1;
	struct square s1;
	struct rectangle r1; // r1 for small rectangle
	struct rectangle r2; // r2 for yard

	cout << "Enter Circle Radius value : ";
	cin >> c1.radius;

	cout << "Enter square length : ";
	cin >> s1.length;

	cout << "Enter Rectangle length : ";
	cin >> r1.length;

	cout << "Enter Rectangle width : ";
	cin >> r1.width;

	cout << "Enter Rectangle length for yard : ";
	cin >> r2.length;

	cout << "Enter Rectangle width for yard : ";
	cin >> r2.width;

	// calling function
	float areaCircle = circleArea(c1);
	float areaYard = rectangleArea(r2);
	float areaRectangle = rectangleArea(r1);
	float areaSquare = squareArea(s1);

	float greenArea = areaYard - (areaCircle + areaRectangle + areaSquare);
	cout << "green color area is : " << greenArea << endl;

	return 0;
}

//Area of the circle function
float circleArea(circle r) {

	return (22.0 / 7.0) * r.radius * r.radius;

}

//Area of the square function
float squareArea(square s) {

	return s.length * s.length;
}

//Area of the rectangle function
float rectangleArea(rectangle r) {

	return r.length * r.width;

}
