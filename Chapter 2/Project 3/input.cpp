#include <iostream>

//Asks user to input a number and returns the same
int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}
