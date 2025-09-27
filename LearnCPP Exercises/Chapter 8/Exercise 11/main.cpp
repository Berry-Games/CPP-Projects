//Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100.
//The user is given 7 tries to guess the number.
//
//If the user does not guess the correct number, the program should tell them whether they guessed too high or too low.
//If the user guesses the right number, the program should tell them they won.
//If they run out of guesses, the program should tell them they lost, and what the correct number is.
//At the end of the game, the user should be asked if they want to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.



#include <iostream>
#include "Random.h"

int getUserNumber();
void guessRandomNumber();
char tryAgain();

int getUserNumber(std::string_view text)
{
    std::cout << text;
    int x;
    std::cin >> x;
    return x;
}

void guessRandomNumber(int minimumRange, int maximumRange, int guessNumber)
{
    int randomNum {Random::get(minimumRange, maximumRange)};

    std::cout << "Guess the number between " << minimumRange << " and " << maximumRange << " in " << guessNumber << " tries\n\n";

    for (int triesCount {1}; triesCount <=guessNumber; ++triesCount)
    {
        std::cout << "Guess #" << triesCount << ": ";
        int userNum {};
        std::cin >> userNum;

        if  ((triesCount != guessNumber) && (userNum > randomNum))
            {
                std::cout << "You are too high. Try again\n";
            }
        else if ((triesCount != guessNumber) && (userNum < randomNum))
        {
            std::cout << "You are too low. Try Again\n";
        }
        else if (userNum == randomNum)
        {
            std::cout << "You have guessed the number! You Won!!!\n\n";
            break;
        }

        else if ((triesCount == guessNumber) && (userNum != randomNum))
        {
            std::cout << "Sorry wrong guess and you are out of tries. The correct number is " << randomNum << "\n\n";
            break;
        }
    }
}

char tryAgain()
{
    while (true)
    {
        std::cout << "Do you want to play the game again? (y/n): ";
        char c {};
        std::cin >> c;

        if (c == 'y')
            return 'y';
        else if (c == 'n')
            return 'n';
        else
            std::cout << "Wrong input.  ";
    }

}

int main()
{
  std::cout << "Let's play guessing number game! \n\nLets set the range first \n";

  while (true)
  {
        int minimumRange {getUserNumber("Enter the minimum number: ")};
        int maximumRange {getUserNumber("Enter the maximum number: ")};
        int guessNumber {getUserNumber("How many guess do you want: ")};
        printf("\033c");

        guessRandomNumber (minimumRange, maximumRange, guessNumber);

        char c {tryAgain()};
        if (c == 'y')
        {
            printf("\033c"); //clears console for linux only
            std::cout << "Let's go again! \n\n";
            continue;
        }
        if (c == 'n')
            break;


  }
  std::cout << "Thank you for playing our game.\n";

  return 0;
}
