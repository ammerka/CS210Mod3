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

    string nCharString (size_t n, char c)
    {
    string out = ""; // return string
    for (size_t i = 0; i < n; i++) //to get desired length
    {
        out += c; //add character to string
    }
    return out; //return string
}
