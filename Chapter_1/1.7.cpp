/* A program that will calculate the approximate value of PI or smth*/
#include <iostream>
#include <cmath>

int main(){
    double formula1 = sqrt(6 * (1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25)));
    double formula2 = sqrt(6 * (1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25) + (1.0 / 36)));
    std::cout << "formula1 = " << formula1 << std::endl;
    std::cout << "formula2 = " << formula2 << std::endl;
}
