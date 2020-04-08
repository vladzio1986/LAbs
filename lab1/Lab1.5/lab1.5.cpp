#include <iostream>

using namespace std;

int main()
{
    const int x = 20 ;
    for (int n=0; n<x; n++ ){
        for (int sp=x; sp>n; sp-- ){
            cout << " " ;
        }
        for (int lt=0; lt<2*n-1; lt++){
            cout << "X" ;
        }
        cout << endl ;
    }
    return 0;
}
