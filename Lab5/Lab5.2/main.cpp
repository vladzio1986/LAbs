#include <iostream>

using namespace std;

double power_pi (double pi, int pow) {
    double power= pi;
    for (int i=1; i<pow; i++) {
        power *= pi;
    }
    return power;
}

int main()
{
    double p;
    int r;
    cout << "Enter pi: "; cin >> p;
    cout << "Enter power: "; cin >> r;
    cout << "Your number: " << power_pi(p, r);
    return 0;
}
