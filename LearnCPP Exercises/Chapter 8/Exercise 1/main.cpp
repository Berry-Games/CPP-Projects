//Write a program that prints out the letters a through z along with their ASCII codes. Use a loop variable of type char.

#include <iostream>

void printCharWithAscii (char start, char finish)
{
    int count {};

    while(start <= finish)
    {
        std::cout << start << "-" << static_cast<int>(start) << "\t";
        ++start;

        //iteration counter to print next line for every 10 iteration fpr readability
        ++count;
        if (count%10 == 0) std::cout << "\n";

    }
}

int main()
{
    printCharWithAscii('a','z');

    std::cout << "\n";
    return 0;
}
