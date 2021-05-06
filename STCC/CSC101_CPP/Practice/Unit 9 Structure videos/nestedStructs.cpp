/**
 * Michael Buckley
 * May 4, 2021
 * This program uses nested Structures
*/

#include <iostream>
#include <iomanip>

using namespace std;

// date structure
struct Date {
    int month;
    int day;
    int year;
};

// place structure
struct Place {
    char address[50]; //string address has up to 50 characters in length
    char city[20];
    char state[15];
    char zip[10];
};

// employee structure
struct Employee {
    char name[30];
    int number;
    Date birthDate; // nested structure
    Place residence; // nested structure
};

int main() {

    // create constructor
    Employee manager;

    // get managers name
    cout << "Enter the managers name: ";
    cin.getline(manager.name, 30);

    // get managers ID number
    cout << "Enter managers number: ";
    cin >> manager.number;

    // get managers DOB
    cout << "Enter managers DOB (mm dd yyyy): ";
    cin >> manager.birthDate.month >> manager.birthDate.day >> manager.birthDate.year;
    cin.ignore(); // gets the \n after date

    // get managers address
    cout << "Enter managers street address: ";
    cin.getline(manager.residence.address, 50);
    cout << "Enter managers city: ";
    cin.getline(manager.residence.city, 20);
    cout << "Enter managers state: ";
    cin.getline(manager.residence.state, 15);
    cout << "Enter managers zip: ";
    cin.getline(manager.residence.zip, 10);

    // output
    cout << "Name: " << manager.name << endl;
    cout << "Birthday: " << manager.birthDate.month << "/" << manager.birthDate.day << "/" << manager.birthDate.year << endl;
    cout << "Address: " << manager.residence.address << ", " << manager.residence.city << ", " << manager.residence.state << " " << manager.residence.zip << endl;


    return 0;
}