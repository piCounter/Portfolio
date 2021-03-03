/**
 * Michael Buckley
 * Feb 8, 2021
 * A simple program that incredments to zero using switch case loops
 * 
 * Switch evaluates the given expression.
 *  then looks for a case whos value matches the given expression
 *      then executes the statement that is inside the case
 *  default can be used at the end of all the cases as an else statement would.
 * 
 *  **** the break statement is required after each case; else every other case below will run also.
*/

#include <iostream>
using namespace std;

int main() {

    // switch (expression) {
    //     case value1:
    //         statement(s);
    //         break;
    //     case value2:
    //         statement(s);
    //         break;
    //     ...
    //     case valueN:
    //         statement(s);
    //         break;
    //     ...
    //     default:
    //         statement(s);
    //         break;
    // }

        int age = 42;
    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
        
        char apple = 'a';
}