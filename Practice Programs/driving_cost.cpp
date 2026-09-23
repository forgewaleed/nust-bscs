#include<iostream>
using namespace std;
int main()
{
    
    double distance, fuel_efficency, price_gallon;
    cout<<"Enter The Driving Distance: ";
    cin>> distance;
    cout<<"Fuel Efficency Miles Per Gallon: ";
    cin>> fuel_efficency;
    cout<<"Enter Price Per Gallon: ";
    cin>> price_gallon;

    double total_cost = ( distance / fuel_efficency ) * price_gallon;

    cout<<"The Total Cost of Driving is: " << total_cost << endl;

    return 0;

}