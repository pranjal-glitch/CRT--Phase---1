#include <iostream>
using namespace std;

/*
    File Name: grade_calculator.cpp
    Program: Grade Calculator based on Percentage
    Author: Pranjal Srivastava

    Description:
    This program takes percentage (0–100) as input and
    displays the corresponding grade based on conditions.
*/

int main() {
    int percentage;

    // Input
    cout << "Enter percentage (0 - 100): ";
    cin >> percentage;

    // Validate input and assign grade
    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage!" << endl;
    }
    else if (percentage >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 80) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 60) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}
