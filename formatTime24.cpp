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

    string formatTime24(unsigned int h, unsigned int m, unsigned int s){
        string out = ""; //return string
        out += twoDigitString(h) + ":" +  twoDigitString(m) + ":" + twoDigitString(s); //output hours, mins, seconds
        return out;
    }
