/**
 * Michael Buckley
 * May 6, 2021
 * Classes vs Structs
*/

#include <iostream>
#include <string>

using namespace std;

class Cars {
    // attributes
    // public:
    string name;
    string model;
    double miles;
    double price;
    
    public:
    Cars(string n, string mo, double mi, double p) {
        name = n;
        model = mo;
        miles = mi;
        price = p;
    }

    // getters
    string getName() {
        return name;
    }

    string getModel() {
        return model;
    }

    double getMiles() {
        return miles;
    }

    double getPrice() {
        return price;
    }

    void increaseMiles(double m); // *logic here

};

void Cars::increaseMiles(double m) { // *or logic here
    miles += m;
}

int main() {
    Cars car1("Toyota", "Corolla", 20000, 9000);


    cout << car1.getName() << endl;
    cout << car1.getModel() << endl;
    cout << car1.getMiles() << endl;
    cout << car1.getPrice() << endl;

    cout << "\nHow many miles did you drive your " << car1.getName() << " this year: ";
    int miles;
    cin >> miles;
    car1.increaseMiles(miles);
    cout << "New miles for " << car1.getName() << " " << car1.getMiles() << endl << endl;

    // declaring the object and invoking the constructor
    Cars honda("Honda", "Civic", 95000, 2300);
    cout << honda.getName() << endl;
    cout << honda.getModel() << endl;
    cout << honda.getMiles() << endl;
    cout << honda.getPrice() << endl;
    cout << "\nHow many miles did you drive your " << honda.getName() << " this year: ";
    cin >> miles;
    honda.increaseMiles(miles);
    cout << "New miles for " << honda.getName() << " " << honda.getMiles() << endl << endl;



    return 0;
}