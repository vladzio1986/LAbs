#include <iostream>

using namespace std;

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    date d;
    char slash;
    cout << "Enter date in 31/12/2002 format: ";
    cin >> d.day >> slash >> d.month >> slash >> d.year;
    cout << d.day << slash << d.month << slash << d.year;
    return 0;
}
