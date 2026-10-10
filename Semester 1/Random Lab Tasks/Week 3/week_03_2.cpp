#include<iostream>
using namespace std;
int main()
{
    double starting_velocity, ending_velocity, time;
    cout<<"Enter Starting Velocity: ";
    cin>> starting_velocity;
    cout<<"Enter Ending Velocity: ";
    cin>> ending_velocity;
    cout<<"Enter time: ";
    cin>> time;

    double a = (ending_velocity - starting_velocity) / time;

    cout<<"The AVG Acc is: " << a << "m/s" << endl;

    return 0;
}