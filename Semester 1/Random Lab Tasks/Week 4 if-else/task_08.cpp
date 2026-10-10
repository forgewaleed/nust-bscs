#include<iostream>
using namespace std;
int main()
{
    double x1, y1, x2, y2,y;
    cout<<"Enter co ordinates of two points (x1,y1) (x2,y2): ";
    cin>> x1 >> y1 >> x2 >> y2;

    double m = (y2-y1)/(x2-x1);
    double b = y1 - m*x1;

    if (m==1)
    {
        cout<<"y=x";
    }
    
    else if (b==0)
    {
        cout<<"y=x";
    }

    else if (b<0)
    {
        cout<< "y = " << m << "x + " << b << endl;
        
    }
    else
        cout<< "y = " << m << "x + " << b << endl;
        
    return 0;
}