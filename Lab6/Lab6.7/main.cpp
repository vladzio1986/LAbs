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
void enterCoordinates (){
        cout << " Enter your coordinate!";
        cout << " Degree: ";
        cin >> degree;
        cout << " Minutes: ";
        cin >> minutes;
        cout << " Direction (W,N,S,E): ";
        cin >> direction;
}
void showResult (){
        cout << degree << "\xF8" << minutes << "'" << direction << endl;
}
};

int main(){
    Angle A;
    Angle B;
    A.enterCoordinates();
    B.enterCoordinates();
    A.showResult();
    B.showResult();

    return 0;
}
