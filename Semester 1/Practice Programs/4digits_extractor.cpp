//This Program will take 4 digits from user, extract them individual digits, and find their Cubes

#include<iostream>
using namespace std;
int main()
{
    int digit, first, second, third, fourth;
    cout<<"Enter 4 digit Number: ";
    cin>> digit;

    first = digit / 1000;
    second = digit % 1000 / 100;
    third = digit % 1000 % 100 / 10;
    fourth = digit % 1000 % 100 % 10;

    cout<< "Cube of the First Digit is: " << first * first * first << endl;
    cout<< "Cube of the 2nd Digit is: " << second * second * second << endl;
    cout<< "Cube of the 3rd Digit is: " << third * third * third << endl;
    cout<< "Cube of the 4th Digit is: " << fourth * fourth * fourth << endl;
    
    return 0;


}