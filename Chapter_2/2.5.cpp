/* A program that reads the subtotal and 
the gratuity rate, then computes the gratuity and total. */
#include <iostream>

int main(){
	double subtotal;
	double gratuity_rate;
	std::cout << "Enter the subtotal and the gratuity rate: ";
	std::cin >> subtotal >> gratuity_rate;

	// Calculate gratuity and total;
	double gratuity = subtotal * (gratuity_rate / 100);
	std::cout << "The gratuity is $" << gratuity <<
	" and the total is $" << gratuity + subtotal <<
	std::endl;
	return 0;
}