#include<iostream>
using namespace std;
int main()
{
    double a,b,c,median;
    cout<<"Enter Three Numbers: ";
    cin>> a >> b >> c;

    if (a>b && a<c || a<b && a>c)
    {
        median = a;
    }
    else if (b>a && b<c || b<a && b>c)
    {
        median = b;
    }
    else    
        median = c;

    cout<<"Median is: " << median << endl;

    return 0;
}