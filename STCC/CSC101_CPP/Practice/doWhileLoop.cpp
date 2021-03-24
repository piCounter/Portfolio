/**
 * Michael Buckley
 * March 23, 2021
 * 
 * Do While Loop
 *  checks for while condition AFTER performing the action once
*/

#include <iostream>


using namespace std;

int main() {
    
    // variable decliaration
    int i=0;

    // print 0 first then check condition
    do {
        cout << i << "  ";
        i += 5;
    } while (i <= 20);
    
    return 0;
}