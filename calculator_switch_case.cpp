#include <iostream>
using namespace std;

/*
    File Name: calculator_switch_case.cpp
    Program: Simple Calculator using Switch Case
    Author: Pranjal Srivastava

    Description:
    This program takes two integers and an operator as input
    and performs the corresponding arithmetic operation
    using switch-case (without if-else).
*/

int main() {
    int a, b;
    char op;

    // Input
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Perform operation using switch
    switch(op) {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            // Handle division by zero (important for viva)
            if (b != 0)
                cout << "Result = " << (double)a / b;
            else
                cout << "Error: Division by zero!";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
