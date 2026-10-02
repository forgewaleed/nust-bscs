#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter points (x,y): ";
    cin>> x >> y;

    if (x==0 && y==0)
    {
        cout<<"origin";
    }
    else if (y==0)
    {
        cout<<"X-Axis";
    }
    else if (x==0)
    {
        cout<<"Y-Axis";
    }
    else
    {
        cout<<"Neither Axis";
    }
    return 0;   
}