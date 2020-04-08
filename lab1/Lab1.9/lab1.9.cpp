#include <iostream>

using namespace std;

int main()
{
    short n=6, m=4, nm;
    unsigned long long l,fc ;
    nm = (n-m);
    cout << "Factorial for " << n << " is: ";
        l=n;
        for (fc=l; fc>0; fc--){
            l = l * fc ;}
            n = l / n;
            cout << n << endl ;
        cout << "Factorial for " << m << " is: ";
        l=m;
        for (fc=l; fc>0; fc--){
            l = l * fc ;}
            m = l / m;
            cout << m << endl ;
            cout << "Factorial for " << nm << " is: ";
            l = nm;
        for (fc=l; fc>0; fc--){
            l = l * fc ;}
            nm = l / nm;
            cout << nm << endl ;
        cout << "The answer is: " << n/(m*nm);
    return 0;
}
