//Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
//The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
//The program computes the answer on the two numbers the user entered and prints the results.
//If the user enters an invalid symbol, the program should print nothing.

#include <iostream>
#include <string>

double askUserNumber(std::string order)
{
    std::cout << "Enter your " << order << " double value: " ;
    double d ;
    std::cin >> d ;
    return d;
}

char arithmeticOperation ()
{
    std::cout << "Enter +, -, *, or /: ";
    char c {};
    std::cin >> c;
    return c;
}

double result (double num1, double num2, char c)
{
    if (c == '+')
    {
        return num1 + num2;
    }

    else if (c == '-')
    {
        return num1 - num2;
    }

    else if (c == '*')
    {
        return num1 * num2;
    }

    //I did not consider that user giving bad input also executes this staement
    //This needs to be speccific to division.
    else
    {
        return num1 / num2;
    }
}

int main ()
{
    double num1 {askUserNumber("first")};
    double num2 {askUserNumber("second")};
    char operation {arithmeticOperation()};
    std::cout << num1 << " " << operation << " " << num2 << " is " << result(num1, num2, operation);
    return 0;
}
