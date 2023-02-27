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

unsigned int getMenuChoice(unsigned int maxChoice)
{
    unsigned int choice = 0; // choice to return
    while (choice < 1 || choice > maxChoice)
    {                                  // add while loop for multiple choices
        cout << "What would you like to do? "; // ask user for prompt
        cin >> choice;                 //  input choice
    }
    return choice;                     // return choice
} // end getMenuChoice() function
