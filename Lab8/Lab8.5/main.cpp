#include <iostream>

using namespace std;
class Fraction {
private:
    int num;
    int denom;
    int whole;

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
    cout << "Numerator: ";      cin >> num;
    cout << "Denominator: ";    cin >> denom;
}
const Fraction operator + (const Fraction& left) {
    Fraction res;
    res.num = left.num*denom + num*left.denom;
    res.denom = left.denom*denom;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
const Fraction operator - (const Fraction& left) {
    Fraction res;
    res.num = left.num*denom - num*left.denom;
    res.denom = left.denom*denom;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
const Fraction operator * (const Fraction& left) {
    Fraction res;
    res.num = left.num*num;
    res.denom = left.denom*denom;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
const Fraction operator / (const Fraction& left ) {
    Fraction res;
    res.num = left.num*denom;
    res.denom = left.denom*num;
    int g = gcd(res.num, res.denom);
    res.num /= g;
    res.denom /= g;
    res.whole = res.num/res.denom;
    res.num -= res.whole*res.denom;
    return res;
}
bool operator == (Fraction f1){
 if ( num * f1.denom != denom * f1.num)
    return false;
 return true;
}
bool operator != (Fraction f1){
 if ( num * f1.denom == denom * f1.num)
    return false;
 return true;
}
void showResult(){
 cout << " Your number is " << whole <<" "<< num <<"/"<< denom;
}

};

int main()
{
    Fraction f1;
    Fraction f2;
    f1.yournumber();
    f2.yournumber();
    Fraction f3 = f1 + f2;
    f3.showResult();
cout << endl;
    f3 = f1 - f2;
    f3.showResult();
cout << endl;
    f3 = f1 * f2;
    f3.showResult();
cout << endl;
    f3 = f1 / f2;
    f3.showResult();
    cout << endl;
    bool b1 = f1 == f2;
    cout << "Equal? " << b1 << endl;
    bool b2 = f1 != f2;
    cout << "Not equal? " << b2 << endl;




    return 0;
}

