#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    int index = 0;
    int num;

    while (true) {
        cout << "Enter a number from 1-10: ";
        cin >> num;
        if (num == 1) return false;
        else index++;
    }

}