#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int largest,smallest;
    cout<<"Enter Five Digits: ";
    cin>> a >> b >> c >> d >> e;

    if ( a>b && a>c && a>d && a>e )
    {
        largest = a;
    }
    else if ( b>a && b>c && b>d && b>e )
    {
        largest = b;
    }
    else if ( c>a && c>b && c>d && c>e )
    {
        largest = c;
    }
    else if ( d>a && d>b && d>c && d>e )
    {
        largest = d;
    }
    else 
        largest = e;

    if (a<b && a<c && a<d && a<e)
    {
        smallest = a;
    }
    else if (b<a && b<c && b<d && b<e)
    {
        smallest = b;
    }
    else if (c<b && c<a && c<d && c<e)
    {
        smallest = c;
    }
    else if (d<b && d<c && d<a && d<e)
    {
        smallest = d;
    }
    else
        smallest = e;
    
    cout<< largest << " is the Largest Number" <<endl;
    cout<< smallest << " is the smallest number" <<endl;
    
    return 0;  
    
}