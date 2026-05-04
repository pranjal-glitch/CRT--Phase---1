/*Description

This program prints a right-angled triangle using *.
Each row contains an increasing number of stars.
  */
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {

        // Inner loop for printing stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
