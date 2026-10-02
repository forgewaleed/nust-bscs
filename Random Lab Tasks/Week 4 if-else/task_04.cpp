#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three Sides of Triangles: ";
    cin>> a >> b >> c;

    if (a==b+c || b==a+c || c==a+b)
    {
        cout<<"Right Triangle";
    }
    else if (a==b && b==c && a==c)
    {
        cout<<"Equilateral Triangle";
    }
    else if(a!=b && a!=c && b!=c)
    {
        cout<<"Isosceles Triangle";
    }
    else
    {
        cout<<"Error";
    }
    return 0;
}