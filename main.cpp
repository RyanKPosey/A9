/**
 * @file main.cpp
 * @brief CS 1C Lab A9 - Exception handling with try/catch.
 */

#include <iostream>

using namespace std;

int main() {

    int dividend = 0;
    int divisor = 0;
    int quotient = 0;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw divisor;
        }

        quotient = dividend / divisor;
        cout << "Quotient = " << quotient << endl;
    } catch (int) { // catch divisor error
        cout << "Error: Cannot divide by zero." << endl;
    }

    return 0;
}
