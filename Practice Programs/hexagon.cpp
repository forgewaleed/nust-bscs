#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double area, side;

    cout<<"Enter the side of the hexagon: ";
    cin>> side;

    area = (3 * sqrt(3) / 2 ) * pow(side, 2);

    cout<<"The Area of The Hexagon is: " << area << endl;

    return 0;
}