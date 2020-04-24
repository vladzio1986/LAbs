#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int s;
    for (int i=2; i<10000; i++) {
        s = 0;
        for (int j=1; j < i; j++)
            if (i%j == 0)
                s += j;
        if (s == i)
            cout << i << " ";
    }
    return 0;
}
