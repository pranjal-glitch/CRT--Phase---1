/* Description

This program prints a centered pyramid pattern using *.
The number of rows is taken as input from the user.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // Take number of rows as input
    cout << "Enter number of rows: ";
    cin >> n;

    // Loop for each row
    for(int i = 1; i <= n; i++) {

        // Print spaces (for alignment)
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        // Formula: 2*i - 1 → gives odd numbers (1, 3, 5, ...)
        for(int j = 1; j <= 2*i - 1; j++) {
            cout << "*";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
