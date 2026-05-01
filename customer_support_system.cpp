#include <iostream>
using namespace std;

/*
    File Name: customer_support_system.cpp
    Program: Basic Customer Support Menu System
    Author: Pranjal Srivastava

    Description:
    This program simulates a basic customer support system.
    It takes user input as a choice and displays the corresponding message.
*/

int main() {
    int choice;

    // Display Menu
    cout << "===== Customer Support System =====" << endl;
    cout << "Press 1 for Support" << endl;
    cout << "Press 2 for Billing" << endl;
    cout << "Press 3 for Technical Support" << endl;
    cout << "Press 0 to talk to an Agent" << endl;

    // Input
    cout << "Enter your choice: ";
    cin >> choice;

    // Handle choice using switch
    switch(choice) {
        case 1:
            cout << "You selected Support." << endl;
            break;

        case 2:
            cout << "You selected Billing." << endl;
            break;

        case 3:
            cout << "You selected Technical Support." << endl;
            break;

        case 0:
            cout << "Connecting to an Agent..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
