
//Modify the program you wrote in Project4 so that readNumber() and writeAnswer() live in a separate
//file called “io.cpp”. Use a forward declaration to access them from main().

//If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.

//Forward declaration for the functions used
int readNumber() ;
void writeAnswer(int x);

int main() {
    int userInput1 {readNumber()};
    int userInput2 {readNumber()};
    writeAnswer(userInput1+userInput2);
    return 0;
}