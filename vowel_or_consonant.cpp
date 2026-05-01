#include <iostream>
#include <cctype>   // for tolower()
using namespace std;

/*
    File Name: vowel_or_consonant.cpp
    Program: Vowel or Consonant Checker
    Author: Pranjal Srivastava

    Description:
    This program takes a single alphabet as input and checks
    whether it is a vowel or a consonant.
*/

int main() {
    char ch;

    // Input
    cout << "Enter a single alphabet: ";
    cin >> ch;

    // Convert to lowercase
    ch = tolower(ch);

    // Check vowel or consonant
    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "Vowel";
        } else {
            cout << "Consonant";
        }
    } else {
        cout << "Invalid input!";
    }

    return 0;
}
