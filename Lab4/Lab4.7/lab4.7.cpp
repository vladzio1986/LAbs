#include <iostream>

using namespace std;

const int N = 3;

enum etype {l, s, m, a, e, r};

struct date
{
    int month;
    int day;
    int year;
};

struct employee
{
    int number;
    double salary;
    date empd;
    etype prof;
};

int main()
{
    employee emp[N];
    char p[N];
    char slash;
    for (int n=0; n<N; n++) {
        cout << "Enter employee number: " << endl;
        cin >> emp[n].number;
        cout << "Enter salary: " << endl;
        cin >> emp[n].salary;
        cout << "Enter proffesion first letter (l, s, m, a, e, r): ";
        cin >> p[n];
        cout << "Enter employing date in 31/12/2002 format: ";
        cin >> emp[n].empd.day >> slash >> emp[n].empd.month >> slash >> emp[n].empd.year;
        if (p[n]=='l'){
            emp[n].prof = l;
        }
        else if (p[n]=='s'){
            emp[n].prof = s;
        }
        else if (p[n]=='m'){
            emp[n].prof = m;
        }
        else if (p[n]=='a'){
            emp[n].prof = a;
        }
        else if (p[n]=='e'){
            emp[n].prof = e;
        }
        else if (p[n]=='r'){
            emp[n].prof = r;
        }
    }
    for (int n=0; n<N; n++) {
        cout << "       EMPLOYEE NUMBER " << emp[n].number << endl;
        cout << "Salary : " << emp[n].salary << endl;
        cout << "Proffesion: ";
        switch(emp[n].prof) {
            case l:
                cout << "laborer" << endl;
                break;
            case s:
                cout << "secretary" << endl;
                break;
            case m:
                cout << "manager" << endl;
                break;
            case a:
                cout << "accountant" << endl;
                break;
            case e:
                cout << "executive" << endl;
                break;
            case r:
                cout << "researcher" << endl;
                break;
        }
        cout << "Employing date: " << emp[n].empd.day << slash << emp[n].empd.month << slash << emp[n].empd.year << endl;
    }
    return 0;
}
