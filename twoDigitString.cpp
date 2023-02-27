// Created by Kaiulani Ammerman on 01/20/23

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

 string twoDigitString(unsigned int n) {
    string out = ""; //return string
    if(n >= 0 && n < 10) {     //if num is less than 10
                                // add a 0
        out = "0";
        out += to_string(n);
    }
    else {
        out = to_string(n); //convert int to string
    }
    return out; // give 2 digit string output

    }

