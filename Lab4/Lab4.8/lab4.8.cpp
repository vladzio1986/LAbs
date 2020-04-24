#include <iostream>

using namespace std;

struct Fraction {
    int num;
    int denom;
};

int main()
{
    Fraction f[3];
    int a,b;
    char F;
    cout << "Enter first numerator: ";      cin >> f[0].num;
    cout << "Enter first denominator: ";    cin >> f[0].denom;
    cout << "Enter operation symbol: ";     cin >> F;
    cout << "Enter second numerator: ";     cin >> f[1].num;
    cout << "Enter second denominator: ";   cin >> f[1].denom;
    if (f[1].denom != 0){
            switch (F){
                case '+' :
                    f[2].num =  f[0].num*f[1].denom + f[1].num*f[0].denom ;
                    f[2].denom = f[0].denom * f[1].denom ;
                    break ;
                case '-' :
                    f[2].num =  f[0].num*f[1].denom - f[1].num*f[0].denom ;
                    f[2].denom = f[0].denom * f[1].denom ;
                    break ;
                case '*' :
                    f[2].num = f[0].num * f[1].num;
                    f[2].denom = f[0].denom * f[1].denom;
                    break ;
                case '/' :
                    f[2].num = f[0].num * f[1].denom;
                    f[2].denom = f[0].denom * f[1].num;
                    break ;
                default :
                    cout << "Error" << endl ;
                }
        }
    else {
        f[2].num = f[0].num;
        f[2].denom = f[0].denom;
    }
    if (f[2].num != 0){
    a = f[2].num;
    b = f[2].denom;
    while (a != b) {
        if(a > b) {
            a = a - b;
        }
        else b = b - a;
    }
    f[2].num = f[2].num / a;
    f[2].denom = f[2].denom / a;
    cout << "Your number is: " << f[2].num << "/" << f[2].denom << endl ;}
    else {
        cout << "Your number is: 0" << endl;
    }
    return 0;
}
