#include <iostream>

using namespace std;

struct Distance
{
    int dist;
};

struct Volume
{
    Distance x;
    Distance y;
    Distance z;
};

int main()
{
    Volume V;
    cout << "Enter x: " << endl;
    cin >> V.x.dist;
    cout << "Enter y: " << endl;
    cin >> V.y.dist;
    cout << "Enter z: " << endl;
    cin >> V.z.dist;
    cout << "The volume is : " << V.x.dist*V.y.dist*V.z.dist;
    return 0;
}
