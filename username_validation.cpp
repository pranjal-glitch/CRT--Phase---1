#include <iostream>
#include <string>
using namespace std;

/*
    File Name: username_validation.cpp
    Program: Username Validation System
    Author: Pranjal Srivastava

    Description:
    This program checks whether the entered username
    matches a predefined username.
*/

// Fixed username (constant for security)
const string USERNAME = "Pranjal123";

int main() {
    string inputUsername;

    // Take input
    cout << "Enter username: ";
    cin >> inputUsername;

    // Validate username
    if (inputUsername == USERNAME) {
        cout << "Login Successful" << endl;
    } else {
        cout << "Invalid Username" << endl;
    }

    return 0;
}
