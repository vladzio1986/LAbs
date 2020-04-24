#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void CountOfOutputs (int &n) {
    cout << "Outputs: " << n << endl;
    n++;
}

int main()
{
    static int p;
    srand(time(NULL));
    int m = rand()%50 + 10;
    for (int i = 0; i<m; i++) {
        CountOfOutputs(p);
    }
    return 0;
}
