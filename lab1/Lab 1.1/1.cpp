#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int n;
cout << "Enter the number:";
cin >> n;
cout << "# | 0     1     2     3     4     5     6     7     8     9" << endl;
cout << "===========================================================" << endl;
for (int i = 0; i <=99; i++)
{
    cout << setw(5)<< i*n << " ";
    if (i%10 == 9)
    cout << endl;
}

return 0;
}
