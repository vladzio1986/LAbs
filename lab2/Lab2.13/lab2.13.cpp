#include <iostream>
#include <iomanip>

using namespace std;

const int N = 100;

int main()
{
    for (int i=2; i<N; i++) {
        for (int j=2; j<i; j++) {
            if (i % j == 0) {
                break;
            }
             if (i == j+1) {
                cout << i << setw(4);
             }
        }
    }
    return 0;
}
