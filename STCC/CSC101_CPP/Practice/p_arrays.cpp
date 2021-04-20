/**
 * Michael Buckley
 * Apr 20, 2021
 * Review
*/

#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int a[size];
    int b[size];

    for (int i=0; i<size; i++) {
        a[i] = i;
        for (int j=0; j<size; j++) {
            b[j] = j;
            cout << b[j] << " ";
        }
        cout << endl;
    }
}