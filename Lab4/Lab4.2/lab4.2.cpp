#include <iostream>

using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point p;
    point o;
    point i;
    cout << "Enter first point coordinates: " << endl;
    cin >> p.x >> p.y;
    cout << "Enter second point coordinates: " << endl;
    cin >> o.x >> o.y;
    i.x = p.x + o.x;
    i.y = p.y + o.y;
    cout << "Sum: " << "(" << i.x << ";" << i.y << ")";
    return 0;
}
