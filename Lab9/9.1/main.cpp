#include <iostream>
#include <string>

using namespace std;
class Publication {
protected:
    string name;
    double price;
public:
    Publication (){
        price = 0;
        name = "";
    }
    Publication ( double p, string s){
    price = p;
    name = s;
    }
void put_data (){
    cout << endl << " Enter name and price:";
    cin >> name;
    cin >> price;
}
void show_data () {
    cout << " Info!\n "<< " The name: " << name << " The price: " << price <<" ";
}
};
class Book : public Publication{
protected:
    int pages;
public:
    Book () : Publication () {
        pages = 0;
    }
    Book (double p, string s, int pages ) : Publication (p, s){
        this->pages = pages;
    }
    void put_data() {
        Publication :: put_data();
        cout << " Enter pages : ";
        cin >> pages;
    }
    void show_data (){
        Publication :: show_data();
        cout << " Pages: " << pages;
    }

};
class Type : public Book {
protected:
    double minutes;
public:
    Type () : Book(){
    minutes = 0;
    }
    Type (double p, string s, int pages, double minutes) : Book ( p, s, pages){
        this ->minutes = minutes;
    }
    void put_data() {
    Book :: put_data();
    cout << " Enter minutes: ";
    cin >> minutes;
    }
    void show_data() {
    Book :: show_data();
    cout << " Minutes: " << minutes;
    }

}
;

int main() {
    Type t;
    t.put_data();
    t.show_data();

    return 0;
}
