/**
 * Michael Buckley
 * Feb 25,2021
 * Zoom Lesson 5 - input output manipulation
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    string Name = " ";
    cout << "Enter name: ";
    getline(cin, Name);
    cout << Name;



    // string Name = "Mike Buckley";
    // double GPA = 3.543;
    // int Scholarship = 8'250;
    // cout << fixed << showpoint << setprecision(2);

    // cout << setw(20) << Name << setw(8) << GPA << setw(10) << Scholarship << endl;

    // cout << setfill('*');
    // cout << setw(20) << Name << setw(8) << GPA << setw(10) << Scholarship << endl;

    // cout << setfill('*');
    // cout << setw(20) << Name << setw(8) << setfill('#') << GPA << setw(10) << setfill('$') << Scholarship << endl;

    // cout << setfill('*');
    // cout << left << setw(20) << Name << right << setw(8) << setfill('#') << GPA << setw(10) << setfill('$') << Scholarship << endl;

    



    // long x = 7'123'589'895;
    // long long y = 25'654'589'456'789'698;
    // double z = 54'458'895'596.32'897;
    // cout << fixed << showpoint << setprecision(4);
    // cout << "x = " << x << endl;
    // cout << "y = " << y << endl;
    // cout << "z = " << z << endl;
    // cout << 7'8'8'5'6'9'7'5'1 << endl;
    // cout << "1'205 * 34'419 = " << 1'205 * 34'419 << endl;



    // double hours = 35.5;
    // double rate = 22.51;
    // double bonus = 0.1;

    // cout << "\t\thours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", bonus = " << hours * rate * bonus << endl;
    // cout << scientific;
    // cout << "Scientific: \thours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", bonus = " << hours * rate * bonus << endl;
    // cout << fixed << showpoint << setprecision(2);
    // cout << "Fixed: \t\thours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", bonus = " << hours * rate * bonus << endl;

    cout << endl;
    return 0;
}