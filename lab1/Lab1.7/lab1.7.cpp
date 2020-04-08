#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mon, x;
    float yr, per;
    cout << "Enter your money: " ;
    cin >> mon ;
    cout << "Enter years: " ;
    cin >> yr ;
    cout << "Enter percent: " ;
    cin >> per ;
    x = (1 + per/100);
    mon = pow (mon * x, yr);
    cout << mon ;
    return 0;
}
