#include <iostream>
#include "../Header/Frac.h"

using namespace std;

Frac::simpl (int a, int b) {
    while (a != b) {
        if(a > b) {
            a = a - b;
        }
        else b = b - a;
    }
    return a;
}


void input () {
    cout << "Enter denominator: ";
    cin >>Frac::den;
}

void output (Frac::den) {

}
