//Modify the program you wrote for exercise #3 to use implicit type conversion instead of static_cast

#include <iostream>

int main ()
{
    std::cout << "Enter a single character: ";
    char c {};
    std::cin >> c;
    int i {c};
    std::cout << "You entered " << c << " , which has the ASCII code " << i << ".\n";
    return 0;
}
