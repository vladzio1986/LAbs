#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    char l;
public:
    void get_time() {
        do {
        l = ':';
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> l >> minutes >> l >> seconds;
        }
        while (l != ':' ||
               hours >23 || hours <0 ||
               minutes >59 || minutes <0 ||
               seconds >59 || seconds <0);
    }
    void put_time() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Time T;
    T.get_time();
    T.put_time();
    return 0;
}
