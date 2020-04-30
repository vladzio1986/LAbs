#include <iostream>
#include <cmath>

using namespace std;

class Polar {
private:
    double radius;
    double angle;
    double x;
    double y;
public:
    Polar(double radius, double angle): radius(radius), angle(angle){}
    Polar(): radius(0), angle(0){}

    Polar friend operator+ (const Polar& a, const Polar& b) {
        Polar p;
        p.x = a.x + b.x;
        p.y = a.y + b.y;
        return p;
    }

    void in (Polar& k) {
        k.x = k.radius * cos(k.angle);
        k.y = k.radius * sin(k.angle);
    }

    void out (Polar& l) {
        l.radius = sqrt((x*x)+(y*y));
        l.angle = atan(y/x);
    }

    void input () {
        cout << "Enter radius and angle of polar coordinates: ";
        cin >> radius >> angle;
    }

    void output () {
    cout << "Decart coordinates:  x: " << x << "  y: " << y << endl;
    cout << "Polar coordinates:  angle: " << angle << "  radius: " << radius << endl;
    }
};

int main()
{
    Polar p1;
    Polar p2;
    Polar p3;
    p1.input();
    p2.input();
    p1.in(p1);
    p2.in(p2);
    p3 = p1+p2;
    p3.out(p3);
    p1.output();
    p2.output();
    cout << endl << "Sum" << endl;
    p3.output();
    return 0;
}

