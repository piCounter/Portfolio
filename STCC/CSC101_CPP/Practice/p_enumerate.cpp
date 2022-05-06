/**
 * Michael Buckley
 * Apr 15, 2021
 * Create your own type / enumberate
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    enum Color {Brown, Blue, Red, Green, Yellow};
    enum Level {Freshman, Sophomore, Junior, Senior};
    enum Grade {A, B, C, D, F};
    enum PHTutors {John, Debbie, Jamie};
    // enum MTutors {John, Carlene, Karen};  John cant be in both
    enum sports {Basketball, Football, Hockey, Baseball, Soccer, Vollyball};

    sports mySport, funSport;
    mySport = Football;

    cout << endl << static_cast<sports>(Hockey-1) << endl << endl;

    funSport = static_cast<sports>(Hockey-1);

    cout << funSport << endl;

    for (mySport = Baseball; mySport <= Vollyball; mySport = static_cast<sports>(mySport + 1))
        cout << mySport << endl;

    return 0;
}