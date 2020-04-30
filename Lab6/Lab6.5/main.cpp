#include <iostream>

using namespace std;
class Date {
private:
    int month;
    int date;
    int year;
public:
    Data(){
    month = 0;
    date = 0;
    year = 0;
    }
void getdate () {
    cout << " Enter day: "; cin >> date;
    cout << " Enter month : "; cin >> month;
    cout << " Enter year : "; cin >> year;
}
void showdate () {
    cout << " Date: " << date << "/" << month << "/" <<year ;
}

};

int main()
{ Date d;
    d.getdate();
    d.showdate();

    return 0;
}
