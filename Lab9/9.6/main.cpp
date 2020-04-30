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
    cout << " Info!\n "<< " The name: " << name << endl << "The price: " << price <<endl;
}
};

class Publication2 : Publication {
protected:
    string rel_date;
public:
    void put_data () {
        Publication :: put_data();
        cout << "Enter Release date: ";
        cin >> rel_date;
    }
    void show_data () {
        Publication :: show_data();
        cout << "Release date: " << rel_date << endl;
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
        cout << "\n Sales for month" << j + 1 << ":";
        cout << salesArr [j];
    }
}

class Book : public Publication2, public Sales{
protected:
    int pages;
public:
    Book () : Publication2 () {
        pages = 0;
    }
    void put_data() {
        Publication2 :: put_data();
        cout << " Enter pages : ";
        cin >> pages;
        Sales :: put_data();
    }
    void show_data (){
        Publication2 :: show_data();
        cout << " Pages: " << pages << endl;
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
    void put_data() {
    Book :: put_data();
    cout << " Enter minutes: ";
    cin >> minutes;
    }
    void show_data() {
    Book :: show_data();
    cout << endl << " Minutes: " << minutes << endl;
    }

}
;

int main() {
    Type t;
    t.put_data();
    t.show_data();

    return 0;
}
