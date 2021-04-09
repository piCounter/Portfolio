/**
 * Michael Buckley
 * Apr 8, 2021
 * String Operations
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Michael Buckley";
    string str1, str2, str3, str4, str5, str6, fname, lname;
    str1 = name;
    cout << "str1 = " << str1 << endl;
    str2 = "Michael";
    str3 = "Buckley";
    str4 = "Hello " + str2 + ", " + str3;
    cout << "str4 = " << str4 << endl;
    cout << name[0] << endl;
    name[0] = 'm';
    name[8] = 'b';
    cout << name << endl;
    cout << "Enter a new name: ";
    cin >> fname >> lname;
    name = fname + " " + lname;
    cout << name << endl;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str5); // up to 256 char or \n
    cout << str5 << endl;


    return 0;
}

