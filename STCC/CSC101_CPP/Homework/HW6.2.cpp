/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 2
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int total = 0;
    string user;

    cout << "Enter a string: ";
    getline(cin, user);

    for (int i = 0; i < user.length(); i++) {
        total += user[i];
    }

    cout << total << endl;
}