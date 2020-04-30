#include <iostream>

using namespace std;

class  Angle {
private:
    int degree;
    double minutes;
    char direction;
public:
    Angle (){
        degree = 0;
        minutes = 0;
        direction = 0;
    }
void enterCoordinates (int &x){
        cout << " Degree: ";
        cin >> degree;
        cout << " Minutes: ";
        cin >> minutes;
        if (x % 2 == 1) {
            cout << " Direction (W,E): ";
            x++;
        }
        else {
            cout << " Direction (N,S): ";
            x = 1;
        }
        cin >> direction;
}
void showResult (){
        cout << degree << "\xF8" << minutes << "'" << direction << endl;
}
};

class Ship {
private:
    int number;
    int n = 1;
public:
    Angle A;
    Angle B;
    static int next_number;
    Ship(){
        number = next_number++;
    }

void Coord () {
    cout << "Atitude:" << endl;
    A.enterCoordinates(n);
    cout << "Longitude:" << endl;
    B.enterCoordinates(n);
    cout << endl;
}

void showResult (){

        cout << "Your number is:" << number << " Coordinates: " << endl;
        A.showResult();
        B.showResult();
        cout << endl;
}
};
int Ship::next_number = 1;

int main()
{
     Ship A, A1, A2;
    A.Coord();
    A1.Coord();
    A2.Coord();
    A.showResult();
    A1.showResult();
    A2.showResult();

    return 0;
}
