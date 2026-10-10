#include<iostream>
using namespace std;
int main()
{
    int num;
    int i=1;
    int fact =1;

    cout<<"Enter The Number you Want to find factorial: ";
    cin>> num;

    while (i<=num)
    {
        fact = fact * i;
        i++;
    }
    cout<< fact << endl;
    return 0;
}