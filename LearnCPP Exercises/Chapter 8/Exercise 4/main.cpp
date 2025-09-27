//Write a for-loop that prints every even number from 0 to 20.

#include <iostream>

int main()
{
    for (int i {0}; i <= 20; ++i)
    {
        if (i%2 == 0)
            std::cout << i << "\n";
    }

    return 0;
}
