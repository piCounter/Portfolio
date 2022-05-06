/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 2
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // define variables
    int total = 0;
    string user;

    // get user input
    cout << "Enter a string: ";
    getline(cin, user);

    // add each chars ASCII value from string
    for (int i = 0; i < user.length(); i++) {
        total += user[i];
        cout << (int)(user[i]) << " ";
        if (i == user.length()-1)
            cout << " = ";
        else 
            cout << " + ";
    }

    cout << total << endl;
}