/**
 * Michael Buckley
 * Apr 29, 2021
 * Structure variables / Array of Records
 * Records are used when an array needs to be of multiple types
 * This program uses a structure variables to store a record to a file
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// declare a structure for the records
// structures need to be created outside the main program in the global area (OOP?)
struct info {
    char name[25]; // name length up to 25 characters
    int age;
    char street[30]; // street name length up to 30 characters
    char city[30]; // city name length up to 30 characters
    char phone[12]; // phone number length up to 12 characters
    double salary;
};

int main() {
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;
    cin.ignore();
    // info Person; // created Employees array to store all info where Person would only store one set
    info Employees [size]; // initialize new OOP array called Employees

    // get data about a person
    for (int i=0; i<size; i++) {
        if (!(i==0)) cin.ignore();
        cout << "Enter the following data about person # " << i+1 << ": " << endl;

        cout << "\tName: ";
        cin.getline(Employees[i].name, 25);

        cout << "\tAge: ";
        cin >> Employees[i].age;
        cin.ignore();

        cout << "\tStreet: ";
        cin.getline(Employees[i].street, 30);

        cout << "\tCity: ";
        cin.getline(Employees[i].city, 30);

        cout << "\tPhone: ";
        cin.getline(Employees[i].phone, 12);

        cout << "\tSalary: ";
        cin >> Employees[i].salary;
    }

    // save to a file
    ofstream people;
    people.open("oopEmployees.txt");
    for (int i=0; i<size; i++) {
        people << Employees[i].name << endl;
        people << Employees[i].age << endl;
        people << Employees[i].street << endl;
        people << Employees[i].city << endl;
        people << Employees[i].phone << endl;
        people << Employees[i].salary << endl;
    }

    // read from a file
    ifstream staff;
    staff.open("oopEmployees.txt");
    for (int i=0; i<size; i++) {
        staff >> Employees[i].name;
        staff >> Employees[i].age;
        staff >> Employees[i].street;
        staff >> Employees[i].city;
        staff >> Employees[i].phone;
        staff >> Employees[i].salary;
    }


    // use data
    for (int i=0; i< size; i++) {
        cout << setw(20) << left << Employees[i].name << endl;
        cout << "\t" << setw(4) << right << Employees[i].age << endl;
        cout << "\t" << setw(50) << right << Employees[i].street << endl;
        cout << "\t" << setw(25) << right << Employees[i].city << endl;
        cout << "\t" << setw(11) << right << Employees[i].phone << endl;
        cout << "\t" << setw(10) << right << Employees[i].salary << endl;
    }

    return 0;
}