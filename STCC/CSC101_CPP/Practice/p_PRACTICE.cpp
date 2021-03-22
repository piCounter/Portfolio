#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int x = 1, y = -1, z = 1;

    if (x > 0)
        if (y > 0)
            cout << "x > 0 and y > 0" << endl;
    else if (z > 0)
        cout << "x < 0 and z > 0" << endl;
}