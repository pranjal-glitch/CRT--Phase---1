#include <iostream>
using namespace std;

/*
    File Name: global_variable_division.cpp
    Program: Global Variable Division with Type Casting
    Author: Pranjal Srivastava

    Description:
    This program takes an integer input from the user and divides
    a global variable by the input using explicit type casting.
    It also handles division by zero safely.
*/

// Global variable
int globalVar = 200;

int main() {
    int userInput;

    // Take input from user
    cout << "Enter an integer: ";
    cin >> userInput;

    // Check for division by zero
    if (userInput == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }

    // Explicit type casting and division
    double result = (double)globalVar / userInput;

    // Output result
    cout << "Result after division = " << result << endl;

    return 0;
}
