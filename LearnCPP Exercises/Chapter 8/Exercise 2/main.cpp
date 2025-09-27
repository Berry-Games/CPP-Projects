//Invert the nested loops example so it prints the following:
//
//5 4 3 2 1
//4 3 2 1
//3 2 1
//2 1
//1

#include <iostream>

//I have no idea how to name the function or the variables. I did my best.

void printNumberUpsideDownTriangle (int initialValue)
{
    while (initialValue > 0)
    {
        int reducedInitialValue {initialValue};

        while (reducedInitialValue > 0)
        {
            std::cout << reducedInitialValue << " ";
            --reducedInitialValue;
        }

        std::cout << "\n";
        --initialValue;
    }
}

int main()
{
    printNumberUpsideDownTriangle(5);

    return 0;
}
