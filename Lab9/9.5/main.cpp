#include <iostream>

using namespace std;

class Counter {
protected:
    int number;
public:
    Counter (){
        number = 0;
    }
    Counter ( int n){
        number = n;
    }
 void puton ( ){

    cout << " Enter number: " << endl;
    cin >> number;
}
void showResult () {
 cout << " Our result: " << number;
}
const Counter& operator ++ (int)  {
 number++;
 return *this;
}
const Counter& operator -- (int)  {
 number--;
 return *this;
}
};
class Counter2 : public Counter{
public:
    Counter2 () : Counter () {}
    Counter2(int i) : Counter(i){}
    Counter2& operator -- (int){
    number--;
    return *this;
    }
    void puton() {
    Counter :: puton();
    cout << " Enter number: " << endl;
    cin >> number;
}

};


int main()
{
   Counter c1,c2;
    c1.puton();
    c2 = c1++;
    c2.showResult();
    cout<< endl;
    Counter2 c3, c4(90);
    c3 = c4--;
    c4.showResult();

    return 0;
}
