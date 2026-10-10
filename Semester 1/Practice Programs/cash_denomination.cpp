#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter Amount in Thousands: ";
    cin>> amount;

    int thousand = amount / 1000;
    int five = amount % 1000 / 500;
    int hundred = amount % 1000 % 500 / 100;
    int fifty = amount % 1000 % 500 % 100 / 50;
    
    cout << "Thousand: " << thousand << endl;
    cout << "Five Hundred Notes: " << five << endl;
    cout << "Hundred Notes: " << hundred << endl;
    cout << "Fifty Notes: " << fifty << endl;

    return 0;


}