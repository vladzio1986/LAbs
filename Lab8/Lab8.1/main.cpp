#include <iostream>

using namespace std;
class Distance {
public:
    int meters;
    Distance ( int met ){
         meters = met;
     }
     void check (){

     }
     void display (){
     cout << "Distance: "<< " " << meters << endl;
     }
};
 Distance operator- ( Distance& c1,  Distance& c2){
return Distance(c1.meters - c2.meters);
}

int main()
{ Distance c1(20);
 Distance c2(50);
 Distance c3 = c1 - c2;
 c3.display();
    return 0;
}
