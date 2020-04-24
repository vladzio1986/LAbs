#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

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
    int m = 0;
    int b = 0;
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        n[i] = rand() % 100 + 1;
    }
    output(n);
    cout << endl;
    for (int i = 0; i < N; i++) {
		m = i;
		for (int j = i + 1; j < N; j++)
			m = ( n[j] < n[m] ) ? j : m;
        if (i != m) {
            b = n[i];
            n[i] = n[m];
            n[m] = b;
        }
    }
    output(n);
    return 0;
}
