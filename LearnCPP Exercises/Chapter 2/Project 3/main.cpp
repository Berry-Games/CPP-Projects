//Chapter 2 - Program with multiple source files
//Split the given program into main and input

#include <iostream>

int getInteger();

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}