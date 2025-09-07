//Modify the program you wrote in Project5 so that it uses a header file (named io.h) to access the functions
//instead of using forward declarations directly in your code (.cpp) files.
//Make sure your header file uses header guards.

#include "io.h"

int main() {
    int userInput1 {readNumber()};
    int userInput2 {readNumber()};
    writeAnswer(userInput1+userInput2);
    return 0;
}