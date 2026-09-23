#include<iostream>
using namespace std;
int main()
{
    int digit, a, b, c;
    cout<<"Enter 3 Digit Number You Want to Reverse: ";
    cin>> digit;

    a = digit / 100;
    b = digit % 100 / 10;
    c = digit % 100 % 10;

    cout<< c << b << a << endl; 

    return 0;

    


}