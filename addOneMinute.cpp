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

void addOneMinute() {
    if (getMinute() < 59)
    {                               // if minutes is less than 59
        setMinute(getMinute() + 1); // add 1 to minute
    }
    else
    {                 // otherwise minutes is 59
        setMinute(0); // set minutes to 0
        addOneHour(); // add one hour
    }
}
