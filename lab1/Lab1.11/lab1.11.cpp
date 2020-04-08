#include <iostream>

using namespace std;

int main()
{
    int pound[2], shill[2], pence[2], x, i=0, o=0, p=0 ;
    char F ;
    cout << "Enter first Pound, Shillings and Pences" << endl;
    cin >> pound[1] >> shill[1] >> pence[1];
    cout << "Enter operation symbol" << endl;
    cin >> F ;
    switch (F) {
        case '+' :
            cout << "Enter second Pound, Shillings and Pences" << endl;
            cin >> pound[2] >> shill[2] >> pence[2];
            p = pound[1] + pound[2];
            o = shill[1] + shill[2];
            i = pence[1] + pence[2];
            break ;
        case '-' :
            cout << "Enter second Pound, Shillings and Pences" << endl;
            cin >> pound[2] >> shill[2] >> pence[2];
            p = pound[1] - pound[2];
            o = shill[1] - shill[2];
            i = pence[1] - pence[2];
            break ;
        case '*' :
            cout << "Enter real number: " ;
            cin >> x ;
            p = pound[1] * x;
            o = shill[1] * x;
            i = pence[1] * x;
            break ;
        default :
            cout << "ERR";
            return 0 ;
    }
    for (o ; o <= -20; o + 20) {
        o = o + 20;
        p = p - 1;
        }
    for (i ; i <= -5; i+5) {
        i = i + 5 ;
        o = o - 1 ;
        }
    for (i ; i >= 5; i-5) {
            i = i - 5 ;
            o = o + 1 ;
            }
    for (o ; o >= 20; o - 20) {
        o = o - 20 ;
        p = p + 1 ;
        }

        cout << "pounds: " << p << " shill: " << o << " pence: " << i ;
    return 0;
}
