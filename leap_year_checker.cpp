#include <iostream>
using namespace std;

/*
    File Name: leap_year_checker.cpp
    Program: Leap Year Checker
    Author: Pranjal Srivastava

    Description:
    This program takes a year as input and checks whether
    it is a leap year or not using standard conditions:
    - Divisible by 4 and not by 100, OR
    - Divisible by 400
*/

int main() {
    int year;

    // Input
    cout << "Enter a year: ";
    cin >> year;

    // Leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year";
    } else {
        cout << year << " is NOT a Leap Year";
    }

    return 0;
}
