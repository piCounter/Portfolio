/**
 * Michael Buckley
 * Apr 4, 2021
 * Homework 8 part 1
*/

#include <iostream>

using namespace std;

struct ComputerType {
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main() {
    
    // constructor
    ComputerType cpu1;

    // user input
    cout << "Enter the name of the manufacturer: ";
    cin >> cpu1.manufacturer;

    cout << "Enter the model of the computer: ";
    cin >> cpu1.modelType;

    cout << "Enter processor type: ";
    cin >> cpu1.processorType;

    cout << "Enter the size of RAM (in GB): ";
    cin >> cpu1.ram;

    cout << "Enter the size of the hard drive (in GB): ";
    cin >> cpu1.hardDriveSize;

    cout << "Enter the year built: ";
    cin >> cpu1.yearBuilt;

    cout << "Enter the price: $";
    cin >> cpu1.price;
    cout << endl;

    // output
    cout << "Manufacturer: " << cpu1.manufacturer << endl;
    cout << "modelType: " << cpu1.modelType << endl;
    cout << "processorType: " << cpu1.processorType << endl;
    cout << "ram: " << cpu1.ram << endl;
    cout << "hardDriveSize: " << cpu1.hardDriveSize << endl;
    cout << "yearBuilt: " << cpu1.yearBuilt << endl;
    cout << "price: $" << cpu1.price << endl;

    return 0;
}