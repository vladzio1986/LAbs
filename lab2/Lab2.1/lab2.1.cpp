#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int N = 10;
int main()
{
    int n[N], s=0;
    srand(time(NULL));
    for (int c=0; c<N; c++) {
        n[c] = rand() % 100 + 1;
        cout << n[c] << endl;
        if (n[c]%2==0 && n[c]>9){
            s += n[c];
        }
    }
    cout << "Sum is:" << s << endl;
    return 0;
}
