#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    Time t;
    cout << "Enter hours, minutes and seconds:" << endl;
    cin >> t.hours >> t.minutes >> t.seconds;
    while (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    while (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }
    cout << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
    return 0;
}
