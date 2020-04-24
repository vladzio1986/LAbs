#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    long seconds;
};

long TimeToSecs (int h, int m, int s) {
    long sum = h*3600 + m*60 + s;
    return sum;
}

Time SecsToTime (long L) {
    Time temp;
    temp.seconds = L;
    temp.hours = 0;
    temp.minutes = 0;
    while (temp.seconds >= 60) {
        temp.seconds -= 60;
        temp.minutes++;
    }
    while (temp.minutes >= 60) {
        temp.minutes -= 60;
        temp.hours++;
    }
    return temp;
}

int main()
{
    Time t;
    char db;
    long p;
    do {
        cout << "Enter time in 12:59:59 format: " << endl;
        cin >> t.hours >> db >> t.minutes >> db >> t.seconds;
    }
    while (t.hours > 12 || t.minutes > 59 || t.seconds > 59);
    p = TimeToSecs(t.hours, t.minutes, t.seconds);
    db = '/';
    cout << p;
    Time tt = SecsToTime(p);
    cout << endl << tt.hours << db << tt.minutes << db << tt.seconds;
    return 0;
}
