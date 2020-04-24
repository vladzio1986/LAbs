#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int N = 10;

int main()
{
    int n[N], x, y;
    int*  x1;
    int*  y1;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        n[c] = rand() % 100 + 1;
        cout << setw(4) << n[c];
    }
    x = n[0];
    y = n[0];
    for (int s=0; s<N; s++) {
        if (x>n[s]) {
            x = n[s];
            x1 = &n[s];
        }
        if (y<n[s]) {
            y = n[s];
            y1 = &n[s];
        }
    }
    cout << endl << "The smallest number is: " << x << endl;
    cout << "The biggest number is: " << y << endl;
    *x1 = y;
    *y1 = x;
    for (int c=0; c<N; c++) {
        cout << setw(4) << n[c];
    }
    return 0;
}
