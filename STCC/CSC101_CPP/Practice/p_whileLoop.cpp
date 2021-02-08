/**
 * Michael Buckley
 * Feb 5, 2021
 * A simple program that incredments to zero using while loops
*/

#include <iostream>
#include <string>
using namespace std;
int main(){

//     while (condition) 
// {
//    statement(s);
// }

    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;
    int divide = 10000;
    int increment = userNum/divide;

    if (userNum > 0){
        while (userNum > 0){
            // if (userNum % divide == 0)
                // cout << ++increment << endl;
            userNum--;
        }
    }
    else{
        while (userNum < 0){
            // if (userNum % divide == 0)
                // cout << ++increment << endl;
            userNum++;
        }
    }
}