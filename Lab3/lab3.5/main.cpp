#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

const int N = 40;

void output (int p[N]) {
    for (int i=0; i<N; i++) {
    cout << setw(5) << p[i];
    }
}

bool isPrime(int n) {
    int d = 2;
    while (d < n && n % d != 0)
        d++;
    return !(d < n);
}

void sorting (int l[N]) {
    int x;
    for (int i = 0; i < N-15; i++) {
        for (int j = 2; j<N-15; j++) {
            if (isPrime(l[i])) {
                if (isPrime(l[j])) {
                    if (l[i] < l[j]) {
                        x = l[i];
                        l[i] = l[j];
                        l[j] = x;
                        }
                    }
                }
            }
        }
    }

int main()
{
    int n[N];
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        n[i] = rand() % 900 + 100;
    }

    n[10] = 5;
    n[11] = 11;
    n[12] = 7;

    output(n);
    sorting(n);
    cout << endl;
    cout << endl;
    output(n);
    return 0;
}
