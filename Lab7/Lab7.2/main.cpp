#include <iostream>

using namespace std;
class employee {
private:
    string name;
    long number;
public:
    Data (string name, long namber){
     this ->name = name;
     this->number = number;
    }
void getdata ( string name, long number ){
    this ->name = name;
    this ->number = number;
}
void putdata (){
    cout << name << " " << number << endl;
}


};
int main()
{
    string s;
    long nn;

    employee e[100];
    for ( int i = 0; i < 100; i++ ){
        cout << "Enter info about employee " << i <<  " : " << endl;
        cout << " Name: "; cin >> s;
        cout << " Number: "; cin >> nn;
        e[i].getdata(s, nn);
        cout << " Info: " << i << ":";
        e[i].putdata();
        cout << endl;

    }


    return 0;
}
