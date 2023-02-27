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

void addOneHour() {
    if (getHour() < 23)
    {                           // if hours is less than 23
        setHour(getHour() + 1); // add 1 to hour
    }
    else
    {               // otherwise hour is 23
        setHour(0); // set hours to 0
    }

    // nothing to return, just setHour to the appropriate value
}
