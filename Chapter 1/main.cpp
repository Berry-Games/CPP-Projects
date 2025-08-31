//This project contains all the answer for exercises in Chapter 1 on LearnCPP.com

#include <iostream>

int main() {

    //Classic simple program
    std::cout << "Hello, World!\n";

    //Chapter 1.5
    //Exercise 1 - Ask user for a number and display it
    int x{};
    std::cout << "Enter a number : ";
    std::cin >> x;
    std::cout << "The number you entered is " << x << ".\n";

    //Exercise 2 - Ask user 3 numbers and print them sequentially
    int num1 {};
    int num2 {};
    int num3 {};

    std::cout << "Please enter three numbers with spaces in the middle : ";
    std::cin >> num1 >>num2 >> num3;
    std::cout << "Your numbers are " << num1 << ", " << num2 << " and " << num3 << ".\n";

    //chapter 1.11
    //Exercise 1 - Multiply user input number by 2
    int h{};
    std::cout << "Enter an integer: ";
    std::cin >> h;
    std::cout << "Double that number : " << h*2 << ".\n";

    //Exercise 2
    //Exercise 2 - Multiply user number by 2 and 3
    int k {};
    std::cout << "Enter an integer: ";
    std::cin >> k;
    std::cout << "Double that number : " << k*2 << ".\n";
    std::cout << "Triple that number : " << k*3 << ".\n";
    std::cout << "Quadruple that number : " << k*4 << ".\n";

    //Final Exercise - Add and substract two user input numbers
    int num4 {};
    int num5 {};
    std::cout << "Enter the first number: ";
    std::cin >> num4;
    std::cout << "Enter the second number: ";
    std::cin >> num5;
    std::cout << num4 << " + " << num5 << " = " << num4+num5 << ".\n";
    std::cout << num4 << " - " << num5 << " = " << num4-num5 << ".\n";
}
