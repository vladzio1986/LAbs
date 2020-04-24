#include <iostream>

using namespace std;

const int N = 5;

int main()
{
    int n[N] = {1,2,3,5,10};
    int p=0;
    for (int i=0; i<N; i++) {
            cout << n[i] << " ";
        if (n[i] < n[i+1]) {
            p++;
        }
    }
    if (p == N-1) {
        cout << endl << "YES";
    }
    else {
        cout << endl << "NO";
    }
    return 0;
}
