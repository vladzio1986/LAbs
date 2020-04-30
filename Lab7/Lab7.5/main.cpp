#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int N = 256;

struct Frac {
    int num;
    int denom;
};

class Fraction {
private:
    Frac F[N];
    double averNum=0;
    double averDenom=0;
public:
    void randArr(){
        srand(time(NULL));
        for(int i=0; i<N; i++) {
            F[i].num = rand()%10;
            F[i].denom = rand()%10;
            cout << F[i].num << "/" << F[i].denom << setw(6);
        }
    }

    void averFrac () {
        for (int j=0; j<N; j++) {
            averNum += F[j].num;
            averDenom += F[j].denom;
        }
        averNum /= N;
        averDenom /=N;
        cout << endl << "Average fraction: " << averNum << "/" << averDenom;
    }
};

int main()
{
    Fraction F;
    F.randArr();
    F.averFrac();
    return 0;
}
