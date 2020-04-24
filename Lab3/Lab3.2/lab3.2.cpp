#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N = 10;

void output (int p[N]) {
    for (int i=0; i<N; i++) {
        cout << setw(6) << p[i];
	}
}

int main()
{
    int n[N];
    int b;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        n[c] = rand() % 100 + 1;
    }
    output(n);
    cout << endl;
    for(int i=1; i<N; i++) {
        for(int j=i; j>0 && n[j-1]>n[j]; j--) {
            b = n[j-1];
            n[j-1] = n[j];
            n[j] = b;
        }
    }
    output(n);
    return 0;
}
