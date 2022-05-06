/* 
    Michael Buckley
    Feb 2, 2021
    practice file for review 1
*/

#include <iostream>
#include <string>  // required for strings. Make sure its lowercase
using namespace std;

int main()
{
    int apples = 10;
    cout << "apples = " << apples << endl;

    double oranges = 20.5;
    cout << "oranges = "<< oranges << endl;

    cout << "apples / oranges = " << apples / oranges << endl;
    cout << "apples * oranges = " << apples * oranges << endl;

    string firstName = "";
    cout << "What is your name? ";
    cin >> firstName;
    cout << "Hello " << firstName << endl;

    // Prints Hello World to the console
    cout << "Hello World\n";

    cout << endl;
    return 0;
}