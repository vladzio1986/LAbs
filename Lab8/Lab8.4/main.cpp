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
const Time& operator ++ (int)  {
 seconds++;
 minutes++;
 hours++;
 minutes = minutes + seconds/60;
 hours = hours + minutes/60;
 minutes %= 60;
 seconds %= 60;
 return *this;
}
const Time& operator -- (int)  {
 seconds--;
 minutes--;
 hours--;
 minutes = minutes + seconds/60;
 hours = hours + minutes/60;
 minutes %= 60;
 seconds %= 60;
 return *this;
}
};


int main()
{
    char l;
    Time T1, T2;
    T1.ourTime();
    cout << "+ or - ? : ";
    cin >> l;
    switch (l) {
    case '+':
        T2 = T1++;
        T2.showResult();
        break;
    case '-':
        T2 = T1--;
        T2.showResult();
        break;
    default:
        cout << "ERR";
    }
    return 0;
}
