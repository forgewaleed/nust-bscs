#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double amount, rate, years, future_value, x, y;
    cout<<"Enter investment amount: ";
    cin>> amount;
    cout<<"Enter Annuanl Interest rate in percentage: ";
    cin>> rate;
    cout<<"Enter number of Years: ";
    cin>> years;
    x = rate / 100;
    y = x / 12;

    future_value = amount * pow(1 + y, years*12 );

    cout<<"Accumulated Value is: $" << future_value << endl;
    return 0;

}