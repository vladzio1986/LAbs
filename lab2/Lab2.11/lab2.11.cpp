#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int N = 10;
int main()
{
    int n[N], x;
    srand(time(NULL));
    for (int c=0; c<N-1; c++) {
        n[c] = rand() % 100 + 1;
        cout << n[c] << setw(4);
    }
    cout << endl << "Enter your number: ";
    cin >> n[N-1];
    cout << endl;
    for(int i = 1; i < N; ++i) {
		for(int r = 0; r < N-i; r++) {
			if(n[r] < n[r+1]) {
				x = n[r];
				n[r] = n[r+1];
				n[r+1] = x;
			}
		}
	}
    for (int c=0; c<N; c++) {
        cout << n[c] << setw(4);
    }
    return 0;
}
