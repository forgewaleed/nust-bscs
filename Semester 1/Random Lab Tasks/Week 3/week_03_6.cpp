#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a, b, c, s, area;
    cout<<"Enter Length of Triangles: ";
    cin>> a >> b >> c;

    s = (a + b + c) / 2;
    double a1 = s*(s-a)*(s-b)*(s-c);

    area = pow(a1,0.5);

    cout<<"Area is: " << fixed << setprecision(2) << area << endl;

    return 0;



}