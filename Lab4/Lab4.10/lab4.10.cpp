#include <iostream>

using namespace std;

struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    Sterling str[3];
    char F;
    int x;
    cout << "Enter first Pound, Shillings and Pences" << endl;
    cin >> str[0].pounds >> str[0].shillings >> str[0].pence;
    cout << "Enter operation symbol" << endl;
    cin >> F ;
    switch (F) {
        case '+' :
            cout << "Enter second Pound, Shillings and Pences" << endl;
            cin >> str[1].pounds >> str[1].shillings >> str[1].pence;
           str[2].pounds= str[0].pounds + str[1].pounds;
           str[2].shillings= str[0].shillings + str[1].shillings;
           str[2].pence= str[0].pence + str[1].pence;
            break ;
        case '-' :
            cout << "Enter second Pound, Shillings and Pences" << endl;
            cin >> str[1].pounds >> str[1].shillings >> str[1].pence;
           str[2].pounds= str[0].pounds - str[1].pounds;
           str[2].shillings= str[0].shillings - str[1].shillings;
           str[2].pence= str[0].pence - str[1].pence;
            break ;
        case '*' :
            cout << "Enter real number: " ;
            cin >> x;
           str[2].pounds = str[0].pounds * x;
           str[2].shillings = str[0].shillings * x;
           str[2].pence = str[0].pence * x;
            break ;
        case '%' :
            cout << "Enter percent:: " ;
            cin >> x;
            str[2].pounds = str[0].pounds * x/100;
            str[2].shillings = str[0].shillings * x/100;
            str[2].pence = str[0].pence * x/100;
            break;
        default :
            cout << "ERR";
            return 0 ;
    }
    for (str[2].pence ; str[2].pence >= 5; str[2].pence-5) {
            str[2].pence = str[2].pence - 5 ;
            str[2].shillings = str[2].shillings + 1 ;
            }
    for (str[2].shillings ; str[2].shillings >= 20; str[2].shillings - 20) {
        str[2].shillings = str[2].shillings - 20 ;
        str[2].pounds = str[2].pounds + 1 ;
        }
        cout << "  pound " << str[2].pounds << " shill " << str[2].shillings << " pence " << str[2].pence ;
    return 0;
}
