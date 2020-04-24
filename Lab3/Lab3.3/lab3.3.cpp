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
    int x;
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        n[i] = rand() % 100 + 1;
    }
    output(n);
    cout << endl;
    for(int i = 1; i < N; i++) {
		for(int j = 0; j < N-i; j++) {
			if(n[j] > n[j+1]) {
				x = n[j];
				n[j] = n[j+1];
				n[j+1] = x;
			}
		}
	}
	output(n);
    return 0;
}
