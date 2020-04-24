#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void swapp(Time &t1, Time &t2) {
    swap(t1.hours,t2.hours);
    swap(t1.minutes,t2.minutes);
    swap(t1.seconds,t2.seconds);
}

int main()
{
    Time n1;
    Time n2;
    cout << "Enter first hours, minutes and seconds:" << endl;
    cin >> n1.hours >> n1.minutes >> n1.seconds;
    cout << "Enter second hours, minutes and seconds:" << endl;
    cin >> n2.hours >> n2.minutes >> n2.seconds;
    swapp(n1, n2);
    cout << n1.hours << ":" << n1.minutes << ":" << n1.seconds << endl;
    cout << n2.hours << ":" << n2.minutes << ":" << n2.seconds;
    return 0;
}
