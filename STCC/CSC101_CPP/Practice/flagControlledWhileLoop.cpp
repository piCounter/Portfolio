/**
 * Michael Buckley
 * March 23, 2021
 * 
 * Flag-Controlled while loop
 *  number guessing game
 *  numbers between 0 and 99
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNum, guess, count=0, min=0, max=100;
    bool isGuessed = false;

    // random number
    srand(time(0));
    randomNum = rand() % max;

    // game environment
    while (!(isGuessed)) {
        count++;
        cout << "Enter a number between " << min << " and " << max << ": ";
        cin >> guess;
        cout << endl;

        if (randomNum == guess) {
            cout << "You guessed the correct number in only " << count << " tries.\n";
            isGuessed = true;
        }
        else if (guess < randomNum) {
            cout << "Guess Higher\n";
        }
        else {
            cout << "Guess Lower\n";
        }

    }

    return 0;
}