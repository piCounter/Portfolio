/**
 * Michael Buckley
 * Apr 29, 2021
 * Structure variables / Array of Records
 * Records are used when an array needs to be of multiple types
 * This program uses a structure variables to store a record to a file
*/

#include <iostream>
#include <fstream>
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
        people << "Employee # " << (i+1) << endl;
        people << Employees[i].name;
        people << Employees[i].age;
        people << Employees[i].street;
        people << Employees[i].city;
        people << Employees[i].phone;
        people << Employees[i].salary;
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
    cout << endl << "" << Employees[0].name << endl << endl;

    return 0;
}