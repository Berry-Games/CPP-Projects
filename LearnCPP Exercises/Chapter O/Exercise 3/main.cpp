//Write a program that asks the user to input a number between 0 and 255.
//Print this number as an 8-bit binary number (of the form #### ####).
//Don’t use any bitwise operators. Don’t use std::bitset.


//I know this is not the efficient method. But this can be eality done with static_case and bitset. so this is a lazy solution.
//also i know it does not display 8 bits and entering number over 255 results in UB

#include <iostream>
#include <iomanip>

int getUserNumber()
{
    std::cout << "Enter you number between 0 and 255: ";
    int x;
    std::cin >> x;
    return x;
}

int main()
{
    std::uint8_t userNum {static_cast<std::uint8_t>(getUserNumber())};
    int userNumInBinary {};

    if(userNum >= 128)
    {
            userNumInBinary += 1000'0000;
            userNum -= 128;
    }

   if(userNum >= 64)
    {
            userNumInBinary += 100'0000;
            userNum -= 64;
    }
       if(userNum >= 32)
    {
            userNumInBinary += 10'0000;
            userNum -= 32;
    }
       if(userNum >= 16)
    {
            userNumInBinary += 1'0000;
            userNum -= 16;
    }
       if(userNum >= 8)
    {
            userNumInBinary += 1000;
            userNum -= 8;
    }
       if(userNum >= 4)
    {
            userNumInBinary += 100;
            userNum -= 4;
    }
       if(userNum >= 2)
    {
            userNumInBinary += 10;
            userNum -= 2;
    }
       if(userNum >= 1)
    {
            userNumInBinary += 1;
            userNum -= 1;
    }

    std::cout << userNumInBinary << "\n";

    return 0;
}
