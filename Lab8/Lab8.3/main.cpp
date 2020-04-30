#include <iostream>

using namespace std;
class Int {
private:
    int i;
    char c;
public:
    Int( int i1){
        i = i1;
    }

    void setInt( int n) {
        i = n;
    }

    void input (Int &a, Int &b, Int &l) {
        cout << "Enter first number: ";
        cin >> a.i;
        cout << "Enter operand: ";
        cin >> l.c;
        cout << "Enter second number: ";
        cin >> b.i;
    }

    void print(Int &a, Int &b, Int &l){
        switch(c) {
            case '+':
                l = a + b;
                break;
            case '-':
                l = a - b;
                break;
            case '*':
                l = a * b;
                break;
            case '/':
                l = a / b;
                break;
            default:
                cout << "ERR";
        }
        cout << l.i;
    }

    Int operator + ( Int& i2 ){
        return Int( this->i + i2.i);
    }
    Int operator - ( Int& i2 ){
        return Int( this->i - i2.i);
    }
    Int operator * ( Int& i2 ){
        return Int( this->i * i2.i);
    }
    Int operator / ( Int& i2 ){
        return Int( this->i / i2.i);
    }
};

int main()
{
    Int Int1(0);
    Int Int2(0);
    Int Int3(0);
    Int3.input(Int1, Int2, Int3);
    Int3.print(Int1, Int2, Int3);
    return 0;
}
