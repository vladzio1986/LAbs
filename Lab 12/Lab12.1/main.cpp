#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int N = 2;

ofstream log ("file.txt");

class Distance {
    public:
    int DistA;
    int DistB;
    void input () {
        cout << "First and second elements: ";
        cin >> DistA >> DistB;
    }
};

int main()
{
    Distance D[N];
    for (int i=0; i<N; i++) {
    D[i].input();
    log << "First: " << D[i].DistA << "   Second: " << D[i].DistB << endl;
    }
    log.close();
    ifstream out ("file.txt");
    out.seekg(0, ios::end);
    int sizef = out.tellg();
    out.seekg(0, ios::beg);
    char* buffer=new char[sizef+1]; buffer[sizef+1]=0;
    out.read(buffer,sizef+1);
    cout << buffer;
    delete [] buffer;
    out.close();
    return 0;
}
