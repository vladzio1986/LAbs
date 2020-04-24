#include <iostream>

using namespace std;

struct Distance {
    int M;
    int CM;
};

Distance GetBigger (Distance a, Distance b) {
    int suma = a.M*100 + a.CM;
    int sumb = b.M*100 + b.CM;
    if (suma > sumb) {
        a.M = suma/100;
        a.CM = suma%100;
        return a;
    }
    else {
        b.M = sumb/100;
        b.CM = sumb%100;
        return b;
    }
}

int main()
{
    Distance d1;
    Distance d2;
    Distance d;
    cout << "Enter first meters: " ;
    cin >> d1.M;
    cout << "Enter first centimeters: " ;
    cin >> d1.CM;
    cout << "Enter second meters: " ;
    cin >> d2.M;
    cout << "Enter second centimeters: " ;
    cin >> d2.CM;
    d = GetBigger(d1, d2);
    cout << d.M << " meters  " << d.CM << "centimeters";
    return 0;
}
