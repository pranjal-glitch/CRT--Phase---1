#include <iostream>
using namespace std;

/*
    File Name: sum_of_positive_numbers.cpp
    Program: Sum of Positive Numbers Until Negative Input
    Author: Pranjal Srivastava

    Description:
    This program continuously takes integer input from the user.
    It stops when a negative number is entered and prints the
    sum of all positive numbers entered before that.
*/

int main() {
    int num;
    int sum = 0;

    cout << "Enter numbers (negative number to stop): " << endl;

    while (true) {
        cin >> num;

        // Stop if negative number entered
        if (num < 0) {
            break;
        }

        // Add only positive numbers
        sum += num;
    }

    cout << "Sum of positive numbers = " << sum << endl;

    return 0;
}
