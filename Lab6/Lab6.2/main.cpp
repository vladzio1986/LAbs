#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <conio.h>
#include <windows.h>


using namespace std;
const unsigned int n=15;
class ToolBooth{
private:
    unsigned int cars;
    double sum;
public:
    ToolBooth(){
        cars = 0;
        sum = 0;
    }
    void payingCar() {
            cars++;
            sum += 0.5;
    }
    void nopayCar(){
            cars++;
    }
    void display () {
            cout << "Total cars:" << cars << endl;
            cout << "The amount of money:" << sum << endl;
    }

};
int main()
{
    char c;
    ToolBooth hhh;
    cout << " Are you a contract driver? " << endl;
    cout << " If you are a contract driver click a" << endl;
    cout << " If you are not contract driver click b" << endl;
   do {
    c = getch();
    if ( c == 'a' ) {
        hhh.payingCar();
        cout << "Car payed" << endl;
    }
    else if (c == 'b') {
        hhh.nopayCar();
        cout << "Car not payed" << endl;
    }
    else {
        cout << " Write correct letter!" << endl;
    }
    }
   while (c != VK_ESCAPE);

    hhh.display();

    return 0;
}
