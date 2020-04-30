#include <iostream>

using namespace std;

const int N = 10;

class Safearay
{
private:
    int arr [N];
public:
    int & operator [] (int n)
    {
        if (n <0 || n>= N)
        {
            cout << "\ nIndex out of bounds";
        }
        return arr [n];
    }
};
int main()
{
    Safearay sa1;

    for (int j = 0; j < N; j++)
        sa1[j] = j*10;
    for (int j = 0; j < N; j++)
    {
        int temp = sa1[j];
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}
