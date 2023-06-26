/* (Area and perimeter of a square) 
Write a program that displays the area and perimeter of a square that has a side of 5.2 */
#include <iostream>
#include <cmath>

int main(){
	// Declare the variable for side
	double side = 5.2;

	// Calculate the area and perimeter
	double area = pow(side, 2);
	double perimeter = 4 * side;

	// Display area and perimeter
	std::cout << "Area: " << area << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl; 
}