#include<iostream>
using namespace std;
int main()
{

    double balance, annual_interest;
    cout<<"Enter Balance: ";
    cin>> balance;

    cout<<"Enter Interest Rate: ";
    cin>> annual_interest;

    double interest = balance * (annual_interest/1200);

    cout<< interest << endl;

    return 0;
}