#include <iostream>

using namespace std;

enum etype {l, s, m, a, e, r};

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        void getdate() {
            cout << "Enter day, month and year of recruitment: ";
            cin >> day;
            cin >> month;
            cin >> year;
        }
        void showdate () {
            cout << "Day of recruitment: " << day << "/" << month << "/" << year << endl;
        }
};

class Employee {
    private:
        int number;
        double salary;
        etype prof;
        char p;
    public:
        Employee() {
            number = 0;
            salary = 0;
        }
        Date d;
    void input() {
        cout << "Enter number of employee: ";
        cin >> number;
        cout << "Enter salary of employee: ";
        cin >> salary;
        d.getdate();
        cout << "Enter proffesion first letter (l, s, m, a, e, r): ";
        cin >> p;
        switch (p) {
            case 'l':
                prof = l;
                break;
            case 's':
                prof = s;
                break;
            case 'm':
                prof = m;
                break;
            case 'a':
                prof = a;
                break;
            case 'e':
                prof = e;
                break;
            case 'r':
                prof = r;
                break;
        }
    }
    void output () {
        cout << "Number of employee: " << number << endl;
        cout << "Salary: " << salary << endl;
        d.showdate();
        switch(prof) {
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
        cout << endl;
    }
};

int main()
{
    int N = 3;
    Employee n[N];
    for (int i=0; i<N; i++) {
        n[i].input();
    }
    for (int i=0; i<N; i++) {
        n[i].output();
    }
    return 0;
}
