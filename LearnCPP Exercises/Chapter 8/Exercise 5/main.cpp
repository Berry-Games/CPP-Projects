//Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.
//For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

#include <iostream>

int sumTo(int value)
{
    int numberSum {};

    for (int i {1}; i <= value; ++i)
    {
        numberSum += i;
    }

    return numberSum;
}

int main()
{
    std::cout << sumTo(5) << std::endl;

    return 0;
}
