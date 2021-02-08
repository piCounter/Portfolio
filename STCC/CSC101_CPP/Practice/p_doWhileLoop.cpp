/**
 * Michael Buckley
 * Feb 8, 2021
 * A simple program that incredments to zero using do... while loops
*/

#include <iostream>
using namespace std;

int main() {

    // do {
    //     statement(s);
    // } while (condition);

    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;
    int divide = 10000;
    int increment = userNum/divide;

    if (userNum > 0){
        do {
            if (userNum % divide == 0)
                cout << --increment << endl;
            userNum--;
        }
        while (userNum > 0);
        
    }
    else{
        do {
            if (userNum % divide == 0)
                cout << --increment << endl;
            userNum++;
        } while (userNum > 0);
    }
}