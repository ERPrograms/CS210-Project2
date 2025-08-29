/*
 * Investment.cpp
 * Author: Eduardo
 * Date: 2025-08-29
 * Purpose: Implementation of the Investment class methods
 */

#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

Investment::Investment(double t_initInvest, double t_monthlyDep, double t_annualRate, int t_years) {
    m_initialInvestment = t_initInvest;
    m_monthlyDeposit = t_monthlyDep;
    m_annualInterestRate = t_annualRate;
    m_numYears = t_years;
}

void Investment::setValues(double t_initInvest, double t_monthlyDep, double t_annualRate, int t_years) {
    m_initialInvestment = t_initInvest;
    m_monthlyDeposit = t_monthlyDep;
    m_annualInterestRate = t_annualRate;
    m_numYears = t_years;
}

void Investment::displayWithoutMonthlyDeposit() {
    double totalAmount = m_initialInvestment;
    double interest;

    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "========================================================\n";
    cout << "Year\tYear End Balance\tInterest Earned\n";
    cout << "--------------------------------------------------------\n";

    for (int year = 1; year <= m_numYears; ++year) {
        interest = totalAmount * (m_annualInterestRate / 100);
        totalAmount += interest;

        cout << fixed << setprecision(2);
        cout << year << "\t$" << totalAmount << "\t\t$" << interest << endl;
    }
}

void Investment::displayWithMonthlyDeposit() {
    double totalAmount = m_initialInvestment;
    double monthlyInterest;
    double yearlyInterest;

    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "=====================================================\n";
    cout << "Year\tYear End Balance\tInterest Earned\n";
    cout << "-----------------------------------------------------\n";

    for (int year = 1; year <= m_numYears; ++year) {
        yearlyInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            totalAmount += m_monthlyDeposit;
            monthlyInterest = totalAmount * ((m_annualInterestRate / 100) / 12);
            yearlyInterest += monthlyInterest;
            totalAmount += monthlyInterest;
        }

        cout << fixed << setprecision(2);
        cout << year << "\t$" << totalAmount << "\t\t$" << yearlyInterest << endl;
    }
}
