#include<iostream>
using namespace std;
int main()
{
    double height, weight, bmi;
    float h;
    cout<<"Enter Weight in KG: ";
    cin>> weight;
    cout<<"Enter Height in Meters: ";
    cin>> h;
    height = h*h;
    bmi = weight / height;
    
    cout <<"BMI = " << bmi <<endl ; 

    cout<<"BMI VALUES"<< endl;
    cout<<"Underweight: Less than 18.5" << endl;
    cout<<"Normal: between 18.5 and 24.9" << endl;
    cout<<"Overweight: between 25 and 29.9" << endl;
    cout<<"Obese: 30 or Greater" << endl;

    return 0;

}