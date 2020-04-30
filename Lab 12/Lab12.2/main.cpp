#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>

using namespace std;

int main()
{
    ifstream out ("text.txt");
    out.seekg(0, ios::end);
    int sizef = out.tellg();
    out.seekg(0, ios::beg);
    char* buffer=new char[sizef+1]; buffer[sizef+1]=0;
    out.read(buffer,sizef+1);
    cout << buffer;
    out.close();
    ofstream log ("file.txt");
    log << buffer;
    log.close();
    delete [] buffer;
    ifstream output ("file.txt");
    output.seekg(0, ios::end);
    int sizer = output.tellg();
    output.seekg(0, ios::beg);
    char* buff=new char[sizer+1]; buff[sizer+1]=0;
    output.read(buff,sizer+1);
    cout << endl << buff;
    delete [] buff;
    out.close();
    return 0;
}
