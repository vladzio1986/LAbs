#include <iostream>

using namespace std;

struct sterling {
    int pounds;
    int shillings;
    int pence;
};

class Mon {
private:
    sterling s;
    double d;
    char i;
public:
    Mon() {
        s.pence = 0;
        s.pounds = 0;
        s.shillings = 0;
        d = 0;
    }
    void input () {
            cout << "Enter d for dollars or s for sterling: ";
            cin >> i;
            switch(i) {
            case 'd':
                cout << "Enter dollars: ";
                cin >> d;
                change(d);
                break;
            case 's':
                cout << "Enter Pound, Shillings and Pences: ";
                cin >> s.pounds >> s.shillings >> s.pence;
                change (s);
                break;
            }
    }

    void change (sterling &m) {
        for (m.pounds; m.pounds>0; m.pounds--) {
            d += 50;
        }
        for (m.shillings; m.shillings>0; m.shillings--) {
            d += 2.5;
        }
        for (m.pence; m.pence>0; m.pence--) {
            d += 0.5;
        }
    }

    void change (double &p) {
        for (p; p>0; p = p-0.5) {
            s.pence++;
        }
        for (s.pence ; s.pence >= 5; s.pence-5) {
            s.pence = s.pence - 5 ;
            s.shillings = s.shillings + 1 ;
            }
    for (s.shillings ; s.shillings >= 20; s.shillings - 20) {
        s.shillings = s.shillings - 20 ;
        s.pounds = s.pounds + 1 ;
        }
    }

    void output () {
        if (i == 'd') {
            cout << "Pounds: " << s.pounds << endl << "Shillings: " << s.shillings << endl << "Pences: " << s.pence;
        }
        else if (i == 's') {
            cout << d;
        }
    }
};

int main()
{
    Mon M;
    M.input();
    M.output();
    return 0;
}
