#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cout<<"Enter Co ordinates (x1,y1) (x2,y2): ";
    cin>> x1 >> y1 >> x2 >> y2 ;

    double slope = (y2-y1)/(x2-x1);

    cout<<"The Slope for the Line that connects two points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << slope << endl;
    
    return 0;
}