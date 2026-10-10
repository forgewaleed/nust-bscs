#include<iostream>
using namespace std;
int main()
{
    double subtotal,  gratuity_rate;
    cout<<"Enter Subtotal: ";
    cin>> subtotal;
    cout<<"Enter  gratuity rate: ";
    cin>> gratuity_rate;

    double final_gratuityrate = subtotal * (gratuity_rate / 100) ;
    cout<< "The Gratuity Rate is $"<<final_gratuityrate<< " and total is " << subtotal+final_gratuityrate << endl;

    return 0;

}