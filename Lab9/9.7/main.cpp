#include <iostream>

using namespace std;

const int N = 5;

struct Pair {
    int x;
    int y;
};

class Stack {
protected:
    int p[N][2];
    int k = 0;
public:
    void output () {
        for (int i=0; i<N; i++) {
        cout << p[i][0] << "  " << p[i][1] << endl;
        }
    }
};

class Stack_in : public Stack {
protected:
    Pair P;
public:
    void input () {
        for (int j=0; j<N; j++) {
            cout << "Enter first and second numbers: ";
            cin >> P.x;
            cin >> P.y;
            p[j][0] = P.x;
            p[j][1] = P.y;
        }
    }
};

int main()
{
    Stack_in g;
    g.input();
    g.output();
    return 0;
}
