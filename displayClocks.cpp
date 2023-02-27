//
// Created by Kaiulani Ammerman on 1/20/2023.
//

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

void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
// cout 27 stars + 3 spaces + 27 stars + endl
cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;                              // cout 1 star + 6 spaces + 12-HOUR CLOCK + 6 spaces + 1 star + 3 spaces
cout << "*" << nCharString(6, ' ') << "12-HOUR CLOCK" << nCharString(6, ' ') << "*" << nCharString(3, ' ');       // cout 1 star + 6 spaces + 24-HOUR CLOCK + 6 spaces + 1 star + endl
cout << "*" << nCharString(6, ' ') << "24-HOUR CLOCK" << nCharString(6, ' ') << "*" << endl;                      // cout an endl for a blank line
cout << endl;                                                                                                     // cout 1 star + 6 spaces + formatTime12 (h, m, s) + 7 spaces + 1 star + 3 spaces
cout << "*" << nCharString(6, ' ') << formatTime12(h, m, s) << nCharString(7, ' ') << "*" << nCharString(3, ' '); // cout 1 star + 8 spaces + formatTime24(h, m, s) + 9 spaces + 1 star + endl
cout << "*" << nCharString(8, ' ') << formatTime24(h, m, s) << nCharString(9, ' ') << "*" << endl;                // cout 27 stars + 3 spaces + 27 stars + endl
cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
} // end displayClocks() function

