/* (Summation of odd numbers) Write a program that displays the sum of the first ten 
odd numbers */
#include <iostream>

int main(){
    // Initialize variabe sum
    int sum = 0;
    // Initialize counter variable to track the number of odd numbers being added to sumn
    int counter = 0;
    for (int i = 0; i >= 0; i++){
        // If i is not even, then add i to sum and increment counter
        if (i % 2 != 0){
            sum += i;
            counter++;
        }
        if (counter == 10){
            break;
        }
    }
    std::cout << "The sum of the first ten odd numbers is " << sum << std::endl;
}