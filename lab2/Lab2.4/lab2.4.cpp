#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int N = 20;
int main()
{
    int n[N], p=0;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        n[c] = rand() % 50 + 1;
        cout << n[c] << " ";
        if (n[c] == n[c-1]){
            p++;
        }
    }
    cout << endl << "Count of pairs: " << p;
    return 0;
}
