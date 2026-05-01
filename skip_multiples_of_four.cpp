#include <iostream>
using namespace std;

/*
    File Name: skip_multiples_of_four.cpp
    Program: Print Numbers While Skipping Multiples of 4
    Author: Pranjal Srivastava

    Description:
    This program takes an integer n as input and prints numbers
    from 1 to n, skipping all multiples of 4 using the continue statement.
*/

int main() {
    int n;

    // Input
    cout << "Enter value of n: ";
    cin >> n;

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {

        // Skip multiples of 4
        if (i % 4 == 0)
            continue;

        cout << i << " ";
    }

    return 0;
}
