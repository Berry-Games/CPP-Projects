//In lesson 4.x -- Chapter 4 summary and quiz, we wrote a program to simulate a ball falling off of a tower.
//Because we didn’t have loops yet, the ball could only fall for 5 seconds.
//
//Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground.
//Update the program to use all covered best practices (namespaces, constexpr, etc…).

#include <iostream>

inline double calculateBallHeight(double towerHeight, int seconds)
{
	constexpr double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance { gravity * (seconds * seconds) / 2.0 };
	const double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

void calculateDurationForBallToHitGround(int height)
{
    int seconds {};

    while (true)
    {
        double ballHeight {calculateBallHeight(height, seconds)};

        if (ballHeight > 0)
            std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
        else
        {
            std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
            break;
        }
        ++seconds;
    }
}

inline int getTowerHeight()
{
    std::cout << "Enter the height of the tower: ";
    int i {};
    std::cin >> i;
    return i;
}

int main()
{
    const int towerHeight {getTowerHeight()};
    calculateDurationForBallToHitGround(towerHeight);

    return 0;
}


//they want to have the constant in namespace.
//I did not do that. Maybe i need to read at what situation i need to create my own namespace
