/**
 * Michael Buckley
 * Apr 6, 2021
 * Homework 5 part 4
*/

#include <iostream>
#include <string>

using namespace std;

void countVowels(string x) {
    int a=0, e=0, i=0, o=0, u=0;
    for (char ch = 0; ch < x.length(); ch++) {
        switch (x[ch]) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }
    cout << "\nThe number of a's: " << a <<
            "\nThe number of e's: " << e <<
            "\nThe number of i's: " << i <<
            "\nThe number of o's: " << o <<
            "\nThe number of u's: " << u << endl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    countVowels(s);
}