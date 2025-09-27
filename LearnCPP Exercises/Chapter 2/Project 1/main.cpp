//Chapter 2 - Functions
//Exercise 1 - Sample program containing multiple function call

#include <iostream>

//Asks user to input a number and return the same
int askUser() {
    std::cout << "Please enter your number: ";
    int input {};
    std::cin >> input ;
    return input;
}


int add(int x, int y) {
    return x+y;
}


int mult (int x, int y) {
    return x*y;
}

int main() {
    int userNum1 {askUser()};
    int userNum2 {askUser()};
    std::cout << "The sum of the two number is " << add(userNum1,userNum2) <<".\n";
    std::cout << "The product of the two number is " << mult(userNum1,userNum2) <<".\n";
    return 0;
}