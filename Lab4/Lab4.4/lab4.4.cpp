#include <iostream>

using namespace std;

struct employee
{
    int number;
    double salary;
};

int main()
{
    employee emp[3];
    for (int n=0; n<3; n++) {
        cout << "Enter employee number: " << endl;
        cin >> emp[n].number;
        cout << "Enter salary: " << endl;
        cin >> emp[n].salary;
    }
    for (int n=0; n<3; n++) {
        cout << "Employee number: " << emp[n].number << endl;
        cout << "Salary : " << emp[n].salary << endl;
    }
    return 0;
}
