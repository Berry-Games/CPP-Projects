//Write a program that asks the user to enter two integers, one named smaller, the other named larger.
//If the user enters a smaller value for the second integer, use a block and a temporary variable to
//swap the smaller and larger values. Then print the values of the smaller and larger variables.
//Add comments to your code indicating where each variable dies.
//Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

#include <iostream>

int getUserNumber (std::string_view order)
{
    std::cout << "Enter your " << order << " number: ";
    int x {};
    std::cin >> x;
    return x;
}//x dies here

int main()
{
    int smaller {getUserNumber("first (smaller)")};
    int larger {getUserNumber("second (larger)")};

    if (smaller > larger)
    {
        int temp {};        //i could've initialised smaller directly here. my bad.
        temp = smaller;
        smaller = larger;
        larger = temp;

        std::cout << "Swapping the values... \n";
    }//temp value dies here

    std::cout << "The smaller value is: " << smaller << "\n";
    std::cout << "The larger value is: " << larger << "\n";

    return 0;
}// smaller and larger values die here
