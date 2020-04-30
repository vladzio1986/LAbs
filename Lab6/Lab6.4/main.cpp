#include <iostream>

using namespace std;
class Employee {
private:
    int number;
    double salary;
public:
    Employee(){
        number = 0;
        salary = 0;
    }
void outputData () {
    cout << " Enter your number: ";
    cin >> number;
    cout << " Enter your salary: ";
    cin >> salary;
}
void showResult (){
    cout << " Result: " << number << " Salary: " << salary << endl;
}
};

int main()
{
    Employee E1,E2,E3;
    E1.outputData();
    E2.outputData();
    E3.outputData();
    E1.showResult();
    E2.showResult();
    E3.showResult();
    return 0;
}
