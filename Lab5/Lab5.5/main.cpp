#include <iostream>

using namespace std;

long hms_to_secs (int s, int m, int h) {
    long sum = s + m*60 + h*3600;
    return sum;
}

int main()
{
    int sec, minutes, hours;
    cout << "Enter seconds: "; cin >> sec;
    cout << "Enter minuters: "; cin >> minutes;
    cout << "Enter hours: "; cin >> hours;
    cout << "Overall seconds: " << hms_to_secs(sec, minutes, hours);
    return 0;
}
