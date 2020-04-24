#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N = 10;

int main()
{
    int n[N];
    int comp = 0;
    int op = 0;
    cout << "Sorting by selection:" << endl;
    int m = 0;
    int b = 0;
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        n[i] = rand() % 100 + 1;
        cout << setw(5) << n[i];
    }
    cout << endl;
    for (int i=0; i<N; i++) {
        m = i;
        for (int j=i+1; j<N; j++)
            m = ( n[j] < n[m] ) ? j : m;
            comp++;
        if (i != m) {
            b = n[i];
            n[i] = n[m];
            n[m] = b;
            op++;
        }
    }
    for (int i=0; i<N; i++) {
        cout << setw(5) << n[i];
    }
    cout << endl << "Comparsions: " << comp << endl << "Operations: " << op;
    cout << endl;
    //
    comp = 0;
    op = 0;
    cout << "Sorting by insertion:" << endl;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        n[c] = rand() % 100 + 1;
        cout << setw(5) << n[c];
    }
    cout << endl;
    for(int i=1; i<N; i++) {
        for(int j=i; j>0 && n[j-1]>n[j]; j--) {
            comp++;
            op++;
            b = n[j-1];
            n[j-1] = n[j];
            n[j] = b;
        }
    }
    for (int i=0; i<N; i++) {
        cout << setw(5) << n[i];
    }
    cout << endl << "Comparsions: " << comp << endl << "Operations: " << op;
    cout << endl;
    //
    comp = 0;
    op = 0;
    cout << "Bubble sorting:" << endl;
    int x;
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        n[i] = rand() % 100 + 1;
        cout << setw(5) << n[i];
    }
    cout << endl;
    for(int i = 1; i < N; i++) {
		for(int j = 0; j < N-i; j++) {
            comp++;
			if(n[j] > n[j+1]) {
				x = n[j];
				n[j] = n[j+1];
				n[j+1] = x;
                op++;
			}
		}
	}
	for (int i=0; i<N; i++) {
        cout << setw(5) << n[i];
	}
	cout << endl << "Comparsions: " << comp << endl << "Operations: " << op;
    return 0;
}
