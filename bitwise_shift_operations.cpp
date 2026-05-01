#include <iostream>
using namespace std;

/*
    File Name: bitwise_shift_operations.cpp
    Program: Bitwise Shift Operations (Multiply & Divide)
    Author: Pranjal Srivastava

    Description:
    This program demonstrates the use of bitwise shift operators:
    - Left Shift (<<) to multiply a number by powers of 2
    - Right Shift (>>) to divide a number by powers of 2

    Example:
    a << 2  => a * 4
    b >> 3  => b / 8
*/

int main() {
    int a, b;

    // Take input
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // Multiply a by 4 using left shift (2^2)
    int multiplyResult = a << 2;

    // Divide b by 8 using right shift (2^3)
    int divideResult = b >> 3;

    // Output results
    cout << "a * 4 using left shift = " << multiplyResult << endl;
    cout << "b / 8 using right shift = " << divideResult << endl;

    return 0;
}
