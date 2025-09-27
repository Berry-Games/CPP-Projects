//Now make the numbers print like this:
//
//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1

#include <iostream>

inline void printSpace (int numberOfSpace)
{
    int i {1};
    while (i <= numberOfSpace)
    {
        std::cout << "  ";
        ++i;
    }
}

void printNumberTriangle (int triangleHeight)
{
    int rowCount {1};

    while (rowCount <= triangleHeight)     //This while loop is to move to the next row of the triangle at every iteratoin
    {
        int numberCount {0};    //number count starts at 0 because the differnce between numcount and rowcount atleast need to be 1

        printSpace(triangleHeight - rowCount);

        while (numberCount < rowCount)         //this while loop is to print numbers of the triangle at every iteration
        {
            std::cout << (rowCount - numberCount) << " ";
            ++numberCount;
        }
        ++rowCount;
        std::cout << '\n';
    }
}

int main()
{
    printNumberTriangle(5);

    return 0;
}

//I am really proud of this because i this one has better variable and i simplifies it lot from initial draft.
