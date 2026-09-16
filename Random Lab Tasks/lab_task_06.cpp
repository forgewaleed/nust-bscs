#include<iostream>
using namespace std;
int main()
{
    double value, first, second, third, fourth, fifth, sixth, final;
    cout<<"Enter the Monthly Saving Amount: ";
    cin>> value;
    
    first = 0.05 / 12;
    second = value * (1 + first);
    third = (value + second) * (1 + first);
    fourth = (value + third ) * (1 + first);
    fifth = (value + fourth) * (1 + first);
    sixth = (value + fifth) * (1 + first);
    final = (value + sixth) * (1 + first);

    cout<<"After the six month, the account value is: " << final << endl;

    return 0 ;




}