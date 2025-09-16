//Exercise 1 - Ask user for theri height and output if they are allowed in the ride.

//The exercise is to simplyfy the given code. But i change the function and changed some code
//The answer just changed one of the if else condition.

#include <iostream>

double askUserHeight()
{
    std::cout << "What is yout height? (in cm): ";
    double height {};
    std::cin >> height;
    return height;
}

int main()
{
  if (askUserHeight() >= 140)
    std::cout << "Have fun!\n";
  else
    std::cout << "Sorry, you're too short.\n";

  return 0;
}
