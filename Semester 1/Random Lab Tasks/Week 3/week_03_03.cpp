#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2;
    cout<<"Enter (x1,y1): ";
    cin>> x1 >> y1;
    
    cout<<"Enter (x2,y2): ";
    cin>> x2 >> y2;

    double d = sqrt( pow((y2-y1),2) + pow((x2-x1),2) );
    cout<<"Distance is Approx: " << d << endl;

    return 0;

}