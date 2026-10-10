#include<iostream>
using namespace std;
int main()
{
    long minutes, years, days;
    cout<<"Enter Minutes: ";
    cin>> minutes;

    years = minutes / 525600;
    days = minutes % 525600 / 1440;

    cout<< years <<  days << endl;

    return 0; 
}