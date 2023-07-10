/* A program that reads an integer between 0 and 
1000 and adds all the digits in the integer */
#include <iostream>

int main(){
	int num = 0;
	double sum = 0;
	std::cout << "Enter a number between 0 and 999: ";
	std::cin >> num;

	if ((num >= 0) && (num <= 1000)) {
		sum = ((num % 10) + ((num / 10) % 10));
		sum = sum + ((num / 10) / 10);
		std::cout << "The sum of the digits is " << sum << std::endl;
	} else {
		std::cout << "Invalid." << std::endl;
	}
	return 0;
}