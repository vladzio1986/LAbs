#include <iostream>

using namespace std;

int main()
{
    short x;
    unsigned long long l,fc ;
    do {
    cout << "Enter factoring number: " ;
    cin >> l ;
        if (l != 0) {
            x=l;
            for (fc=l; fc>0; fc--){
                l = l * fc ;}
                l = l / x;
                cout << l << endl ;}
        else {
            return 0;}
        }
    while (x != 0);
        return 0;
}
