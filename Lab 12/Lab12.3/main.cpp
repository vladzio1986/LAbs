#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream out ("text.txt");
    out.seekg(0, ios::end);
    int sizef = out.tellg();
    out.seekg(0, ios::beg);
    char* buffer=new char[sizef+1]; buffer[sizef+1]=0;
    out.read(buffer,sizef+1);
    cout << buffer << endl;
    cout << "Size of the file: " << sizef << " Bytes";
    out.close();
    return 0;
}
