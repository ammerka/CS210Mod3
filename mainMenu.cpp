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
#include <cstring>
using namespace std;

void mainMenu() {
    unsigned int choice = 0; // choice to return
    while (choice < 4) {// while choice is not 4

        char *menu[] = { "Add One Hour", "Add One Minute", "Add One Second", "Exit Program" };
        printMenu(menu, 4, 26); // Add display menu

        choice = getMenuChoice(4); // get choice
        switch (choice) {
            case 1:                                             // if choice is 1
                addOneHour();                                   // add one hour
                break;                                          // break
            case 2:                                             // if choice is 2
                addOneMinute();                                 // add one minute
                break;                                          // break
            case 3:                                             // if choice is 3
                addOneSecond();                                 // add one second
                break;                                          // break
            case 4:                                             // if choice is 4
                break;                                          // break
        }                                                   // end switch
        displayClocks(getHour(), getMinute(), getSecond()); //attaching the displayClocks function to show time
    }
}

int hour = 0; //integer hour variable
int minute = 0; // integer minute variable
int second = 0; //integer second variable

int getHour(void) {
    return hour; //getting hour
}
void setHour( int h ) {
    hour = h; //setting variable h with hour
}

int getMinute(void) {
    return minute; //getting minute
}
void setMinute( int m ) {
    minute = m; //setting minute with m
}

int getSecond(void) {
    return second;//getting second
}
void setSecond( int s ) {
    second = s; //setting second with s
}

int main ( int argc, char* argv[] ) //function for real/local time
{
    time_t now = time(nullptr);
    tm* now_tm;
    now_tm = localtime(&now);
    setHour(now_tm->tm_hour); //setting hour with local time hour
    setMinute(now_tm->tm_min); //setting minute with local time minute
    setSecond(now_tm->tm_sec); //setting second with local time second

    mainMenu();
    return 0; //break
}