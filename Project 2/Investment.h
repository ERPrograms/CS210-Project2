/*
 * Investment.h
 * Author: Eduardo
 * Date: 2025-08-29
 * Purpose: Declaration of the Investment class for calculating investment growth
 */

#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterestRate;
    int m_numYears;

public:
    Investment(double t_initInvest, double t_monthlyDep, double t_annualRate, int t_years);
    void setValues(double t_initInvest, double t_monthlyDep, double t_annualRate, int t_years);
    void displayWithoutMonthlyDeposit();
    void displayWithMonthlyDeposit();
};

#endif
