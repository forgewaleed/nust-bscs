#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int main()
{
    time_t now = time(0);
    tm*localTime = localtime(&now);

    cout<< setfill('0')
        << setw(2) << localTime->tm_hour << ":"
        << setw(2) << localTime->tm_min << ":"
        << setw(2) << localTime->tm_sec;

    return 0;

}