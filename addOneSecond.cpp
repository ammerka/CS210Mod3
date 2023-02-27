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

void addOneSecond() {
    {

        if (getSecond() < 59)
        {                               // if seconds is less than 59
            setSecond(getSecond() + 1); // add 1 to second
        }
        else
        {                   // otherwise seconds is 59
            setSecond(0);   // set seconds to 0
            addOneMinute(); // add one minute
        }
    }
}
