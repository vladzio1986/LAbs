#include <iostream>

using namespace std;

int main()
{
    int mon, monn;
    float yr, per;
    cout << "Enter your money: " ;
    cin >> mon ;
    cout << "Enter money what you need: " ;
    cin >> monn ;
    cout << "Enter percent: " ;
    cin >> per ;
    yr = (monn / mon - 1) / (per/100) ;
    cout << yr ;
    return 0;
}
