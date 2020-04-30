#include <iostream>

using namespace std;
class Money {
private:
 int grn;
 int cop;
public:
    Money (){
    grn = 0;
    cop = 0;
    }
Money ( int g, int c){
    grn = g;
    cop = c;
}
void putIn (){
 cout << " Enter your money: " ;
 cin >> grn;
 cin >> cop;
}
void showResult (){
cout << " Result: "<< grn << " UAH " << cop;
}
Money operator + ( Money& m ){
 Money mn;
 mn.cop = m.cop + cop;
 mn.grn = m.grn + grn + mn.cop/100;
 mn.cop %= 100;
 return mn;
 }
};

int main()
{
   Money m1; m1.putIn();
   Money m2; m2.putIn();
   Money m3 = m1 + m2;
   m3.showResult();
}
