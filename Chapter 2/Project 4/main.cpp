//Chapter 2 - Exercise 4
//Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together,
//and then outputs the answer. The program should use three functions:

// A function named “readNumber” should be used to get (and return) a single integer from the user.
// A function named “writeAnswer” should be used to output the answer.
// This function should take a single parameter and have no return value.
// A main() function should be used to glue the above functions together.

#include <iostream>

//Asks user to input a number and returns the same
int readNumber() {
    std::cout << "Please enter a number: ";
    int input {};
    std::cin >>input;
    return input;
}

//Informs user of the sum of the numbers
void writeAnswer(int x) {
    std::cout << "The sum of the two numbers is " << x << ".\n" ;
}

int main() {
    int userInput1 {readNumber()};
    int userInput2 {readNumber()};
    writeAnswer(userInput1+userInput2);
    return 0;
}