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

void printMenu(char * strings[], unsigned int numStrings, unsigned char width) {
    cout << nCharString(width, '*') << endl; //print star header

    for (unsigned int i = 0; i < numStrings; i++) {
        cout << "* "<< i+1 << " - " << strings[i] << nCharString(width - strlen(strings[i]) - 7, ' ') << "*" << endl; //print strings
        if ( i < numStrings-1 ) {
            cout  << endl; // blank lines
        }

    }
    cout << nCharString(width, '*') << endl; //print start footer
    return;//end printMenu function
}
