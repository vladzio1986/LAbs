#include <iostream>

using namespace std;

const int N = 2;

struct Dist {
    int a;
    int b;
};

class Distance {
    private:
        Dist M[N];
        double AverA=0;
        double AverB=0;
    public:
        void input(int &p, int &n) {
            cout << "Enter first element: ";
            cin >> p;
            cout << "Enter second element: ";
            cin >> n;
        }

    void DistArr() {
        for (int i=0; i<N; i++) {
            input(M[i].a, M[i].b);
        }
    }

    void Average() {
        for(int j=0; j<N; j++) {
            AverA += M[j].a;
            AverB += M[j].b;
        }
        AverA /= N;
        AverB /= N;
    }
    void output () {
        cout << "Your average distance: " << AverA << "   " << AverB;
    }
};

int main()
{
    Distance D;
    D.DistArr();
    D.Average();
    D.output();
    return 0;
}
