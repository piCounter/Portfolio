#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int years = 2021;
    int days = 365;
    int hours = 24;
    int minutes = 60;
    int seconds = 60;

    // int day[2021][365][24][60][60];

    for (int y=0; y<years;y++) {
        for (int d=0; d<days;d++) {
            string month = ""; 

            if (d < 31) month = "January";
            else if (d < 59) month = "February";
            else if (d < 90) month = "March";
            else if (d < 120) month = "April";
            else if (d < 151) month = "May";
            else if (d < 181) month = "June";
            else if (d < 212) month = "July";
            else if (d < 243) month = "August";
            else if (d < 273) month = "September";
            else if (d < 304) month = "October";
            else if (d < 335) month = "November";
            else month = "December";

            for (int h=0; h<hours;h++) {
                for (int m=0; m<minutes; m++) {
                    for (int s=0; s<seconds; s++) {
                        int day;

                                    if      (d < 31)  day = d;
                                    else if (d < 59)  day = d-31;
                                    else if (d < 90)  day = d-59;
                                    else if (d < 120) day = d-90;
                                    else if (d < 151) day = d-120;
                                    else if (d < 181) day = d-151;
                                    else if (d < 212) day = d-181;
                                    else if (d < 243) day = d-212;
                                    else if (d < 273) day = d-243;
                                    else if (d < 304) day = d-273;
                                    else if (d < 334) day = d-304;
                                    else              day = d-334;
                                    
                        cout << month << " " << day+1 << ", " << y << "\t" << h << ":" << m << "." << s << endl;
                    }
                }
            }
        }
    }
}