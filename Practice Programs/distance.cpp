#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x_1,x_2,y_1,y_2;
    double distance;

    cout<<"Enter x1 space x2: ";
    cin>> x_1 >> x_2;

    cout<< "Enter y1 space y2: ";
    cin >> y_1 >> y_2;

    distance = sqrt(pow(y_2-y_1,2)+ pow(x_2-x_1,2));

    cout<<"Total Distance is: " << distance << endl;
    
    return 0; 
    
}