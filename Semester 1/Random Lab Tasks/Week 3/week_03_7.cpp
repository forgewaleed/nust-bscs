#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double p_amount, ir, n_years;
    cout<<"Enter an initial investment amount: ";
    cin>> p_amount;

    cout<<"annual interest rate (as a percentage): ";
    cin>> ir;

    double interest_rate = ir / 100;

    cout<<"number of years: ";
    cin>> n_years;

    double fv = p_amount * pow((1+interest_rate), n_years);

    cout<<"Answer will be: " << fv << endl;

    return 0;
    
}