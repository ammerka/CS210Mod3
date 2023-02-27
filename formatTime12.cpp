//
// Created by Kaiulani Ammerman on 1/20/2023.
//

#include "addOneHour.h"
#include "addOneMinute.h"
#include "addOneSecond.h"
#include "mainMenu.h"
#include "displayClocks.h"
#include "getMenuChoice.h"
#include "printMenu.h"
#include "formatTime12.h"
#include "twoDigitString.h"
#include "nCharString.h"
#include "formatTime24.h"
#include <string>
#include <iostream>
using namespace std;

string formatTime12(unsigned int h, unsigned int m, unsigned int s){
    string out;
    //if it is after noon, minus 12 to get time in non-military format, and time would be in PM
    if (h >= 12) {
        h -= 12;
        out = " P M";
    } else {
        //otherwise, it is AM
        out = " A M";
    }
    //if the hour is 0 (midnight or noon after subtracting 12), then put the hour as 12
    if (h == 0) {
        h = 12;
    }
    //output hour, mins, secs
    out = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + out;
    return out;
}



