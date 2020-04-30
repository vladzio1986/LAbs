#include <iostream>

using namespace std;

class Number {
private:
    int number;

public:
    static int next_number;
    Number(){

    number = next_number++;

    }
void showResult () {
    cout << number << endl;
}

};
int Number::next_number = 1
;

int main()
{ Number n, z, a, b;
    n.showResult();
    z.showResult();
    a.showResult();
    b.showResult();
    return 0;
}
