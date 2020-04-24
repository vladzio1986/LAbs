#include <iostream>

using namespace std;

struct Fraction {
    int num;
    int den;
};

Fraction f3;

Fraction fadd (Fraction f1, Fraction f2) {
    f3.num =  f1.num*f2.den + f2.num*f1.den ;
    f3.den = f1.den * f2.den ;
    return f3;
}

Fraction fsub (Fraction f1, Fraction f2) {
    f3.num =  f1.num*f2.den - f2.num*f1.den ;
    f3.den = f1.den * f2.den ;
    return f3;
}

Fraction fmul (Fraction f1, Fraction f2) {
    f3.num = f1.num * f2.num;
    f3.den = f1.den * f2.den;
    return f3;
}

Fraction fdiv (Fraction f1, Fraction f2) {
    f3.num = f1.num * f2.den;
    f3.den = f1.den * f2.num;
    return f3;
}

void simpl (Fraction &S) {
    int a;
    int b;
    if (S.num != 0){
    a = S.num;
    b = S.den;
    while (a != b) {
        if(a > b) {
            a = a - b;
        }
        else b = b - a;
    }
    S.num = S.num / a;
    S.den = S.den / a;
    }
}

int main() {
    Fraction p1;
    Fraction p2;
    Fraction p3;
    char F;
    cout << "Enter first numerator: ";      cin >> p1.num;
    cout << "Enter first denominator: ";    cin >> p1.den;
    cout << "Enter operation symbol: ";     cin >> F;
    cout << "Enter second numerator: ";     cin >> p2.num;
    cout << "Enter second denominator: ";   cin >> p2.den;
    switch (F) {
        case '+' :
            fadd (p1, p2);
            break;
        case '-' :
            fsub (p1, p2);
            break;
        case '*' :
            fmul (p1, p2);
            break;
        case '/' :
            fdiv (p1, p2);
            break;
        default:
            cout << "Error" << endl ;
    }
    simpl (f3);
    cout << f3.num << "/" << f3.den;
    return 0;
}
