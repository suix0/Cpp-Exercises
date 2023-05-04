/* 1.2 (Display five messages) Write a program that displays Welcome to C++ five 
times. */

#include <iostream>

int main(){
    // Define string variable to hold the message
    std::string message = "Welcome to C++";

    // Use a while loop to easily print message xd
    int n = 0;
    while(n < 5){
        std::cout << message << std::endl;
        n++;
    }
    return 0;
}