//Chapter 2 - Parameters and arguments
//Write a function called doubelNumber() that takes one integer parameter.
//The function should return double value of tha parameter


#include <iostream>

//Returns the double value of input value.
int doubleNumber(int input) {
   return input*2;
}

int main() {
    std::cout << "Give me a number to double: ";
    int userNum;
    std::cin >>userNum;
    std::cout << "The double of given number is: " << doubleNumber(userNum) << ".\n";
    return 0;
}