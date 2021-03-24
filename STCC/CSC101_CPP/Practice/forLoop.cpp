/**
 * Michael Buckley
 * March 23, 2021
 * 
 * For loop
 *  user enters positive integer
 *  the program will find the sum of the first n positive integers
*/

#include <iostream>

using namespace std;

int main() {

    // variable decliation
    int n, sum=0;

    // user input
    cout << "Enter number that you want to find the sum of: ";
    cin >> n;

    // addition
    for (int i=1; i<=n; ++i)
        sum += i;

    // output
    cout << "Total = " << sum << endl;


    return 0;
}