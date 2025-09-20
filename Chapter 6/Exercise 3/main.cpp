//Complete the following program:
//
//getQuantityPhrase() should take a single int parameter representing the quantity of something and return the following descriptor:
//
//    < 0 = “negative”
//    0 = “no”
//    1 = “a single”
//    2 = “a couple of”
//    3 = “a few”
//    > 3 = “many”
//
//getApplesPluralized() should take a single int parameter parameter representing the quantity of apples and return the following:
//
//    1 = “apple”
//    otherwise = “apples”
//
//This function should use the conditional operator.


#include <iostream>

//did not know that i can use string_view on a function and return c-style string and.still be printed on console.

constexpr std::string_view getQuantityPhrase(int x)
{
    if (x < 0)          return "negative";
    else if (x == 0)    return "no";
    else if (x == 1)    return "a single";
    else if (x == 2)    return "a couple of";
    else if (x == 3)    return "a few";
    else                return "many";
}

constexpr std::string_view getApplesPluralized(int x)
{
    return ((x == 1) ? "apple" : "apples");
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
