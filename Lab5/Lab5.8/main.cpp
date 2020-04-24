#include <iostream>

using namespace std;

struct Num {
    int i;
    int p;
};

Num Swap (Num &n) {
    int k;
    k = n.i;
    n.i = n.p;
    n.p = k;
    return n;
}

int main()
{
    Num num;
    int l, m;
    num.i = 1;
    num.p = 2;
    cout << num.i << " " << num.p << endl;
    Swap (num);
    cout << num.i << " " << num.p;
    return 0;
}
