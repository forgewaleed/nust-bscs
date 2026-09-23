#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double temp, wind_speed;
    cout<<"enter a temperature between -58°F and 41°F: ";
    cin>> temp;

    cout<<"Enter Wind Speed >= 2: ";
    cin>> wind_speed;

    double chill_index = 35.74 + (0.6215 * temp) - 35.75 * pow(wind_speed,0.16) + 0.4275 * temp * pow(wind_speed, 0.16);

    cout<<"The Chill Index is: " << chill_index << endl;

    return 0;

}