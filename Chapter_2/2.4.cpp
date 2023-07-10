/* A program that converts pounds into kilograms.
The program prompts the user to enter a number in pounds, 
converts it to kilograms, and displays the result. */
#include <iostream>

int main(){
	// Prompt user to enter weight in LBS
	double pounds;
	std::cout << "Enter weight in pounds: ";
	std::cin >> pounds;

	std::cout << pounds << " pounds is " << 0.454 * pounds << " kilograms." << std::endl; 
}