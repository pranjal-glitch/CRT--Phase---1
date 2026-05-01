#include <iostream>
using namespace std;

/*
    File Name: vowel_or_consonant_switch.cpp
    Program: Vowel or Consonant Checker using Switch Case
    Author: Pranjal Srivastava

    Description:
    This program checks whether the entered character is a vowel
    or consonant using switch-case. It also validates input.
*/

int main() {
    char ch;

    // Input
    cout << "Enter a single alphabet: ";
    cin >> ch;

    // Check if input is alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                cout << "Vowel";
                break;

            default:
                cout << "Consonant";
        }

    } else {
        cout << "Invalid input!";
    }

    return 0;
}
