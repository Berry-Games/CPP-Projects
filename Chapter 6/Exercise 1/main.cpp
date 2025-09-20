//Write a program that asks the user to input an integer, and tells the user whether the number is even or odd.
//Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise.
//Use the remainder operator to test whether the integer parameter is even.
//Make sure isEven() works with both positive and negative numbers.

#include <iostream>

int getUserNumber()
{
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

//I did not use parantesis correctly
//Also i dont need to explicitly return true or false as the expression evaluated to ture or false

constexpr bool isEven(int x)
{
    if (x%2 == 0) return true;
    else return false;
}

int main()
{
    const int x {getUserNumber()};

    if (isEven(x))
        std::cout << x << " is even.\n";
    else
        std::cout << x << " is odd.\n";

    return 0;
}

//I need to pay attention more to make the code simple
