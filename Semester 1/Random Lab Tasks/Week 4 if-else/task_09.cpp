#include <iostream>
using namespace std;

int main()
{
    int throw1, throw2, throw3;
    int score;

    cout << "Enter pins knocked down in three throws: ";
    cin >> throw1 >> throw2 >> throw3;

    if (throw1 < 0 || throw1 > 10 ||
        throw2 < 0 || throw2 > 10 ||
        throw3 < 0 || throw3 > 10 ||
        (throw1 != 10 && throw1 + throw2 > 10))
    {
        cout << "Invalid input";
    }
    else if (throw1 == 10)
    {

        score = 10 + throw2 + throw3;
        cout << "Score = " << score;
    }
    else if (throw1 + throw2 == 10)
    {
        
        score = 10 + throw3;
        cout << "Score = " << score;
    }
    else
    {

        score = throw1 + throw2;
        cout << "Score = " << score;
    }

    return 0;
}