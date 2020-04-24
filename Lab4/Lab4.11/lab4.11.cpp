#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    Time t1;
    Time t2;
    Time t3;
    char db;
    do {
        cout << "Enter first time in 12:59:59 format: " << endl;
        cin >> t1.hours >> db >> t1.minutes >> db >> t1.seconds;
    }
    while (t1.hours > 12 || t1.minutes > 59 || t1.seconds > 59);
    do {
        cout << "Enter second time in 12:59:59 format: " << endl;
        cin >> t2.hours >> db >> t2.minutes >> db >> t2.seconds;
    }
    while (t2.hours > 12 || t2.minutes > 59 || t2.seconds > 59);
    t3.seconds = 0;
    t3.minutes = 0;
    t3.hours = 0;
    t3.seconds = t1.seconds + t1.minutes * 60 + t1.hours * 3600 + t2.seconds + t2.minutes * 60 + t2.hours * 3600;
    while (t3.seconds > 59) {
        t3.seconds -= 60;
        t3.minutes ++;
    }
    while (t3.minutes > 59) {
        t3.minutes -= 60;
        t3.hours++;
    }
    db = ':';
    cout << "Time is: " << t3.hours << db << t3.minutes << db << t3.seconds;
    return 0;
}
