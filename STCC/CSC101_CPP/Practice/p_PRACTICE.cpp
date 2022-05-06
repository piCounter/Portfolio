#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Test {
    private:
        string name;
        double size;
    
    public:
        string getName();
        void setName(string);
        double getSize();
        void setSize(double);
        void showName();
        Test();
        Test(string);
        Test(string, double);
};


// methods
string Test::getName() {
    return name;
}

void Test::setName(string n) {
    name = n;
}

void Test::showName() {
    cout << this->getName() << endl; // this-> is not needed but it helps with reading
}

double Test::getSize() {
    return size;
}

void Test::setSize(double s) {
    size = s;
}


// constructors
Test::Test() {
    name = "";
    size = 0;
}

Test::Test(string n) {
    name = n;
    size = 0;
}

Test::Test(string n, double s) {
    name = n;
    size = s;
}



int main() {

    // Test adt("Soup");

    // cout << adt.getName() << endl;
    // cout << adt.getSize() << endl;

    // adt.showName();

    string change = "49";
    int converted = stoi(change);
    cout << "stoi() = " << converted << endl;
    

}