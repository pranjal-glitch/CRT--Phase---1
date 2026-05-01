#include <iostream>
using namespace std;

/*
    File Name: swap_two_numbers.cpp
    Program: Swap Two Numbers using Temporary Variable
    Author: Pranjal Srivastava

    Description:
    This program takes two numbers as input and swaps their values
    using a temporary variable.
*/

int main() {
    int a, b, temp;

    // Input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output
    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
