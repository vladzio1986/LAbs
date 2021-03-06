#include <iostream>

using namespace std;
class Fraction {
private:
    int num;
    int denom;
    int whole;
    char l = '/';

    static int gcd(int a, int b) {
        return (b == 0)?a:gcd(b, a%b);
    }

public:
    Fraction() {
    num = 0;
    denom = 0;
    whole = 0;
    }

Fraction(int n, int d): num(n), denom(d) {
}
void yournumber(){
    cout << "Enter numerator: ";      cin >> num;
    cout << "Enter denominator: ";    cin >> denom;
}

static Fraction add(Fraction left, Fraction right) {
    Fraction res;
    res.num = left.num*right.denom + right.num*left.denom;
    res.denom = left.denom*right.denom;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
static Fraction subtraction (Fraction left, Fraction right) {
    Fraction res;
    res.num = left.num*right.denom - right.num*left.denom;
    res.denom = left.denom*right.denom;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
static Fraction multiplication (Fraction left, Fraction right) {
    Fraction res;
    res.num = left.num*right.num;
    res.denom = left.denom*right.denom;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
static Fraction division (Fraction left, Fraction right) {
    Fraction res;
    res.num = left.num*right.denom;
    res.denom = left.denom*right.num;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}

friend ostream& operator<< (ostream &out, const Fraction &Frac){
    out << " Your number is " << Frac.whole <<" "<< Frac.num <<"/"<< Frac.denom;
    return out;
}

friend istream& operator>> (istream &in, Fraction &Frac) {
    in >> Frac.num >> Frac.l >> Frac.denom;
    return in;
}

void showResult(Fraction A){
 cout << A;
}

};

int main()
{
    char C;
    Fraction f1;
    Fraction f2;
    Fraction f3;
    cin >> f1 >> C >> f2;
    switch (C) {
    case '+':
        f3 = Fraction::add(f1, f2);
        f3.showResult(f3);
        break;
    case '-':
        f3 = Fraction::subtraction(f1, f2);
        f3.showResult(f3);
        break;
    case '*':
        f3 = Fraction::multiplication(f1, f2);
        f3.showResult(f3);
        break;
    case '/':
        f3 = Fraction::division(f1, f2);
        f3.showResult(f3);
        break;
    default:
        cout << "ERR";
    }
    return 0;
}
