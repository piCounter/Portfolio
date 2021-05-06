#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    int size = 8;

    struct Testing {
        string name;
        double value;
    };

    Testing test[size];

    for (int i=0; i<size; i++) {
        cout << "Enter name " << i << ": ";
        cin >> test[i].name;

        cout << "Enter value " << i << ": ";
        cin >> test[i].value;
    }

    for (int i=0; i<size; i++) {
        cout << test[i].name << " \t " << test[i].value << endl;
    }

}