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
    cout << " Enter name and price:";
    cin >> name;
    cin >> price;
}
void show_data () {
    cout << " Info!\n "<< " The name: " << name << " The price: " << price <<" ";
}
};

class Sales{
protected:
    enum {MONTHS = 3};
    float salesArr [MONTHS];
public:
    void put_data ();
    void show_data ();
};

void Sales :: put_data (){
    cout << "Enter sales for 3 months \n";
    for (int j = 0; j < MONTHS; j++)
    {
            cout << "Month" << j + 1 << ":";
                cin >> salesArr [j];
    }
}

void Sales :: show_data (){
    for (int j = 0; j < MONTHS; j++)
    {
        cout << "\ n Sales for month" << j + 1 << ":" << salesArr [j];
    }
}

class Book : public Publication, public Sales{
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
        Sales :: put_data();
    }
    void show_data (){
        Publication :: show_data();
        cout << " Pages: " << pages;
        Sales :: show_data();
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
    //Sales :: put_data();
    }
    void show_data() {
    Book :: show_data();
    cout << " Minutes: " << minutes;
   // Sales :: show_data();
    }

}
;

class Disk : public Type{
protected:
    enum etype {CD, DVD};
public:
    void put_data()
    {
        etype t_disk;
        char type;
        Type::put_data();
        cout << "\nDisc type (c/d): "; cin >> type;
        if (type = 'c')
            t_disk = CD;
        else
            t_disk = DVD;
    }
    void show_data()
    {
        Type::show_data();
        etype t_disk;
        char type;
        cout << "\nDisc type: ";
        if (t_disk = CD)
            cout << "CD";
        else
            cout << "DVD";
    }
    };

int main(){
    Disk d;
    d.put_data();
    d.show_data();


    return 0;
}
