//Write a short program to simulate a ball being dropped off of a tower.
//To start, the user should be asked for the height of the tower in meters.
//Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
//Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
//The ball should not go underneath the ground (height 0).

//Use a function to calculate the height of the ball after x seconds.
//The function can calculate how far the ball has fallen after x seconds using
//the following formula: distance fallen = gravity_constant * x_seconds2 / 2

#include <iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double x {};
    std::cin >> x;
    return x;
}

void ballHeight (double height, int second)
{
    //I actually did not create gravity and used 9.8 directly in formula which is a magic number. I changed it after seeing answer
    double gravity {9.8};
    double distanceRemaining {height - (gravity * second * second / 2)}; //calculates the ball's height from the ground

    //Calculating ball height and printing the result is done in separate functions. But i put both of them in same function
    //This is not ideal since a function should perform only one task. This is my 2nd mistake.

    if (distanceRemaining > 0)
    {
        std::cout << "At " << second << " seconds, the ball is at height: " << distanceRemaining << ".\n";
    }

    else
    {
        std::cout << "At " << second << " seconds, the ball is is on the ground.\n";
    }
}

int main()
{
    double height{getHeight()};
    ballHeight(height, 0);
    ballHeight(height, 1);
    ballHeight(height, 2);
    ballHeight(height, 3);
    ballHeight(height, 4);
    ballHeight(height, 5);
    return 0;
}
