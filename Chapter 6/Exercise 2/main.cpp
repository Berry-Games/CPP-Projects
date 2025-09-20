//Rewrite previous exercise function using operator! instead of operator==

#include <iostream>

int getUserNumber()
{
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

//apparantly i can write ir as return !(x%2) and it will be bool
//yup i really did this one wrong.

constexpr bool isEven(int x)
{
    return ((x%2) != 0);
}

int main()
{
    const int x {getUserNumber()};

    if (isEven(x))
        std::cout << x << " is odd.\n";
    else
        std::cout << x << " is even.\n";

    return 0;
}

//I need to pay attention more to make the code simple
