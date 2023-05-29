/* *1.3 (Display a pattern) Write a program that displays the following pattern:
    *    ********* 
   ***    ******* 
  *****    ***** 
 *******    *** 
*********    *    */

// Should I make this complicated and use a for loop?
// LMAO nvm I'll make dis as simple as possible

#include <iostream>

int main(){
    std::cout << "    *    " << "*********" << std::endl;
    std::cout << "   ***   " << " ******* " << std::endl;
    std::cout << "  *****  " << "  *****  " << std::endl;
    std::cout << " ******* " << "   ***   " << std::endl;
    std::cout << "*********" << "    *    " << std::endl;
    return 0;
}