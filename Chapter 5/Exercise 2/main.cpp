//Exercise 2
//Write a program that asks for the name and age of two people, then prints which person is older.

#include <iostream>
#include <string>
#include <string_view>

std::string askName(std::string_view order)
{
    std::cout << "What is the name of the " << order << " person: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int askAge()
{
    std::cout << "Enter the age of the person: ";
    int x {};
    std::cin >>x;
    return x;
}

//Initially i did have separate function to get the older age.
//But the answer showed me that i an just have that as condition in iif statement

//int findOlder (int a1, int a2)
//{
//    if (a1 > a2) return a1;
//    else if (a2>a1)return a2;
//    else return 1;
//}

void printOlder(std::string_view p1, int a1, std::string_view p2, int a2)
{
    if (a1 > a2)
        std::cout << p1 << " (age: " << a1 << ") is older than " << p2 << " (age: " << a2 << ").\n";

    else if (a2 > a1)
        std::cout << p2 << " (age: " << a2 << ") is older than " << p1 << " (age: " << a1 << ").\n";

    else if (a1 == a2)
        std::cout << p1 << " (age: " << a1 << ") has the same age as " << p2 << " (age: " << a2 << ").\n";

    //apparantly chatgpt is is sayint this cant run because i coverd all possible outcomes.
    //But i am gonna keep it anyway until i can figure out how to check valid imputs of text and numbers.
    else
        std::cout << "Error: Could not perform the action";
}

int main()
{
    const std::string person1 {askName("first")};
    const int age1 {askAge()};
    std::cout << std::endl;
    const std::string person2 {askName("second")};
    const int age2 {askAge()};
    std::cout << std::endl;
    printOlder(person1, age1, person2, age2);
    return 0;
}
