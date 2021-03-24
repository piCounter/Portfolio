/**
 * Michael Buckley
 * Mar 23, 2021
 * Homework 4 part 4
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    // variable declaration
    int count = 0;
    char run;
    string input;

    while (true) {

        // accept text from user
        cout << "Enter the text to convert to a phone number: ";
        getline(cin, input);

        // output phone number
        cout << "Phone # ";
        for (int index = 0; index <= input.length(); index++) {
            if ((count < 7) && (tolower(input[index]) > 96) && (tolower(input[index]) < 123)){
                if (count == 3)
                    cout << '-';
                
                if (tolower(input[index]) == 'a' || tolower(input[index]) == 'b' ||tolower(input[index]) == 'c') {
                    cout << 2;
                    count++;
                }
                else if (tolower(input[index]) == 'd' || tolower(input[index]) == 'e' ||tolower(input[index]) == 'f') {
                    cout << 3;
                    count++;
                }
                else if (tolower(input[index]) == 'g' || tolower(input[index]) == 'h' ||tolower(input[index]) == 'i') {
                    cout << 4;
                    count++;
                }
                else if (tolower(input[index]) == 'j' || tolower(input[index]) == 'k' ||tolower(input[index]) == 'l') {
                    cout << 5;
                    count++;
                }
                else if (tolower(input[index]) == 'm' || tolower(input[index]) == 'n' ||tolower(input[index]) == 'o') {
                    cout << 6;
                    count++;
                }
                else if (tolower(input[index]) == 'p' || tolower(input[index]) == 'q' ||tolower(input[index]) == 'r' ||tolower(input[index]) == 's') {
                    cout << 7;
                    count++;
                }
                else if (tolower(input[index]) == 't' || tolower(input[index]) == 'u' ||tolower(input[index]) == 'v') {
                    cout << 8;
                    count++;
                }
                else if (tolower(input[index]) == 'w' || tolower(input[index]) == 'x' ||tolower(input[index]) == 'y' ||tolower(input[index]) == 'z') {
                    cout << 9;
                    count++;
                }
            }
        }
        
        // check for rerun or exit
        cout << "\n\nEnter Y/y to convert another telephone number from letters to digits or any other letter to terminate: ";
        cin >> run;

        // check for rerun
        if (tolower(run) != 121)
            return false;

        // reset data points for rerun
        count = 0;
        cin.clear();
        cin.ignore(200, '\n');
    }
    
    return 0;
    exit;
}