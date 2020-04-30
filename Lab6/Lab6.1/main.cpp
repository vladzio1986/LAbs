#include <iostream>

class Int {
private:
    int i;
public:
    Int () {
        i=0;
    }
    Int( int i1){
        i = i1;
    }
    Int add ( Int i2, Int i3 ){
        Int t;
        t.i = i2.i + i3.i;
        return t;
    }
    void setInt( int n) {
        i = n;
    }
    void print(){
        std::cout << i << std::endl;
    }
};
using namespace std;

int main()
{

    Int Int1(8);
    Int Int2(25);
    Int Int3;

    Int1.print();
    Int2.print();
    Int3.print();
    Int3 =  Int3.add(Int1, Int2);
    Int3.print();

    return 0;
}
