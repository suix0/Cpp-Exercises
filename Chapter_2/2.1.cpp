/*A  program that reads a Celsius degree in a 
double value from the console, then converts it to Fahrenheit and displays the 
result */
#include <iostream>

int main(){
	double temp_celcius = 0.0;
	std::cout << "Enter a degree in Celcius: ";
	std::cin >> temp_celcius;

	double temp_farenheit = (9.0 / 5) * temp_celcius + 32;
	std::cout << "Degree in Farenheit is " << temp_farenheit << std::endl;
}