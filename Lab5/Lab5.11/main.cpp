#include <iostream>

using namespace std;

struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

void input (Sterling &s1, Sterling &s2) {
    cout << "Enter first Pound, Shillings and Pences" << endl;
    cin >> s1.pounds >> s1.shillings >> s1.pence;
    cout << "Enter second Pound, Shillings and Pences" << endl;
    cin >> s2.pounds >> s2.shillings >> s2.pence;
}

Sterling sum (Sterling &m1, Sterling &m2) {
    m1.pence += m2.pence;
    m1.pounds += m2.pounds;
    m1.shillings += m2.shillings;
    for (m1.pence ; m1.pence >= 5; m1.pence-5) {
            m1.pence = m1.pence - 5 ;
            m1.shillings = m1.shillings + 1 ;
            }
    for (m1.shillings ; m1.shillings >= 20; m1.shillings - 20) {
        m1.shillings = m1.shillings - 20 ;
        m1.pounds = m1.pounds + 1 ;
        }
    return m1;
}

void output (Sterling &c1) {
    cout << c1.shillings << " Shillings, " << c1.pounds << " Pounds, " << c1.pence << " Pence, " << endl;
}

int main()
{
    Sterling str1;
    Sterling str2;

    input (str1, str2);
    sum (str1, str2);
    output (str1);

   return 0;
}
