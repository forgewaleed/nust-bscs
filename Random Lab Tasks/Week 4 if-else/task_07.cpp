/*Write a program that prompts the user to enter a point
(x, y) and checks whether the point is within the rectangle centered at (0, 0) with width 10
and height 5. For example, (2, 2) is inside the rectangle and (6, 4) is outside the rectangle, as
shown below.*/

#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"Enter Co ordinates (x,y): ";
    cin>> x >> y;

    if (x>=-5 && x<=5 && y>=-2.5 && y<=2.5)
    {
        cout<<"Inside the Rectangle";
    }
    else
    {
        cout<<"Outside the rectangle";
    }
    return 0;

}