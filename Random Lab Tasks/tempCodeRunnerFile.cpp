#include<iostream>
using namespace std;
int main()
{
    int input, m1, decrypt;
    cout<<"Enter Four Digit Encrypted Number: ";
    cin>> input;

    m1 = input / 1000;
    int m2 = (m1 + 7) % 10;

    int n1 = input % 1000 / 100;
    int n2 = (n1 + 7)  % 10;

    int p1 = input % 100 / 10;
    int p2 = (p1 + 7) % 10;

    int q1 = input % 100 % 10;
    int q2 = (q1+7) % 10;

    int x1 = p2;
    int x2 = q2;
    int w1 = m2;
    int w2 = n2;


    cout << x1 << x2 << w1 << w2 << endl;


    cout<<"Enter four digit to be decrypted: ";
    cin>> decrypt;

    int u1 = decrypt / 1000;
    int u2 = (u1 + 3) % 10;
    int v1 = decrypt % 1000 / 100;
    int v2 = (v1 + 3) % 10;
    int r1 = decrypt % 100 / 10;
    int r2 = (r1 + 3) % 10;
    int e1 = decrypt % 100 % 10;
    int e2 = (e1 + 3) % 10;

    int c1 = r2;
    int c2 = e2;
    int c3 = u2;
    int c4 = v2;



    cout<< c1 << c2 << c3 << c4 << endl; 

    return 0; 

}