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

//declare the perimeter function
float findPerimeter(rectangle r, float& perimeter);
//declare the costForFence function
float costForFence(float unitCost, float& perimeter);

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
	cout << "green color area is : " << setiosflags(ios::fixed)<<setprecision(3)<< greenArea << endl;

	float perimeter;
	float perimeterOfYard = findPerimeter(r2, perimeter);
	cout << "perimeter of the yard : " << perimeterOfYard << endl;

	float costU;
	cout << "enter cost per unit :";
	cin >> costU;

	float cost = costForFence(costU, perimeter);
	cout << "cost of building a fence" << setiosflags(ios::fixed) << setprecision(2)<< cost << endl;

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

// implement perimetr function
float findPerimeter(rectangle r, float& perimeter) {
	// claculate perimeter
	perimeter = (r.length + r.width) * 2;

	return perimeter;
}

// calculate the cost for building free
float costForFence(float unitCost, float& perimeter) {
	float cost = unitCost* perimeter;
	return cost;
}
