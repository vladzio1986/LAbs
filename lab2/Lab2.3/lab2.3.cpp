#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int DIM1 = 10;
const int DIM2 = 2;

int main()
{
     int ary[DIM1][DIM2];
    srand (time(NULL));
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            ary[i][j] = rand() %100;
            if (ary[i][0] %2== 1) {
                ary[i][0]++;
            }
            if (ary[i][0] == 0) {
                ary[i][0]++;
            }
            if (ary[i][1] %2== 0){
                ary[i][1]++;
            }

        }
    }
    for (int i = 0; i < DIM1; i++) {
        if (ary[i][0] < 5) {
            ary[i][0] =5;
            }
    }
        for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            cout << setw(6) << ary[i][j];
        }
        cout << endl;
    }

    return 0;
}
