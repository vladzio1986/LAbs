#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

class ARR {
private:
    int n[10][10];
    int a;
    int b;
    int yuyu;
public:
    void randarr () {
        srand(time(NULL));
        for (int i=0; i<10; i++) {
            for (int j=0; j<10; j++) {
                n[i][j] = rand() % 100;
            }
        }
    }

    void output () {
        for (int i=0; i<10; i++) {
                cout << endl;
            for (int j=0; j<10; j++) {
                    cout << setw(8) << n[i][j];
            }
        }
    }

    void input () {
        cout << endl << "Enter first: ";
        cin >> a;
        cout << "Enter second: ";
        cin >> b;
    }

    void swaparr () {
        for (int i=0; i<10; i++) {
            yuyu = n[i][a];
            n[i][a] = n[i][b];
            n[i][b] = yuyu;
        }
    }
};

int main()
{
    ARR R;
    R.randarr();
    R.output();
    R.input();
    R.swaparr();
    R.output();
    return 0;
}
