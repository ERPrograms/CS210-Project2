/*
 * main.cpp
 * Author: Eduardo
 * Date: 2025-08-29
 * Purpose: Main program to gather user input and run investment calculations
 */

#include <iostream>
#include <limits>
#include "Investment.h"
using namespace std;

// Function to validate double input and ensure it's positive
double getPositiveDouble(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value < 0) {
            cout << "Invalid input. Please enter a positive number.\n";
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard extra input
            return value;
        }
    }
}

// Function to validate integer input and ensure it's positive
int getPositiveInt(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value <= 0) {
            cout << "Invalid input. Please enter a positive whole number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

int main() {
    double initInvestment, monthlyDeposit, annualInterest;
    int numYears;
    char userChoice;

    cout << "==============================================\n";
    cout << "   Welcome to the Airgead Banking Calculator   \n";
    cout << "==============================================\n\n";

    do {
        initInvestment = getPositiveDouble("Enter Initial Investment Amount: $");
        monthlyDeposit = getPositiveDouble("Enter Monthly Deposit Amount: $");
        annualInterest = getPositiveDouble("Enter Annual Interest Rate (in %): ");
        numYears = getPositiveInt("Enter Number of Years: ");

        Investment myInvestment(initInvestment, monthlyDeposit, annualInterest, numYears);

        myInvestment.displayWithoutMonthlyDeposit();
        myInvestment.displayWithMonthlyDeposit();

        cout << "\nWould you like to enter another set of data? (Y/N): ";
        cin >> userChoice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (userChoice == 'Y' || userChoice == 'y');

    cout << "\nThank you for using the Airgead Banking Calculator. Goodbye!\n";
    return 0;
}

