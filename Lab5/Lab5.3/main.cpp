#include <iostream>

using namespace std;

void zeroSmaller (int &a, int &b) {
    if (a>b) {
        b = 0;
        cout << "First number is bigger than second. Second number = 0" << endl;
    }
    else {
        a = 0;
        cout << "Second number is bigger than first. First number = 0" << endl;
    }
}

int main()
{
    int i;
    int j;
    cout << "Enter first number: "; cin >> i;
    cout << "Enter second number: "; cin >> j;
    zeroSmaller(i, j);
    cout << i << "  " << j;
    return 0;
}
