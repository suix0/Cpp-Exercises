/* A program that reads a number in feet, converts it to 
meters, and displays the result.*/
#include <iostream>

int main(){
	double feet;
	const double METER_VALUE = 0.305;
	std::cout << "Enter a value for feet: ";
	std::cin >> feet;

	std::cout << feet << " feet " << "is " << METER_VALUE * feet << " meters" << std::endl;
	return 0; 
}