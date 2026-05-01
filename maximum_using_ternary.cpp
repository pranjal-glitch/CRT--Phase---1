#include <iostream>
using namespace std;

/*
    File Name: maximum_using_ternary.cpp
    Program: Find Maximum of Two Numbers using Ternary Operator
    Author: Pranjal Srivastava

    Description:
    This program takes two integers as input and finds the maximum
    using the ternary operator (? :).
*/

int main() {
    int a, b;

    // Input
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Using ternary operator
    int max = (a > b) ? a : b;

    // Output
    cout << "Maximum = " << max << endl;

    return 0;
}
