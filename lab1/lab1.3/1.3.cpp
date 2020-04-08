#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x = 0;
    int n = 0 ;
    cout << "Enter length of your number: ";
    cin >> n ;
    cout << "Enter the number:" << endl;
    for (int i=0;i<n;i++){
        char a = getche();
        x = x * 10 + (a - a) ;
    }
    cout << x ;
    return 0;
}
