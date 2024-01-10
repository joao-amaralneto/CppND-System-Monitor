#include <string>

#include "format.h"

using std::string;

// DONE: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    int h;
    int m;
    int s;
    string HH;
    string MM;
    string SS;

    h = seconds / ( 60 * 60 ); 
    m = (seconds / 60) - (h * 60);
    s = seconds % 60;


    // the if else sequence is to show 0 before the unit if it is one digit only
    // like 01:02:04 instead of showing 1:2:4
    if (h < 10) {
        HH = "0" + std::to_string(h);
    }
    else {
        HH = std::to_string(h);
    }

    if (m < 10) {
        MM = "0" + std::to_string(m);
    }
    else {
        MM = std::to_string(m);
    }

    if (s < 10) {
        SS = "0" + std::to_string(s);
    }
    else {
        SS = std::to_string(s);
    }


    return HH + ":" + MM + ":" + SS;
}