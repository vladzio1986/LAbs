#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int N = 10;
int main()
{
    int n[N], s=0;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        n[c] = rand() % 100 + 1;
        cout << n[c] << setw(4);
    }
    cout << endl;
    for (int c=0; c<N-2; c++) {
        n[c] = n[c+1] + n[c+2];
    }
    for (int c=0; c<N; c++) {
        cout << n[c] << setw(4);
    }
    return 0;
}
