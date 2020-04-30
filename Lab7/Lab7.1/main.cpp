#include <iostream>

using namespace std;
char* reversit ( char* str, int length ){
    char* n = new char[length+1];
    for ( int i = 0; i < length; i++)
        n[i] = str[length - i - 1];
    return n;
}
int main()
{
   cout << reversit("December", 8);
    return 0;
}
