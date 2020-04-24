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
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        b[c] = 0;
        n[c] = rand() % 100 + 1;
        cout << setw(4) << n[c];
    }
    cout << endl;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (n[i] == n[j]) {
                b[i]++;
            }
        }
        cout << setw(4) << b[i];
    }
    return 0;
}
