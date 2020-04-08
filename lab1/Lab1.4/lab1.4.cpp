#include <iostream>

using namespace std;

int main()
{
    float x, y ;
    char g ;
    cout << "Enter first number: " ;
    cin >> x ;
    cout << "Enter operation symbol: " ;
    cin >> g ;
    cout << "Enter second number: " ;
    cin >> y ;
    switch (g){
        case '+' :
           x = x + y ;
           cout << x ;
           break ;
        case '-' :
            x = x - y ;
            cout << x ;
            break ;
        case '*' :
            x = x * y ;
            cout << x ;
            break ;
        case '/' :
            if (y == 0) {
                cout << "Err: divison to zero" << endl ;
            }
            x = x / y ;
            cout << x ;
            break ;
        default :
            cout << "Error" << endl ;
    }
    return 0;
}
