#include <iostream>

using namespace std;

enum etype {l, s, m, a, e, r};

int main()
{
    etype prof;
    char f;
    cout << "Enter first letter (l, s, m, a, e, r): " << endl;
    cin >> f;
    if (f=='l'){
        prof = l;
    }
    else if (f=='s'){
        prof = s;
    }
    else if (f=='m'){
        prof = m;
    }
    else if (f=='a'){
        prof = a;
    }
    else if (f=='e'){
        prof = e;
    }
    else if (f=='r'){
        prof = r;
    }
    else {
        cout << "Profession not found";
    }
    switch(prof) {
        case l:
            cout << "laborer";
            break;
        case s:
            cout << "secretary";
            break;
        case m:
            cout << "manager";
            break;
        case a:
            cout << "accountant";
            break;
        case e:
            cout << "executive";
            break;
        case r:
            cout << "researcher";
            break;
    }
    return 0;
}
