/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 4
*/

#include <iostream>
#include <string>

using namespace std;

bool isVowel(string s, int i) {
    return (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u');
}

string substr(string s) {
    for (int i=0; i < s.length(); i++)
        for (int i=0; i < s.length(); i++)
            if (isVowel(s, i))
                s.erase(i, 1);
    return s;
}



int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);
    
    s = substr(s);
    
    cout << "Your new string is: " << s << endl << endl;
}