#include <iostream>

using namespace std;

int main()
{
    string tempv ;
    char *F = "F" ;
    char *C = "C" ;
    cout << "Enter F or C " ;
    cin >> tempv ;
    if ( tempv == F ) {
        float tempf ;
        cout << "Enter Farenheit " ;
        cin >> tempf ;
        tempf = (tempf - 32) * 5 / 9 ;
        cout << tempf ;
    }
    else if (tempv == C) {
            float tempc ;
            cout << "Enter Celsium " ;
            cin >> tempc ;
            tempc = tempc * 9 / 5 + 32 ;
            cout << tempc ;
    }
    else {
        cout << "Error" ;
    }


    return 0;
}
