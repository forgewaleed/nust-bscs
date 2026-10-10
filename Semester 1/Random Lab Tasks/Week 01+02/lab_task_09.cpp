#include<iostream>
using namespace std;
int main()
{
    int hour, second, minute, s;
    cout<<"Enter Seconds: ";
    cin>> second;

    hour = second / 3600 ;
    minute = second % 3600 / 60 ;
    s = second % 60;

    cout<< hour << " Hour " << minute << " Minute " << s <<" Seconds" << endl;

}