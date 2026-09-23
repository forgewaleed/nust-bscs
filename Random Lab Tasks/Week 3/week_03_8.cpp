#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double t, d;
    cout<<"Enter time: ";
    cin>> t;

    d = 0.5 * 9.8 * pow(t,2);

    cout<<"The Distance covered will be: " << d << endl;

    return 0;


}