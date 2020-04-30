#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;


class Money {
private:
    string mon;
    char monn[3] = "";
    long int m;
    int p;
    int n;
public:
    void input() {
        cout << "Enter money:\n";
        cin >> mon;
    }
    long double mstold(long double &k) {
        m = 0;
        int point = mon.find(',');
        p = mon.length();
        m = stoi(mon);
        monn[0] = mon[point+1];
        monn[1] = mon[point+2];
        n = atoi(monn);
        if ((double)n/10 > 1) {
        k = m + (double)n/100;
        }
        else {
            k = m + (double)n/10;
        }
        return k;
    }
};

int main()
{
    long double M;
    Money P;
    P.input();
    P.mstold(M);
    cout << M;
    return 0;
}
