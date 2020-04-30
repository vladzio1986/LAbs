#include <iostream>

using namespace std;

class A {
public:
    void show() {
        cout << "A";
    }
};

class B : public A {
public:
    void show() {
        cout << "B";
    }

    void showa() {
        A :: show();
    }
};

class C : public A {
public:
    void show() {
        cout << "C";
    }
};

class D : public B, public C {
public:
    void show() {
        B :: showa();
        B :: show();
        C :: show();
    }
};

int main()
{
    D d;
    d.show();
    return 0;
}
