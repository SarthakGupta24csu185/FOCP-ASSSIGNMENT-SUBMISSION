/*.Develop a program to simulate a number-guessing game where the user has limited attempts
to guess a randomly generated number. Provide feedback for each guess (too high, too low)
and terminate the game when the number is guessed or attempts are exhausted.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for random number generation
    int target = rand() % 100 + 1;  // Random number between 1 and 100
    int guess, attempts = 5;

    cout << "Guess the number (1-100)! You have " << attempts << " attempts.\n";

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == target) {
            cout << "Congratulations! You guessed the correct number.\n";
            return 0; // Exit game on correct guess
        } 
        else if (guess < target)
            cout << "Too low! Try again.\n";
        else
            cout << "Too high! Try again.\n";

        attempts--;
        cout << "Attempts left: " << attempts << endl;
    }

    cout << "Game over! The correct number was " << target << ".\n";
    return 0;
}
