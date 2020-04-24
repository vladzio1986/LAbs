#include <iostream>

using namespace std;

struct phone
{
    int city_code;
    int telestation_number;
    int subscriber_number;
};

int main()
{
    phone st;
    phone nst;
    st.city_code = 212;
    st.telestation_number = 767;
    st.subscriber_number = 8900;
    cout << "Enter city code: ";
    cin >> nst.city_code;
    cout << endl << "Enter telestation number: ";
    cin >> nst.telestation_number;
    cout << endl << "Enter subscriber number: ";
    cin >> nst.subscriber_number;
    cout << "Static number: " << "(" << st.city_code << ")" << st.telestation_number << "-" << st.subscriber_number << endl;
    cout << "Hand-write number: " << "(" << nst.city_code << ")" << nst.telestation_number << "-" << nst.subscriber_number << endl;
    return 0;
}
