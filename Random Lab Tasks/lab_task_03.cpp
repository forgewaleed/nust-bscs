#include<iostream>
using namespace std;
int main()
{
    double celcius, fahrenheit;
    
    cout<<"Enter Temprature in Celcius: ";
    cin>> celcius;

    fahrenheit = ( 9.0/5 ) * celcius + 32;
    cout<< celcius << " Celcius is " << fahrenheit << " Fahrenheit";
    return 0;  
}