#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int N = 0;

void CountOfOutputs (int &n) {
    cout << "Outputs: " << n << endl;
    n++;
}

int main()
{
    srand(time(NULL));
    int m = rand()%50 + 10;
    for (int i = 0; i<m; i++) {
        CountOfOutputs(N);
    }
    return 0;
}
