#include <iostream>
using namespace std;

/*
    File Name: vowel_or_consonant_if_else.cpp
    Program: Vowel or Consonant Checker (Using if-else)
    Author: Pranjal Srivastava

    Description:
    This program takes a single character as input and checks
    whether it is a vowel or a consonant using if-else conditions.
*/

int main() {
    char ch;

    // Input
    cout << "Enter a single alphabet: ";
    cin >> ch;

    // Check if alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        // Check vowel
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            cout << "Vowel";
        } else {
            cout << "Consonant";
        }

    } else {
        cout << "Invalid input!";
    }

    return 0;
}
