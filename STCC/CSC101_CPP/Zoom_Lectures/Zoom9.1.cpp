/**
 * Michael Buckley
 * Apr 8, 2021
 * String Operations
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string fname = "Jazmin";
    string name = fname + " Jones";
    string str1 = "Computer Science";
    string str2 = "C++ Programming.";
    string str3 = "Calculus 1";
    string str4 = fname + " is taking " + str3 + " and " + str2;
    string str5 = "klfhjdshfklshdfklshdfkl";

    // cout << str4 << endl;
    // str5.clear();
    // int len = str5.length();
    // cout << len << endl;
    
    string str7 = "Zee";
    string str8 = "zee";
    cout << str7.compare(str8) << endl;; // pos if str7 > str8, 0 if str7 == str8, neg if str7 < str8
    // cout << eq << endl;

    cout << fname.empty() << endl; // 0 if not empty and 1 if empty
    fname.replace(0, 3, "Amr"); // replace from location 0 up to location 3 with 3rd argument
    cout << fname << endl;
    cout << fname.insert(6, "!") << endl; // insert into location 7 with string in 2nd argument
    str4.replace(10, 6, "signed");
    cout << str4 << endl;




    return 0;
}