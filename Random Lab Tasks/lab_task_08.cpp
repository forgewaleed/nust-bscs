#include<iostream>
using namespace std;
int main()
{
    double length, width, area, perimeter;

    cout<<"Enter Length of Rectangle: ";
    cin>> length;
    cout<<"Enter width of Rectange: ";
    cin>> width;

    area = length * width;
    cout<<"Area of Rectangle is: "<< area <<endl;

    perimeter = 2*(length + width);
    cout<<"Perimeter of Rectangle is: "<< perimeter ;

    return 0;    

}