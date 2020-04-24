#include <iostream>

using namespace std;

const int N = 10;
const int P = 13;

int main()
{
    int n[N];
    n[0] = 8 + P;
    n[1] = n[0] + P;
    for (int i=2; i<N; i++) {
        n[i] = n[i-1] + n[i-2];
    }
    for (int i=0; i<N; i++) {
        cout << n[i] << "   ";
    }
    return 0;
}
