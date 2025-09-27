#include <iostream>

//Asks user to input a number and returns the same
int readNumber() {
    std::cout << "Please enter a number: ";
    int input {};
    std::cin >>input;
    return input;
}

//Outputs the result value to the console
void writeAnswer(int x) {
    std::cout << "The sum of the two numbers is " << x << ".\n";
}
