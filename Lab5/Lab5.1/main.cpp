#include <iostream>

using namespace std;

double circarea (double r) {
    double S;
    S = (r * r) * 3.14;
    return S;
}

int main()
{
    int R;
    cout << "Enter radius: "; cin >> R;
    cout << "The square of circle: " << circarea(R);
    return 0;
}
