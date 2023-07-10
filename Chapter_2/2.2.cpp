/* A program that reads in the radius and length 
of a cylinder and computes the area and volume */
#include <iostream>

int main(){
	const double PI = 3.14;
	double length;
	double radius;

	std::cout << "Enter the radius and length of a cylinder: ";
	std::cin >> radius >> length;

	double area = radius * radius * PI;
	double volume = area * length;

	std::cout << "Area: " << area << std::endl;
	std::cout << "Volume: " << volume << std::endl;
	return 0;
}