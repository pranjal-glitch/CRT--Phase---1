#include <iostream>
using namespace std;

/*
    Program: Celsius to Fahrenheit Converter
    Author: Pranjal Srivastava

    Description:
    This program takes temperature in Celsius as input from the user
    and converts it into Fahrenheit using the formula:

        F = (C * 9/5) + 32
*/

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    double celsius, fahrenheit;

    // Prompt user for input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert to Fahrenheit
    fahrenheit = celsiusToFahrenheit(celsius);

    // Display result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
