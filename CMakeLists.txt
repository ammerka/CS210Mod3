cmake_minimum_required(VERSION 3.24)
project(module3Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(module3Project twoDigitString.cpp nCharString.h nCharString.cpp formatTime24.cpp formatTime24.h formatTime12.cpp formatTime12.h printMenu.cpp printMenu.h twoDigitString.h getMenuChoice.cpp getMenuChoice.h displayClocks.cpp displayClocks.h mainMenu.cpp mainMenu.h addOneSecond.cpp addOneSecond.h addOneMinute.cpp addOneMinute.h addOneHour.cpp addOneHour.h)
