/**
 * Michael Buckley
 * Apr 29, 2021
 * Structures / Records
*/


#include <iostream>

using namespace std;

struct houseType {
    
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;

}; // structs need a ';' after the closing '}'


int main() {

    // struct houseType mikeHouse;
    // mikeHouse.style = "Victorian";
    // mikeHouse.numOfBedrooms = 3;
    // mikeHouse.numOfBeathrooms = 3;
    // mikeHouse.numOfCarsGarage = 2;
    // mikeHouse.yearBuilt = 1979;
    // mikeHouse.finishedSquareFootage = 3000;
    // mikeHouse.price = 500'000;
    // mikeHouse.tax = 1200;
    // cout << mikeHouse.style << "\n";

    struct houseType houseTypeArr[3];

    for (int i=0; i<3; i++) {
        cout << "\nEnter house # " << i+1 << " style: ";
        cin >> houseTypeArr[i].style;
        cout << "Enter house # " << i+1 << " number of Bedrooms: ";
        cin >> houseTypeArr[i].numOfBedrooms;
        cout << "Enter house # " << i+1 << " number of Bath rooms: ";
        cin >> houseTypeArr[i].numOfBathrooms;
        cout << "Enter house # " << i+1 << " number of Cars Garage: ";
        cin >> houseTypeArr[i].numOfCarsGarage;
        cout << "Enter house # " << i+1 << " year Built: ";
        cin >> houseTypeArr[i].yearBuilt;
        cout << "Enter house # " << i+1 << " finished Square Footage: ";
        cin >> houseTypeArr[i].finishedSquareFootage;
        cout << "Enter house # " << i+1 << " price: ";
        cin >> houseTypeArr[i].price;
        cout << "Enter house # " << i+1 << " tax: ";
        cin >> houseTypeArr[i].tax;
    }

    // modify whatsinside the struct array
    houseTypeArr[0].numOfBathrooms = 6;
    
    // cout
    cout << "House Style\tBedrooms\tbathrooms\tcar garage\tyear built\tsquare feet\tprice\ttax";
    for (int i=0; i<3; i++) {
        cout << houseTypeArr[i].style << "\t" << houseTypeArr[i].numOfBedrooms << "\t" << houseTypeArr[i].numOfBathrooms << "\t" << houseTypeArr[i].numOfCarsGarage << "\t" << houseTypeArr[i].yearBuilt << "\t" << houseTypeArr[i].finishedSquareFootage << "\t" << houseTypeArr[i].price << "\t" << houseTypeArr[i].tax << endl;
        
    }

}