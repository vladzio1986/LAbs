#include <iostream>

using namespace std;
class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time ( int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
 void ourTime ( ){

    cout << " Enter time: " << endl;
    cin >> hours;
    cin >> minutes;
    cin >> seconds;
}
void sumTime ( Time T1, Time T2 ) {
        seconds = T1.seconds +T2.seconds;
        minutes = T1.minutes +T2.minutes + seconds/60;
        hours = T1.hours +T2.hours + minutes/60;
        minutes %= 60;
        seconds %= 60;
        hours %= 24;
}

void showResult () {
    if (b(this->hours) == 1){
        hours -= 12;
        cout << " Our result: " << hours << ":" << minutes << ":" << seconds;
        cout << "PM";
    }
    else {
        cout << " Our result: " << hours << ":" << minutes << ":" << seconds;
        cout << "AM";
    }
    cout << endl;
}

bool b (int a) {
    if (a>12) {
        return 1;
    }
    else {
        return 0;
    }
}
};


int main()
{
    Time T1, T2, T3;
    T1.ourTime();
    T2.ourTime();
    T3.sumTime(T1, T2);
    T3.showResult();


    return 0;
}
