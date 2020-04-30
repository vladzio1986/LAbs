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
void showResult () {
 cout << " Our result: " << hours << ":" << minutes << ":" << seconds;
}
const Time operator + (const  Time& T1 ) {
Time t;
        t.seconds = T1.seconds +seconds;
        t.minutes = T1.minutes +minutes + t.seconds/60;
        t.hours = T1.hours +hours + t.minutes/60;
        t.minutes %= 60;
        t.seconds %= 60;
        return t;
}



};


int main()
{
    Time T1, T2;
    T1.ourTime();
    T2.ourTime();
    Time T3 = T1 + T2;

    T3.showResult();


    return 0;
}
