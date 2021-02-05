/**
 * Michael Buckley
 * Feb 5, 2021
 * A simple program that prints the binary version of a number using loops
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int userNum;
    int divide = 10000;
    int increment = 0;
    cout << "Enter a number: ";
    cin >> userNum;

    if (userNum > 0)
    {
        while (userNum > 0)
        {
            // if (userNum % divide == 0)
                // cout << ++increment << endl;
            userNum--;
        }
    }
    else
    {
        while (userNum < 0)
        {
            // if (userNum % divide == 0)
                // cout << ++increment << endl;
            userNum++;
        }
    }
}