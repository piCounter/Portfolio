/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 4
*/

#include <iostream>
#include <string>

using namespace std;


// function to check if each char is a vowel
bool isVowel(string s, int i) {
    return (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u');
}


// nested for loops that iterate over the string and remove any vowels
// for loops are nested to ensure all the vowels are removed
string substr(string s) {
    for (int i=0; i < s.length(); i++)
        for (int i=0; i < s.length(); i++)
            if (isVowel(s, i))
                s.erase(i, 1);
    return s;
}


int main() {
    // define variable
    string s;

    // get user input for variable, accepts the full line
    cout << "Enter a string: ";
    getline(cin, s);
    
    // function call to check string
    s = substr(s);
    
    // output
    cout << "Your new string is: " << s << endl << endl;
}