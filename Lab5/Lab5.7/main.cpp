#include <iostream>

using namespace std;

int power(int n, int pow) {
    for(int a=1; a<pow; a++) {
        n *= n;
    }
    return n;
}

int power(long n, int pow) {
    for(int a=1; a<pow; a++) {
        n *= n;
    }
    return n;
}

int power(double n, int pow) {
    for(int a=1; a<pow; a++) {
        n *= n;
    }
    return n;
}

int power(char n, int pow) {
    for(int a=1; a<pow; a++) {
        n *= n;
    }
    return n;
}

int main()
{
    int l = 2;
    int p = 2;
    cout << power(l,p);
    return 0;
}
