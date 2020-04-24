#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int N = 30;
int main()
{
    int n[N];
    int b[N];
    int k;
    short e;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        b[c] = 0;
        n[c] = rand() % 100 + 1;
        cout << n[c] << setw(4);
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (n[i] == n[j]) {
                b[i]++;
            }
        }
    }
    k = b[0];
    for (int p=0; p<N; p++) {
        if (k < b[p]) {
            k = b[p];
            e = p;
        }
    }
    if (e == 109) {
        e = 0;
    }
    cout << endl << "The most common number is: " << n[e] << " with number of: " << k ;
    return 0;
}
