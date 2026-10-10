#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Character: ";
    cin>> ch;

    if ( ch>=65 && ch <=90 )
    {
        cout<<"Capital Letter";
    }
    else if ( ch>=97 && ch<=122)
    {
        cout<<"Small Letter";
    }
    else if ( ch>=48 && ch<=57 )
    {
        cout<<"A digit";
    }
    else
    {
        cout<<"Special Symbol";
    }
    return 0;
}