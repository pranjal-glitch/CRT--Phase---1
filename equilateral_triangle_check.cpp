#include <iostream>
using namespace std;

/*
    File Name: equilateral_triangle_check.cpp
    Program: Equilateral Triangle Checker
    Author: Pranjal Srivastava

    Description:
    This program takes three sides of a triangle as input
    and checks whether the triangle is equilateral or not.
*/

int main() {
    int a, b, c;

    // Take input
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    // Optional: Check valid triangle condition
    if (a + b > c && b + c > a && a + c > b) {

        // Check if equilateral
        if (a == b && b == c) {
            cout << "True (Equilateral Triangle)" << endl;
        } else {
            cout << "False (Not an Equilateral Triangle)" << endl;
        }

    } else {
        cout << "Invalid Triangle" << endl;
    }

    return 0;
}
