//Question #1
//
//Write a program that asks the user to enter their full name and their age.
//As output, tell the user the sum of their age and the number of characters in their name
//(use the std::string::length() member function to get the length of the string).
//For simplicity, count any spaces in the name as a character.

#include <iostream>
#include <string>
#include <string_view>

std::string getUserName()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getUserAge()
{
    std::cout << "Enter your age: ";
    int x {};
    std::cin >> x;
    return x;
}

int sumOfAgeAndNameLength(int age, std::string_view name)
{
    return age + static_cast<int>(std::ssize(name));
}

int main()
{
    const std::string name {getUserName()};
    const int age {getUserAge()};
    std::cout << "Your age + length of name is: " << sumOfAgeAndNameLength(age, name) << ".\n";

    return 0;
}
