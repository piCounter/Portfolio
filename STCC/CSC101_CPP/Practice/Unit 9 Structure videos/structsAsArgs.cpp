/**
 * Michael Buckley
 * May 4, 2021
 * This program uses nested Structures
*/

#include <iostream>
#include <iomanip>

using namespace std;

// date structure
struct Item {
    int partNum;
    char description[50];
    int onHand;
    double price;
};

// create function so it can run in main as the function is defined below main
void getItem(Item&); 

// main function
int main() {
    // descriptor called thing
    Item thing;

    // run function to collect data for "thing"
    getItem(thing);

    cout << "Total cost: $" << thing.price*thing.onHand << endl;
}

// function to collect data
void getItem(Item& part) { // the & symbol tells the function to point to the original location for collection. this is called the reference
    cout << "Enter the part number: " ;
    cin >> part.partNum;
    cin.ignore();
    cout << "Enter description: ";
    cin.getline(part.description, 50);
    cout << "Enter quantity: ";
    cin >> part.onHand;
    cout << "Enter price: $";
    cin >> part.price;
}